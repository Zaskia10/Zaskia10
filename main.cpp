#include "queue_vaksinasi.h"
#include <iostream>

;
int main()
{
// Membuat antrean
    Queue Q;
    createQueue_10312300411(Q);
// Menambahkan beberapa elemen ke dalam queue
    ElemQ* P1 = createElemQueue_10312300411("John Doe", 65, "lansia", 1);
    ElemQ* P2 = createElemQueue_10312300411("Alice", 30, "tenaga kesehatan", 2);
    ElemQ* P3 = createElemQueue_10312300411("Bob", 25, "pekerja", 3);
    ElemQ* P4 = createElemQueue_10312300411("Charlie", 70, "pensiunan", 4);
    ElemQ* P5 = createElemQueue_10312300411("David", 28, "pekerja", 5);
    enqueue_10312300411(Q, P1);
    enqueue_10312300411(Q, P2);
    enqueue_10312300411(Q, P3);
    enqueue_10312300411(Q, P4);
    enqueue_10312300411(Q, P5);

// Menampilkan isi queue
    cout << "Isi antrean awal:" << endl;
    printInfo_10312300411(Q);
    // Melayani antrean
    cout << "\nMelakukan pelayanan pada antrean:" << endl;
    serveQueue_10312300411(Q);
    // Memeriksa antrean setelah pelayanan
    cout << "\nIsi antrean setelah pelayanan:" << endl;
    printInfo_10312300411(Q);
    // Menambahkan elemen baru untuk simulasi pengaturan ulang prioritas
    ElemQ* P6 = createElemQueue_10312300411("Edward", 22, "pekerja", 6);
    enqueue_10312300411(Q, P6);
    // Simulasi reassignQueue untuk mengatur ulang antrean ke prioritas
    cout << "\nMengatur ulang antrean berdasarkan prioritas:" << endl;
    reassignQueue_10312300411(Q);
    printInfo_10312300411(Q);
    // Simulasi kondisi warga yang menunggu lebih dari 2 jam
    cout << "\nMemeriksa waktu tunggu dan mengubah prioritas jika lebih dari 2 jam:" << endl;
    checkWaitingTime_10312300411(Q, 130); // Asumsikan waktu sekarang 130 menit dari nomor antrean pertama
    printInfo_10312300411(Q);
    // Menangani kondisi darurat untuk seorang warga
    cout << "\nMenangani kondisi darurat untuk warga dengan nomor antrean 5:" << endl;
    emergencyHandle_10312300411(Q, 5);
    printInfo_10312300411(Q);
    // Update prioritas warga setiap jam
    cout << "\nMengupdate prioritas antrean setiap jam:" << endl;
    updatePriority_10312300411(Q);
    printInfo_10312300411(Q);
    // Mencari dan menghapus warga dengan nomor antrean tertentu
    cout << "\nMenghapus warga dengan nomor antrean 3:" << endl;
    ElemQ* removedElem = findAndRemove_10312300411(Q, 3);
    if (removedElem != nill) {
        cout << "Warga yang dihapus: " << info(removedElem).nama << endl;
        delete removedElem;
    }
    printInfo_10312300411(Q);
    // Mengecek ukuran queue
    cout << "\nUkuran antrean saat ini: " << size_10312300411(Q) << endl;
    return 0;
}
