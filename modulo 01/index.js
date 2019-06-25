const express = require("express");

const server = express();

//Query params = ?teste=1
//Route Params = /users/1
//Request body = {"name":"Douglas", "email":"douglaspoma@yahoo.com"}

const users = ["Douglas", "Elaine", "Osvaldo"];

server.get("/users/:index", (req, res) => {
  const { index } = req.params;
  return res.json(users[index]);
});

server.listen(3000);
