# tree-sitter-github-action

---

GitHub Action grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

> [!CAUTION]
> this is a fork of an upstream repo, ie. https://github.com/rewinfrey/tree-sitter-github-action/tree/master
> i have limited use of tree-sitter other than installing "tree-sitter modules" via nvim-treesitter
>
> this is my attempt to update this repo circa nov 6 2024 in hopes of getting better support while editing github actions workflow files.

presently i've completed the below

- updated the package.json file to include the necessary tree-sitter syntax
- updated the package.json to the latest versions of the packages / modules defined within
- can successfully run `tree-sitter generate` without seeing any errors be rendered to STDOUT

### todos

- [ ] i'm getting error running the below command,
    `node-gyp build`


#### References

* [workflow language specification](https://github.com/actions/workflow-parser/blob/master/language.md)
