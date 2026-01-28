#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Ruta de la imagen (doble \\ en Windows)
    string ruta = "C:\\Users\\luisa\\source\\repos\\opencv\\img\\fruta";

    // Leer imagen
    Mat img = imread(ruta);

    if (img.empty()) {
        cout << "No se pudo cargar la imagen" << endl;
        return -1;
    }

    // Convertir a escala de grises
    Mat gris;
    cvtColor(img, gris, COLOR_BGR2GRAY);

    // Mostrar imágenes
    imshow("Imagen Original", img);
    imshow("Imagen en Escala de Grises", gris);

    waitKey(0);
    destroyAllWindows();

    return 0;
}