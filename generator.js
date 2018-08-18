#!/usr/bin/env node

const octicons = require("@githubprimer/octicons-react");

const excludes = ["default", "getIconByName", "iconsByName"];

console.log("type icon =");
Object.keys(octicons).forEach((octicon) => {
  if (excludes.includes(octicon)) {
    return;
  }
  console.log(" | " + octicon);
});

console.log("\n", "let classOfIcon =");
console.log("  fun");

Object.keys(octicons).forEach((octicon) => {
  if (excludes.includes(octicon)) {
    return;
  }
  console.log(
    "  | " + octicon + ' => Js.Dict.get(octicons, "' + octicon + '")',
  );
});
