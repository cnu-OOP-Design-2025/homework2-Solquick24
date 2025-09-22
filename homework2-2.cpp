#include <iostream>
#include <string>
#include "homework2-2.h"

void fillStudentRecord(StudentStruct *students, int *numOfStudent) {
    addStudent(students, numOfStudent, "Alice", 1001, 90.7, 91.0);
    addStudent(students, numOfStudent, "Bob", 1002, 68.5, 74.8);
    addStudent(students, numOfStudent, "Charlie", 1003, 84.2, 72.8);
    addStudent(students, numOfStudent, "David", 1004, 63.7, 77.6);
    addStudent(students, numOfStudent, "Eva", 1005, 97.0, 89.6);
    addStudent(students, numOfStudent, "Frank", 1006, 83.0, 62.2);
    addStudent(students, numOfStudent, "Grace", 1007, 74.6, 96.0);
    addStudent(students, numOfStudent, "Hannah", 1008, 89.5, 82.4);
    addStudent(students, numOfStudent, "Ian", 1009, 98.4, 91.3);
    addStudent(students, numOfStudent, "Jane", 1010, 65.6, 84.0);
    addStudent(students, numOfStudent, "Kevin", 1011, 91.7, 83.1);
    addStudent(students, numOfStudent, "Laura", 1012, 78.2, 61.7);
    addStudent(students, numOfStudent, "Mike", 1013, 81.8, 69.6);
    addStudent(students, numOfStudent, "Nina", 1014, 83.6, 69.6);
    addStudent(students, numOfStudent, "Oscar", 1015, 63.9, 98.7);
    addStudent(students, numOfStudent, "Paula", 1016, 67.4, 81.2);
    addStudent(students, numOfStudent, "Quinn", 1017, 98.3, 79.8);
    addStudent(students, numOfStudent, "Rachel", 1018, 89.0, 67.7);
    addStudent(students, numOfStudent, "Steve", 1019, 89.4, 96.6);
    addStudent(students, numOfStudent, "Tina", 1020, 95.1, 76.8);
    addStudent(students, numOfStudent, "Uma", 1021, 91.7, 77.2);
    addStudent(students, numOfStudent, "Victor", 1022, 93.8, 77.3);
    addStudent(students, numOfStudent, "Wendy", 1023, 86.2, 96.7);
    addStudent(students, numOfStudent, "Xander", 1024, 90.2, 73.3);
    addStudent(students, numOfStudent, "Yvonne", 1025, 87.3, 98.6);
    addStudent(students, numOfStudent, "Zack", 1026, 85.8, 70.8);
    addStudent(students, numOfStudent, "Amber", 1027, 74.2, 98.1);
    addStudent(students, numOfStudent, "Brian", 1028, 79.2, 69.2);
    addStudent(students, numOfStudent, "Cathy", 1029, 86.1, 82.2);
    addStudent(students, numOfStudent, "Derek", 1030, 73.1, 100.0);
    addStudent(students, numOfStudent, "Elena", 1031, 62.1, 84.8);
    addStudent(students, numOfStudent, "Fred", 1032, 65.4, 60.7);
    addStudent(students, numOfStudent, "Gina", 1033, 97.7, 91.7);
    addStudent(students, numOfStudent, "Harry", 1034, 66.0, 60.3);
    addStudent(students, numOfStudent, "Isla", 1035, 89.7, 62.7);
    addStudent(students, numOfStudent, "Jack", 1036, 95.9, 95.1);
    addStudent(students, numOfStudent, "Kara", 1037, 91.4, 86.9);
    addStudent(students, numOfStudent, "Liam", 1038, 74.8, 60.1);
    addStudent(students, numOfStudent, "Mona", 1039, 77.8, 76.8);
    addStudent(students, numOfStudent, "Noah", 1040, 86.8, 90.3);
    addStudent(students, numOfStudent, "Olivia", 1041, 77.3, 69.2);
    addStudent(students, numOfStudent, "Peter", 1042, 97.4, 75.3);
    addStudent(students, numOfStudent, "Queen", 1043, 78.5, 74.6);
    addStudent(students, numOfStudent, "Ron", 1044, 96.0, 78.3);
    addStudent(students, numOfStudent, "Sara", 1045, 91.0, 66.1);
    addStudent(students, numOfStudent, "Tom", 1046, 90.7, 61.4);
    addStudent(students, numOfStudent, "Ursula", 1047, 66.1, 68.0);
    addStudent(students, numOfStudent, "Vince", 1048, 65.1, 89.8);
    addStudent(students, numOfStudent, "Will", 1049, 66.9, 67.4);
    addStudent(students, numOfStudent, "Zoe", 1050, 78.1, 76.0);

}

/* Return student ID */
int findBestStudentInMidterm(StudentStruct* students, int numOfStudent) {
    /* TODO */
    float maxScore = -1.0f;
    int bestStudentId = -1;

    for ( int i = 0; i < numOfStudent; i++ ) {
        if ( (*(students + i)).record.midterm > maxScore ) {
            maxScore = (*(students + i)).record.midterm;
            bestStudentId = (*(students + i)).id;
        }
    }
    return bestStudentId;
}

/* Return student ID */
int findBestStudentInFinal(StudentStruct* students, int numOfStudent) {
    /* TODO */
    float maxScore = -1.0f;
    int bestStudentId = -1;

    for ( int i = 0; i < numOfStudent; i++ ) {
        if ( (*(students + i)).record.final > maxScore ) {
            maxScore = (*(students + i)).record.final;
            bestStudentId = (*(students + i)).id;
        }
    }
    return bestStudentId;
}

/* Return student ID */
int findBestStudent(StudentStruct* students, int numOfStudent) {
    /* TODO */
    float meanMaxScore = -1.0f;
    int bestStudentID = -1; 

    for ( int i = 0; i < numOfStudent; i++ ) {

        float meanScore =  ( (*(students + i)).record.midterm + (*(students + i)).record.final ) / 2.0f;

        if ( meanScore > meanMaxScore ) {
            meanMaxScore = meanScore;
            bestStudentID = (*(students + i)).id;
        }
    }
    return bestStudentID;
}

/* Return Index */
int findStudentByStudentID(StudentStruct* students, int numOfStudent, int id) {
    for ( int i = 0; i < numOfStudent; i++ ) { // 끝까지 반복문을 돌렸을때
        if ( (*(students + i)).id == id ) { // 원하는 id랑 일치하면
            return i;   // index 반환
        }
    }
    return -1;
}

void modifyRecord(StudentStruct *students, int numOfStudent, const StudentStruct& student) {
    int idx = findStudentByStudentID(students, numOfStudent, student.id);
    if (idx >= 0) {
        students[idx].record.midterm = student.record.midterm;
        students[idx].record.final = student.record.final;
    }
}

void addStudent(StudentStruct *students, int *numOfStudent, const char* name, int id, float midterm, float final) {
    int idx = findStudentByStudentID(students, *numOfStudent, id);
    if (idx < 0) {
        students[*numOfStudent] = StudentStruct( name , id, midterm, final );
        ++(*numOfStudent);
    }
}

void deleteStudent(StudentStruct* students, int *numOfStudent, int id) {
    int idx = findStudentByStudentID(students, *numOfStudent, id);
    if (idx >= 0) {
        for ( int i = idx; i < *numOfStudent - 1; i++ ) {
            (*(students + i)) = (*(students + i + 1));
        }
        --(*numOfStudent);
    }
}

float getMidtermAverage(StudentStruct* students, int numOfStudent) {
    float meanMidterm = 0.0f;
    float sumMidterm = 0.0f;

    if ( numOfStudent > 0) { // 학생이 있다면 

        for ( int i = 0; i < numOfStudent; i++ ) {
        sumMidterm += (*(students + i)).record.midterm;
        }

        meanMidterm = sumMidterm / numOfStudent;

        return meanMidterm;
    }
    
    return 0.0f;
}

float getFinalAverage(StudentStruct* students, int numOfStudent) {
    /* TODO */
    float meanFinal = 0.0f;
    float sumFinal = 0.0f;

    if ( numOfStudent > 0) { // 학생이 있다면 

        for ( int i = 0; i < numOfStudent; i++ ) {
        sumFinal += (*(students + i)).record.final;
        }

        meanFinal = sumFinal / numOfStudent;

        return meanFinal;
    }
    
    return 0.0f;
}

float getTotalAverage(StudentStruct* students, int numOfStudent) {
    float meanMidterm = 0.0f;
    float meanFinal = 0.0f;
    float meanTotal = 0.0f;

    float sumMidterm = 0.0f;
    float sumFinal = 0.0f;
    float sumTotal = 0.0f;

    if ( numOfStudent > 0) { // 학생이 있다면 

        for ( int i = 0; i < numOfStudent; i++ ) {   // 중간 + 기말 해서 나누기 2 하고 다시 그걸 더해서 평균 내면 평균에 평균을 내는 거임.
             //그냥 ( 점수의 총합 ) / ( 점수의 개수 )로 평균을 구하자.

            sumMidterm += (*(students + i)).record.midterm; 
            sumFinal += (*(students + i)).record.final;
        }

        meanMidterm = sumMidterm / numOfStudent;
        meanFinal = sumFinal / numOfStudent;

        meanTotal = (meanMidterm + meanFinal) / 2.0f;

        return meanTotal;
    }
    
    return 0.0f;
}

void printStudentInfo(StudentStruct* students, int numOfStudent, int id) {
    int idx = findStudentByStudentID(students, numOfStudent, id);
    if (idx >= 0) {
        std::cout << "Name: " << students[idx].name 
                  << ", ID: " << students[idx].id << std::endl;
    }
}


