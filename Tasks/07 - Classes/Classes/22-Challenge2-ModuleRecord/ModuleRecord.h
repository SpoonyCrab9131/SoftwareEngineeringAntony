#pragma once

#include <string>

using namespace std;

class ModuleRecord
{

public:

	ModuleRecord(string moduleName, string subjectArea, unsigned int code, unsigned int creditsPerSemester, unsigned int noSemesters) {

		setModuleName(moduleName);
		setSubjectArea(subjectArea);
		setCode(code);
		setCreditsPerSemester(creditsPerSemester);
		setNoSemesters(noSemesters);

		updateModuleSummary();

	}

	string moduleSummary() {
		return getModuleSummaryString();
	}

	unsigned int totalCredits() {
		return creditsPerSemester * noSemesters;
	}

private:
	string moduleSummaryString;
	string moduleName;
	string subjectArea = "COMP";
	unsigned int code;
	unsigned int creditsPerSemester = 20;
	unsigned int noSemesters = 1;

	void updateModuleSummary() {

		moduleSummaryString =
			"Module Name: " + moduleName + "\n" +
			"Subject area: " + subjectArea + "\n" +
			"Code: " + to_string(code) + "\n" +
			"Credits Per Semester: " + to_string(creditsPerSemester) + "\n" +
			"Number of Semesters: " + to_string(noSemesters) + "\n";

	}

	string getModuleSummaryString() {
		return moduleSummaryString;
	}

	void setModuleName(string moduleNameInput) {
		 moduleName = moduleNameInput;
	}

	void setSubjectArea(string subjectAreaInput) {
		 subjectArea = subjectAreaInput;
	}

	void setCode(int codeInput) {
		 code = codeInput;
	}

	void setCreditsPerSemester(int creditsPerSemesterInput) {
		 creditsPerSemester = creditsPerSemesterInput;
	}

	void setNoSemesters(int noSemestersInput) {
		 noSemesters = noSemestersInput;
	}
};

