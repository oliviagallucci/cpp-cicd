# cpp-cicd

Setting up automated testing in GitHub CI/CD for C++ projects to catch bugs in your code involves several steps. This repository serves as a general guide on how to do it. 

## File structure 

The structure of your GitHub project directory may vary depending on the specifics of your project and your personal preferences. However, there are some common conventions to consider when organizing your project directory structure. 

Here's a sample outline: 

```makefile
project-name/
    ├── .git/                     # git repository (automatically created)
    ├── README.md                 # project documentation
    ├── LICENSE                   # license file (e.g., MIT, Apache)
    ├── .gitignore                # git ignore file (specify files/directories to ignore)
    ├── .github/                  # GitHub-specific configuration (e.g., workflows)
    ├── src/                      # source code directory
    │   ├── main.cpp              # main source code file (for executables)
    │   ├── library/              # source code for libraries (if applicable)
    │   └── ...                   # other source files and directories
    ├── include/                  # header files (if applicable)
    ├── tests/                    # test files and directories
    │   ├── unit_tests/           # unit tests (e.g., using GTest, Catch2)
    │   └── integration_tests/    # integration tests (if applicable)
    ├── docs/                     # project documentation (besides README.md)
    ├── data/                     # data files (if applicable)
    ├── scripts/                  # scripts for building, deploying, etc.
    └── examples/                 # example code or usage examples
```

Here's an explanation of each directory and file:

- `.git/`: This directory is automatically created when you initialize a Git repository. It stores Git-related metadata and information about your project's history.

- `README.md`: A Markdown file that provides an overview of your project, including its purpose, usage, installation instructions, and any other relevant information.

- `LICENSE`: A file that specifies the open-source license under which your project is released. I prefer to use LICENSE.md, but I think just "LICENSE" is the standard. (Would do further research on this IMO)

- `.gitignore`: A file that specifies files and directories to be ignored by Git (e.g., build artifacts, temporary files, dependencies).

- `.github/`: This directory can contain GitHub-specific configuration files, such as workflows for CI/CD (Continuous Integration/Continuous Deployment).

- `src/`: This is where your source code resides. Main source files, libraries, and other code-related directories can be placed here.

- `include/`: If your project uses header files, you can place them in this directory.

- `tests/`: This directory is used for testing your code. You can organize your tests into subdirectories, such as `unit_tests/` and `integration_tests/`.

- `docs/`: Additional project documentation, apart from the main README, can be placed here.

- `data/`: If your project involves data files, you can store them in this directory.

- `scripts/`: Any scripts related to building, deploying, or automating tasks can be placed here.

- `examples/`: Code examples or usage examples that demonstrate how to use your project can be stored in this directory.

Remember that this is just a suggested outline, and you can customize it to fit the specific needs and structure of your project. The key is to keep your project organized, make it easy for others to understand and contribute, and follow best practices for version control using Git and GitHub.

