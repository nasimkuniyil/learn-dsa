# 🔑 Keywords and Usage

## 1. `feat`

- **Meaning**: Added a new feature, problem, or solution.  
- **Use it when**: You add a new algorithm, data structure, or example.  
- **Examples**:

feat: add Binary Search solution
feat: implement Linked List

---

## 2. `fix`

- **Meaning**: Fixed a bug or mistake in the code.  
- **Use it when**: You correct wrong logic, syntax errors, or edge cases.  
- **Examples**:

fix: correct logic in Bubble Sort
fix: handle edge case in Binary Search

---

## 3. `docs`

- **Meaning**: Related to documentation only.  
- **Use it when**: You add comments, notes, problem statements, or explanations.  
- **Examples**:

docs: add explanation for Quick Sort
docs: update README with learning goals

---

## 4. `refactor`

- **Meaning**: Improved the code structure without changing how it works.  
- **Use it when**: You make code cleaner, rename variables, or reorganize logic.  
- **Examples**:

refactor: simplify recursion example
refactor: improve readability of Merge Sort code

---

## 5. `perf`

- **Meaning**: Improved performance (time or space complexity).  
- **Use it when**: You optimize an algorithm or make it run faster.  
- **Examples**:

perf: optimize Quick Sort for better performance
perf: reduce memory usage in DP solution

---

## 6. `test`

- **Meaning**: Related to testing the code.  
- **Use it when**: You add test cases or verify correctness.  
- **Examples**:

test: add test cases for Stack operations
test: verify DFS and BFS outputs

---

## 7. `chore`

- **Meaning**: General tasks that are not about code logic.  
- **Use it when**: You add configs, organize folders, or update gitignore.  
- **Examples**:
chore: setup folder structure for problems
chore: update .gitignore file

---

## ✅ Tips

- Always start with a **keyword**.  
- Keep the message **short and clear**.  
- Use **present tense** (e.g., "add" not "added").

---

## 📌 Example Commit History

chore: initialize DSA learning repository
feat: add Binary Search solution
feat: implement Stack using array
fix: correct logic in Bubble Sort
docs: add explanation for recursion
refactor: improve readability of Merge Sort
perf: optimize Quick Sort performance
test: add edge cases for Binary Search

---

## 📝 Commit Message Template

You can save this as `.gitmessage.txt` and set it as your default with:

```bash
git config --global commit.template ~/.gitmessage.txt


<type>: <short summary>

# Commit types:
# feat     -> new feature, algorithm, or solution
# fix      -> bug fix or logic correction
# docs     -> documentation changes (README, comments, explanations)
# refactor -> code restructuring without changing behavior
# perf     -> performance improvements (time/space optimization)
# test     -> adding or improving tests
# chore    -> maintenance tasks (folders, gitignore, setup)

# Example:
# feat: add Binary Search solution
# fix: correct logic in Bubble Sort
