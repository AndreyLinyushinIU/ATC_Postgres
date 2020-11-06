const express = require("express")
const Router = require("./Router")

const app = express()
app.use(Router)

async function start() {
    try {
        app.listen(process.env.PORT, () => {
            console.log("Server started");
        })
    } catch(e) {
        console.log(e);
    }
}

start().then();