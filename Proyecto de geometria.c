// Este fue mi primer proyecto de programación para la materia Geometría Analítica en el primer semestre de 2019.
// Aprendiendo a usar git
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ARREGLO_MAX 100
#define PI 3.14159265
#define MAX_STRLEN 256
int main()
{
	int selector, volver, cantidad, i, tam;
	float componentes[ARREGLO_MAX], magnitud, coordenadasenx[ARREGLO_MAX], coordenadaseny[ARREGLO_MAX], coordenadasenz[ARREGLO_MAX], sumax, sumay, sumaz, x1, x2, y1, y2, z1, z2, k, a1, a2, a3, b1, b2, b3, l, j, c1, c2, c3, p, ma, mb, theta, modulo, anguloa, angulob, anguloc, areapg, areatri, x, y, h, z, coseno, seno, nseno, k2, k3;
	float A, B, C, S, Area, D, Base, Altura, Perimetro, d, b, a, hipotenusa;
	int c, e, f;
	int ea, eb, ec, eca, ecae, ecb, eaa, eab, eba, ebb, ebba, ebc, ebd, AT;
	float dp, xm, ym, r, xr, xy, m, n, base, hh, v, v1, v2, v3, v4, v5, arl, al, at, ap, Ap, apt, P, ladoa, ladob, ladoc, diagonal, dim, nl, dv, Ast, Astb, ab, lb, sp, st, V1, V2, VT, A1, lc, cl;
	float ba;
	int fig;
	float l1;
	float l2;
	float l3;
	float l4;
	float py;
	char u[MAX_STRLEN];
	while (1)
	{
		system("cls");
		printf("Proyecto de geometria analitica descriptiva.\n\nObjetivo:\n\n1)Unidad 1:Triangulos y cuadrilateros.\n2)Unidad 2:Geometria del espacio y cuerpos solidos.\n3)Unidad 3:Elementos de geometria analitica plana.\n4)Unidad 4:Vectores en R2 y R3.\n5)Unidad 5:Geometria de movimiento.\n6)Informacion del programa\n\nSelecciona el numero de unidad:");
		scanf("%i", &selector);
		switch (selector)
		{
		case 1:
		{
			system("cls");
			printf("Unidad 1:Triangulos y cuadrilateros.\n\n1)Area de un triangulo.\n2)Diagonal de un rectangulo dado sus lados.\n3)Area de un cuadrilatero.\n4)Perimetro de un paralelogramo dado sus lados.\n5)Area de Un Paralelogramo.\n6)Area de Un Rombo.\n7)Perimetro de Un Rombo.\n8)Area De Un Cuadrado.\n9)Area de un trapecio\n10)Hipetenusa de un triangulo rectangulo\n\n11)Apartado extra de polignos.\n\nSeleccione un tema:");
			scanf("%i", &selector);
			switch (selector)
			{
			case 1:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :1)Area de un triangulo.\n\n");
				printf("De el Lado 1: \n");
				scanf("%f", &A);
				printf("De el Lado 2: \n");
				scanf("%f", &B);
				printf("De el Lado 3: \n");
				scanf("%f", &C);
				if (A < B + C && B < A + C && C < A + B)
				{
					S = (A + B + C) / 2;

					Area = sqrt(S * (S - A) * (S - B) * (S - C));
					printf("El Area del Triangulo es: %0.2f", Area);
				}
				else
				{
					printf("El Triangulo No Existe. \n");
				}
				printf("\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 2:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :2)Diagonal de un rectangulo dado sus lados.\n\n");
				printf("Programa que Calcula la Diagonal De Un Rectangulo Dado Sus Lados A y B.\n");
				printf("Ingrese La Longitud del Lado A:\n");
				scanf("%f", &A);
				printf("Ingrese La Longitud del Lado B:\n");
				scanf("%f", &B);
				D = sqrt(pow(A, 2) + pow(B, 2));
				printf("La Diagonal del Rectangulo es: %0.2f", D);
				printf("\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 3:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :3)Area de un cuadrilatero.\n\n");
				printf("De La Base del Cuadrilatero: \n");
				scanf("%f", &Base);
				printf("De La Altura del Cuadrilatero: \n");
				scanf("%f", &Altura);
				Area = Base * Altura;
				printf("La Area del Cuadrilatero es: %0.2f ", Area);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 4:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :4)Perimetro de un paralelogramo dado sus lados.\n\n");
				printf("Calcular El Perimetro de Un Paralelogramo Dado sus Lados A Y B:\n");
				printf("Ingrese El Lado A:\n");
				scanf("%f", &A);
				printf("Ingrese La Lado B:\n");
				scanf("%f", &B);

				Perimetro = 2 * (A + B);
				printf("El Perimetro del Paralelogramo es:%0.2f", Perimetro);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 5:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :5)Area de Un Paralelogramo.\n\n");
				printf("Calcular El Area de Un Paralelogramo\n");
				printf("Ingre La Base:\n");
				scanf("%f", &Base);
				printf("Ingrese La Altura:\n");
				scanf("%f", &Altura);

				Area = Base * Altura;
				printf("El Area del  Paralelogramo es:%0.2f", Area);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 6:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :6)Area de Un Rombo.\n\n");
				printf("Calcular El Area de Un Rombo\n");
				printf("Ingrese La Diagonal Mayor:\n");
				scanf("%f", &D);
				printf("Ingrese La Diagonal Menor:\n");
				scanf("%f", &d);

				Area = (D * d) / 2;
				printf("El Area Del Rombo es:%0.2f", Area);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 7:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :7)Perimetro de Un Rombo.\n\n");
				printf("Calcular el Perimetro de Un Rombo Dado Su Lado\n");
				printf("Ingrese La Medida Del Lado:\n");
				scanf("%f", &A);

				Perimetro = A * 4;
				printf("El Perimetro Del Rombo es:%0.2f", Perimetro);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 8:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :8)Area De Un Cuadrado.\n\n");
				printf("Calcular El Area De Un Cuadrado Dado Su Lado A:\n");
				printf("Ingrese El Lado A:\n");
				scanf("%f", &a);

				b = pow(a, 2);
				printf("El Area del Cuadrado Es: %0.2f", b);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 9:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :9)Area de Un Trapecio.\n\n");
				printf("Calcular El Area de Un Trapecio Dado Su Base Mayor, Su Base Menor y Altura\n");
				printf("Ingrese La Base Mayor:\n");
				scanf("%f", &B);
				printf("Ingrese La Base Menor:\n");
				scanf("%f", &b);
				printf("Ingrese La Altura:");
				scanf("%f", &h);

				Area = ((B + b) / 2) * h;
				printf("El Area Del Trapecio Es:%0.2f", Area);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 10:
			{
				system("cls");
				printf("Unidad 1:Triangulos y cuadrilateros.\n\nTema seleccionado :10)Hipotenusa de un triangulo rectangulo.\n\n");
				printf("calcular la hipotenusa de un triangulo rectangulo,dado sus lados b y c \n");
				printf("ingrese su lado b:\n");
				scanf("%f", &b);
				printf("ingrese su lado c:\n");
				scanf("%f", &c);

				hipotenusa = (b*b)+(c*c);
				hipotenusa = sqrt(hipotenusa);
				printf("\nla hipotenusa del triangulo rectacgulo es:%0.2f", hipotenusa);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			}
			case 11:
			{
				system("cls");
				printf("Elija la figura de la cual desea obtener Area y Perimetro\n");
				printf("====================\n");
				printf("1. Cuadrado\n");
				printf("2. Rectangulo\n");
				printf("3. Triangulo\n");
				printf("4. Trapecio\n");
				printf("5. Circulo\n");
				printf("6. Poligono\n");
				scanf("%i", &fig);
				printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
				switch (fig)
				{
				case 1:
					system("cls");
					printf("Para conseguir area y Perimetro de un cuadrado\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf("Lado.\n");
					scanf("%f", &l);
					printf(" Unidad de medida (CM,M).\n");
					scanf("%s", u);
					printf("====================\n");
					a = pow(l, 2);
					p = 4 * l;
					printf("====================\n");
					printf("El area es igual a %f %s^2\n", a, u);
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;

				case 2:
					system("cls");
					printf("Para conseguir area y Perimetro de un rectangulo\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf("Base.\n");
					printf("Altura.\n");
					printf("Unidad de medida (CM,M).\n");
					printf("====================\n");
					scanf("%f", &ba);
					scanf("%f", &h);
					scanf("%s", u);
					a = ba * h;
					p = 2 * (ba + h);
					printf("====================\n");
					printf("El area es igual a %f %s^2\n", a, u);
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;
				case 3:
					system("cls");
					printf("Para conseguir area y Perimetro de un triangulo\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf("Base.\n");
					printf("Altura.\n");
					printf("Unidad de medida (CM,M).\n");
					printf("====================\n");
					scanf("%f", &ba);
					scanf("%f", &h);
					scanf("%s", u);
					a = (ba * h) / 2;
					printf("====================\n");
					printf("El area es igual a %f %s^2\n", a, u);
					printf("====================\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf("Medidas de los lados (L 1,2,3).\n");
					printf("====================\n");
					scanf("%f", &l1);
					scanf("%f", &l2);
					scanf("%f", &l3);
					p = l1 + l2 + l3;
					printf("====================\n");
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;
				case 4:
					system("cls");
					printf("Para conseguir area y Perimetro de un trapecio\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf(" Altura.\n");
					printf(" Base mayor.\n");
					printf(" Base menor.\n");
					printf(" Unidad de medida (CM,M).\n");
					printf("====================\n");
					scanf("%f", &h);
					scanf("%f", &b);
					scanf("%f", &ba);
					scanf("%s", u);
					a = (h * (b + ba)) / 2;
					printf("====================\n");
					printf("El Area es igual a %f %s^2\n", a, u);
					printf("====================\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf(" Medida de los 4 lados (L 1,2,3,4).\n");
					printf("====================\n");
					scanf("%f", &l1);
					scanf("%f", &l2);
					scanf("%f", &l3);
					scanf("%f", &l4);
					p = l1 + l2 + l3 + l4;
					printf("====================\n");
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;
				case 5:
					system("cls");
					printf("Para conseguir area y Perimetro de un circulo\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf(" Radio.\n");
					printf(" Unidad de medida (CM,M).\n");
					printf("====================\n");
					scanf("%f", &r);
					scanf("%s", u);
					py = 3.14159;
					a = py * (pow(r, 2));
					p = 2 * py * r;
					printf("====================\n");
					printf("El area es igual a %f %s^2\n", a, u);
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;
				case 6:
					system("cls");
					printf("Para conseguir area y Perimetro de un poligono\n");
					printf("Ingrese los siguientes datos:\n");
					printf("====================\n");
					printf(" Numero de lado.\n");
					printf(" Base.\n");
					printf(" Altura.\n");
					printf(" Unidad de medida (CM,M).\n");
					printf("====================\n");
					scanf("%f", &nl);
					scanf("%f", &ba);
					scanf("%f", &h);
					scanf("%s", u);
					a = (nl * ba * h) / 2;
					p = nl * ba;
					printf("====================\n");
					printf("El area es igual a %f %s^2\n", a, u);
					printf("El perimetro es igual a %f %s\n", p, u);
					printf("====================\n");
					printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
					scanf("%i", &volver);
					break;
				
					
				}
			}

			default:
				break;
			}
			break;
		}
		case 2:
		{
			system("cls");
			printf("\nseleccione un tema:\n");
			printf("\n1)Prismas\n2)piramides\n3)Volumen del cilindro\n\n");
			scanf("%d", &e);
			switch (e)
			{
			case 1:
				system("cls");
				printf("\nElija el tipo de prisma:\n\n");
				printf("1)Paralelepipedo\n2)Cubo\n\n");
				scanf("%d", &ea);
				switch (ea)
				{
				case 1:
					system("cls");
					printf("\nPara calcular:\n\n");
					printf("1)Volumen\n2)Altura\n3)Diagonal del paralelepipedo\n4)Area total\n\n");
					scanf("%d", &eaa);
					switch (eaa)
					{
					case 1:
						system("cls");
						printf("\nEscriba el area de la base del paralelepipedo\n");
						scanf("%f", &base);
						printf("Escriba la altura del paralelepipedo\n");
						scanf("%f", &h);
						printf("Para calcular el volumen de un paralelepipedo que lleva como base %.0f y como altura %.0f\n", base, h);
						v = base * h;
						printf("se multiplican para obtener como resultado:\t%.0f\n\n", v);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 2:
						system("cls");
						printf("\nEscriba el area de la base del paralelepipedo\n");
						scanf("%f", &base);
						printf("Escriba el volumen del paralelepipedo\n");
						scanf("%f", &v);
						printf("Para calcular la altura de un paralelepipedo que lleva como area de la base %.0f y que tiene como volumen %.0f es:\n", base, v);
						h = v / base;
						printf("%.2f\n\n", h);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 3:
						system("cls");
						printf("\nEscriba el largo del paralelepipedo:\n");
						scanf("%f", &ladoa);
						printf("Escriba el ancho del paralelepipedo:\n");
						scanf("%f", &ladob);
						printf("Escriba la altura del paralelepipedo:\n");
						scanf("%f", &h);
						printf("Para encontrar la diagonal del paralelepipedo se saca raiz cuadrada de los datos dados elevados al cuadrado\n");
						diagonal = sqrt(pow(ladoa, 2) + pow(ladob, 2) + pow(h, 2));
						printf("La cual es: %.2f\n\n", diagonal);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 4:
						system("cls");
						printf("\nDigite el lado en primera dimension del paralelepipedo:\n");
						scanf("%f", &ladoa);
						printf("Digite el lado en segunda dimension del paralelepipedo:\n");
						scanf("%f", &ladob);
						printf("Digite el lado en tercera dimension del paralelepipedo:\n");
						scanf("%f", &ladoc);
						AT = ((ladoa * ladob) + (ladob * ladoc) + (ladoa * ladoc)) * 2;
						printf("\nDados los lados, el area total del paralelepipedo es: %d\n\n", AT);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					default:
						system("cls");
						printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
						break;
					}
					break;
				case 2:
					system("cls");
					printf("\nPara calcular:\n\n");
					printf("1)Volumen\n2)Altura\n3)Encontrar el lado con el area total dada\n\n");
					scanf("%d", &eab);
					switch (eab)
					{
					case 1:
						system("cls");
						printf("\nEscriba la longitud de una arista(lado) del cubo:\n");
						scanf("%f", &arl);
						v = pow(arl, 3);
						printf("\nDadas las aristas(lados) que son: %.0f", arl);
						printf("\nEntonces el volumen del cubo es: %.0f\n\n", v);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 2:
						system("cls");
						printf("\nEscriba el area lateral del cubo:\n");
						scanf("%f", &al);
						printf("Escriba el perimetro de la base:\n");
						scanf("%f", &P);
						h = al / P;
						printf("\nDado el area lateral %.2f y el perimetro de la base %.2f\n", al, P);
						printf("\nLa altura del cubo es: %.2f\n\n", h);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 3:
						system("cls");
						printf("\nDigite el area total\n");
						scanf("%f", &at);
						l = sqrt(at / 6);
						printf("\nPor el area total dada %.0f, se concluye que los lados del cubo miden: %.2f\n\n", at, l);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					default:
						system("cls");
						printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
						break;
					}
				default:
					system("cls");
					printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
					break;
				}
				break;
			case 2:
				system("cls");
				printf("\nElija el tipo de piramide:\n");
				printf("\n1)Regular\n2)Truncada\n\n");
				scanf("%d", &eba);
				switch (eba)
				{
				case 1:
					system("cls");
					printf("\nPara calcular:\n\n1)Volumen\n2)Apotema\n3)Perimetro de la base\n\n");
					scanf("%d", &ebb);
					switch (ebb)
					{
					case 1:
						system("cls");
						printf("\nIngrese el area de la base:\n");
						scanf("%f", &base);
						printf("Ingrese la altura de la piramide:\n");
						scanf("%f", &h);
						printf("Se multiplica cada valor y se divide entre tres\n");
						v = (base * h) / 3;
						printf("Donde el resultado es: %.2f", v);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 2:
						system("cls");
						printf("\nIngrese el numero de lados para la base de la piramide:\n");
						scanf("%f", &nl);
						printf("Ingrese la longitud de los lados:\n");
						scanf("%f", &l);
						printf("Ingrese la altura de la piramide:\n");
						scanf("%f", &h);
						ap = sqrt(pow(h, 2) - (pow(l, 2) / 2));
						Ap = sqrt(pow(h, 2) + pow(ap, 2));
						printf("\nSe requiere del apotema de la base, el cual es %.2f\nY con eso concluimos que el apotema es: %.2f", ap, Ap);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					case 3:
						system("cls");
						printf("\nIngrese el numero de lados:\n");
						scanf("%f", &nl);
						printf("Ingrese la longitud de los lados:\n");
						scanf("%f", &l);
						P = nl * l;
						printf("\nEl perimetro de la base es: %.1f", P);
						printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
						scanf("%i", &volver);
						break;
					default:
						system("cls");
						printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
						break;
					}
					break;
				case 2:
					system("cls");
					printf("\nPara calcular:\n\n");
					printf("1)Volumen\n2)Areas\n\n");
					scanf("%d", &ebc);
					switch (ebc)
					{
					case 1:
						system("cls");
						printf("Digite la medida del lado de la base\n");
						scanf("%f", &lb);
						printf("Digite la medida del la altura\n");
						scanf("%f", &h);
						printf("Digite la altura de la piramide truncada\n");
						scanf("%f", &sp);

						if (h > sp)
						{
							A = pow(lb, 2);
							k = h - sp;
							A1 = pow(k / h, 2) * A;
							V1 = (1 * A * h) / 3;
							V2 = (1 * A1 * k) / 3;
							VT = V1 - V2;
							printf("\nEl area de la seccion transversal es : %0.2f\n\nEL volumen es : %0.2f\n\n", A1, VT);
							printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
							scanf("%i", &volver);
						}
						else
						{
							printf("La altura de la piramide truncada debe ser menor a la altura total.\n");
							printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
							scanf("%i", &volver);
						}
						break;
					case 2:
						system("cls");
						printf("\nPara calcular:\n\n1)Area lateral\n2)Area total\n\n");
						scanf("%d", &ebd);
						switch (ebd)
						{
						case 1:
							system("cls");
							printf("\nDigite el perimetro de la base:\n");
							scanf("%f", &P);
							printf("Digite el perimetro del area transversal:\n");
							scanf("%f", &p);
							printf("Digite la longitud de las caras laterales:\n");
							scanf("%f", &lc);
							if (P > p)
							{
								al = ((P + p) / 2 * (lc));
								printf("El area lateral es: %.2f \n\n", al);
							}
							else
							{
								printf("El perimetro de la base debe ser mayor al del area transversal.\n\n");
							}
							printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
							scanf("%i", &volver);
							break;
						case 2:
							system("cls");
							printf("Digite la cantidad de lados de la base:\n");
							scanf("%f", &cl);
							printf("Digite la medida de los lados de la base:\n");
							scanf("%f", &l);
							printf("Digite la medida de los lados del area truncada:\n");
							scanf("%f", &lc);
							printf("Digite la medida de la altura de la piramide truncada:\n");
							scanf("%f", &sp);

							ap = l / (2 * tan(180 / cl));
							apt = lc / (2 * tan(180 / cl));

							if (l > lc)
							{
								if (cl == 3)
								{
									ab = sqrt(3) * pow(l, 2) / 4;
									at = sqrt(3) * pow(lc, 2) / 4;
								}
								else if (cl == 4)
								{
									ab = pow(l, 2);
									at = pow(lc, 2);
								}
								else if (cl >= 5)
								{
									ab = l * cl * ap / 2;
									at = lc * cl * apt / 2;
								}
								P = l * cl;
								p = lc * cl;
								n = l - lc;
								i = sqrt(pow(sp, 2) + pow(n, 2));
								at = ((P + p) / 2) * i + ab + at;
								printf("El area total es: %.2f\n\n", at);
								printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
								scanf("%i", &volver);
							}
							else
							{
								printf("Los lados de la base deben ser mayores a los de la parte truncada:\n");
								printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
								scanf("%i", &volver);
								break;
							}
							printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
							scanf("%i", &volver);
							break;
						default:
							system("cls");
							printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
							break;
						}
					default:
						system("cls");
						printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
						break;
					}
				default:
					system("cls");
					printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
					break;
				}
				break;
			case 3:
				system("cls");
				printf("'Cilindros'\n\n");
				printf("\nPara calcular el volumen:\n\n");
				printf("Escriba el area de la base:\n");
				scanf("%f", &base);
				printf("Escriba la altura:\n");
				scanf("%f", &h);
				v = base * h;
				printf("El volumen del cilindro circular es: %f", v);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			default:
				system("cls");
				printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
				break;
				break;
			}
			break;
		}
		case 3:
		{
			system("cls");
			printf("\nseleccione un tema:\n");
			printf("\n1)Pendiente de un segmento\n2)Distancia entre dos puntos\n3)Coordenadas del punto medio\n4)Division de un segmento segun la razon dada\n\n");
			scanf("%d", &f);
			switch (f)
			{
			case 1:
				system("cls");
				printf("\nIngrese el valor de x1 del punto A:\n");
				scanf("%f", &x1);
				printf("Ingrese el valor de y1 del punto A:\n");
				scanf("%f", &y1);
				printf("Ingrese el valor de x2 del punto B:\n");
				scanf("%f", &x2);
				printf("Ingrese el valor de y2 del punto B:\n");
				scanf("%f", &y2);
				m = (y2 - y1) / (x2 - x1);
				printf("\n\nLa pendiente del segmento AB es: %.2f", m);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			case 2:
				system("cls");
				printf("\nIngrese el valor de x1:\n");
				scanf("%f", &x1);
				printf("Ingrese el valor de y1:\n");
				scanf("%f", &y1);
				printf("Ingrese el valor de x2:\n");
				scanf("%f", &x2);
				printf("Ingrese el valor de y2:\n");
				scanf("%f", &y2);
				dp = pow((x2 - x1), 2) + pow((y2 - y1), 2);
				dp = sqrt(dp);
				printf("\n\nLa distancia entre los puntos P1 (%.0f,%.0f), P2 (%.0f,%.0f) es: %.2f", x1, y1, x2, y2, dp);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			case 3:
				system("cls");
				printf("\nIngrese el valor de x1:\n");
				scanf("%f", &x1);
				printf("Ingrese el valor de y1:\n");
				scanf("%f", &y1);
				printf("Ingrese el valor de x2:\n");
				scanf("%f", &x2);
				printf("Ingrese el valor de y2:\n");
				scanf("%f", &y2);
				xm = (x1 + x2) / 2;
				ym = (y1 + y2) / 2;
				printf("\n\nLas coordenadas del punto medio entre P1 (%.0f,%.0f), P2 (%.0f,%.0f) es: PM (%.0f,%.0f)", x1, y1, x2, y2, xm, ym);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			case 4:
				system("cls");
				printf("\nIngrese el valor de x1:\n");
				scanf("%f", &x1);
				printf("Ingrese el valor de y1:\n");
				scanf("%f", &y1);
				printf("Ingrese el valor de x2:\n");
				scanf("%f", &x2);
				printf("Ingrese el valor de y2:\n");
				scanf("%f", &y2);
				printf("Ingrese el valor de la razon:\n");
				scanf("%f", &r);
				printf("\nLas coordenadas del punto X,Y que divide al segmento en la razon %.0f es:\t", r);
				xr = (x1 + (r * x2)) / (1 + r);
				xy = (y1 + (r * y2)) / (1 + r);
				printf("P (%.0f , %.0f)", xr, xy);
				printf("\n\nDigite cualquier numero para volver al menu principal.\n\n");
				scanf("%i", &volver);
				break;
			default:
				system("cls");
				printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
				break;
			}
		default:
			system("cls");
			printf("\n\n\n\t\t\t\t\tPorfavor elija otra opcion.\n\n");
			break;
		}
		case 4:
		{
			system("cls");
			printf("Unidad 4:Vectores en R2 y R3.\n\n1)Magnitud de un vector.\n2)Resta de vectores en R2 y R3.\n3)Suma de vectores.\n4)Producto de un vector por un escalar.\n5)Producto cruz.\n6)Producto mixto o Triple producto escalar.\n7)Producto punto\n8)Angulo entre dos vectores\n9)Vectores unitarios\n10)Angulos directores\n11)Area de un paralelogramo.\n12)Area de un triangulo.\n13)Volumen de un paralelepipedo.\n14)Volumen de una piramide triangular.\n\nSeleccione un tema:");
			scanf("%i", &selector);
			switch (selector)
			{
			case 1:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n1) Magnitud de un vector.\n\nEscriba la cantidad de componentes:\n");
				scanf("%i", &cantidad);
				for (i = 1; i <= cantidad; i += 1)
				{
					printf("Escriba la componente #%i del vector.\n", i);
					scanf("%f", &componentes[i - 1]);
				}
				for (i = 1; i <= cantidad; i += 1)
				{
					magnitud = magnitud + (pow((componentes[i - 1]), 2));
				}
				magnitud = pow(magnitud, 0.5);
				printf("\nLa magnitud es:%0.2f\n\nDigite un numero para volver al menu.\n", magnitud);
				scanf("%i", &volver);
				break;
			}
			case 2:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n2) Resta de Vectores.\n\n1)coordenadas en R2(x,y)\n2)coordendas en R3(x,y,z)\n\nseleccione una opcion:\n");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nDigite cantidad de vectores\n");
					scanf("%i", &tam);
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nDigite x%i\n", i);
						scanf("%f", &coordenadasenx[i - 1]);
						printf("\nDigite y%i\n", i);
						scanf("%f", &coordenadaseny[i - 1]);
					}
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nEl vector #%i es <%0.2f,%0.2f>\n", i, coordenadasenx[i - 1], coordenadaseny[i - 1]);
					}
					sumax = coordenadasenx[0];
					sumay = coordenadaseny[0];
					for (i = 2; i <= tam; i += 1)
					{
						sumax = sumax - coordenadasenx[i - 1];
					}
					for (i = 2; i <= tam; i += 1)
					{
						sumay = sumay - coordenadaseny[i - 1];
					}
					magnitud = pow((pow(sumax, 2) + pow(sumay, 2)), 0.5);
					printf("\nEl vector resultante es <%0.2f,%0.2f>\n", sumax, sumay);
					printf("\nSu magnitud es %0.2f\n", magnitud);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("\nDigite cantidad de vectores\n");
					scanf("%i", &tam);
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nDigite x%i\n", i);
						scanf("%f", &coordenadasenx[i - 1]);
						printf("\nDigite y%i\n", i);
						scanf("%f", &coordenadaseny[i - 1]);
						printf("\nDigite z%i\n", i);
						scanf("%f", &coordenadasenz[i - 1]);
					}
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nEl vector #%i es <%0.2f,%0.2f,%0.2f>\n", i, coordenadasenx[i - 1], coordenadaseny[i - 1], coordenadasenz[i - 1]);
					}
					sumax = coordenadasenx[0];
					sumay = coordenadaseny[0];
					sumaz = coordenadasenz[0];
					for (i = 2; i <= tam; i += 1)
					{
						sumax = sumax - coordenadasenx[i - 1];
						sumay = sumay - coordenadaseny[i - 1];
						sumaz = sumaz - coordenadasenz[i - 1];
					}
					printf("\nEl vector resultante es <%0.2f,%0.2f,%0.2f>\n", sumax, sumay, sumaz);
					magnitud = pow((pow(sumax, 2) + pow(sumay, 2)) + pow(sumaz, 2), 0.5);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				default:
				{
					break;
				}
				}

				break;
			}
			case 3:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado:\n\n 3) Suma de Vectores.\n\n1)coordenadas en R2(x,y)\n2)coordendas en R3(x,y,z)\n\nseleccione una opcion:");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nDigite cantidad de vectores\n");
					scanf("%i", &tam);
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nDigite x%i\n", i);
						scanf("%f", &coordenadasenx[i - 1]);
						printf("\nDigite y%i\n", i);
						scanf("%f", &coordenadaseny[i - 1]);
					}
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nEl vector #%i es <%0.2f,%0.2f>\n", i, coordenadasenx[i - 1], coordenadaseny[i - 1]);
					}
					sumax = coordenadasenx[0];
					sumay = coordenadaseny[0];
					for (i = 2; i <= tam; i += 1)
					{
						sumax = sumax + coordenadasenx[i - 1];
					}
					for (i = 2; i <= tam; i += 1)
					{
						sumay = sumay + coordenadaseny[i - 1];
					}
					magnitud = pow((pow(sumax, 2) + pow(sumay, 2)), 0.5);
					printf("\nEl vector resultante es <%0.2f,%0.2f>\n", sumax, sumay);
					printf("\nSu magnitud es %0.2f\n", magnitud);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("\nDigite cantidad de vectores\n");
					scanf("%i", &tam);
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nDigite x%i\n", i);
						scanf("%f", &coordenadasenx[i - 1]);
						printf("\nDigite y%i\n", i);
						scanf("%f", &coordenadaseny[i - 1]);
						printf("\nDigite z%i\n", i);
						scanf("%f", &coordenadasenz[i - 1]);
					}
					for (i = 1; i <= tam; i += 1)
					{
						printf("\nEl vector #%i es <%0.2f,%0.2f,%0.2f>\n", i, coordenadasenx[i - 1], coordenadaseny[i - 1], coordenadasenz[i - 1]);
					}
					sumax = coordenadasenx[0];
					sumay = coordenadaseny[0];
					sumaz = coordenadasenz[0];
					for (i = 2; i <= tam; i += 1)
					{
						sumax = sumax + coordenadasenx[i - 1];
						sumay = sumay + coordenadaseny[i - 1];
						sumaz = sumaz + coordenadasenz[i - 1];
					}
					printf("\nEl vector resultante es <%0.2f,%0.2f,%0.2f>\n", sumax, sumay, sumaz);
					magnitud = pow((pow(sumax, 2) + pow(sumay, 2)) + pow(sumaz, 2), 0.5);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				default:
				{
					break;
				}
				}

				break;
			}
			case 4:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado:\n\n4) producto de un vector por un escalar.\n\n1)Coordenadas en R2(x,y)\n2)Coordenadas en R3(x,y,z)\n\nSeleccione una opcion:");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\n\nEscriba el escalar\n\nk=");
					scanf("%f", &k);
					printf("\nEscriba la componente x del vector\n\nx=");
					scanf("%f", &a1);
					printf("\nEscriba la componente y del vector\n\ny=");
					scanf("%f", &a2);
					a1 = a1 * k;
					a2 = a2 * k;
					printf("El vector resusalnte es : <%0.2f,%0.2f>", a1, a2);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("\n\nEscriba el escalar\n\nk=");
					scanf("%f", &k);
					printf("\nEscriba la componente x del vector\n\nx=");
					scanf("%f", &a1);
					printf("\nEscriba la componente y del vector\n\ny=");
					scanf("%f", &a2);
					printf("\nEscriba la componente z del vector\n\nz=");
					scanf("%f", &a3);
					a1 = a1 * k;
					a2 = a2 * k;
					a3 = a3 * k;
					printf("El vector resusalnte es : <%0.2f,%0.2f,%0.2f>", a1, a2, a3);
					printf("\nDigite un numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				default:
				{
					break;
				}
				}
				break;
			}
			case 5:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado:\n\n5)Producto cruz.\n\nEscriba la componente en x del primer vector:");
				scanf("%f", &a1);
				printf("\nEscriba la componente en y del primer vector :");
				scanf("%f", &a2);
				printf("\nEscriba la componente en z del primer vector :");
				scanf("%f", &a3);
				printf("\nEscriba la componente en x del segundo vector :");
				scanf("%f", &b1);
				printf("\nEscriba la componente en y del segundo vector :");
				scanf("%f", &b2);
				printf("\nEscriba la componente en z del segundo vector :");
				scanf("%f", &b3);
				l = (a2 * b3) - (a3 * b2);
				j = -((a1 * b3) - (a3 * b1));
				k = (a1 * b2) - (a2 * b1);
				printf("\nEl vector #1 es:<%0.2fi,%0.2fj,%0.2fk>\nEl vector #2 es:<%0.2fi,%0.2fj,%0.2fk>\nEl producto cruz es: %0.2fi+%0.2fj+%0.2fk\n\nDigite un numero para volver al menu\n", a1, a2, a3, b1, b2, b3, l, j, k);
				scanf("%i", &volver);
				break;
			}
			case 6:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n6)Producto mixto o Triple producto escalar.\n\nDigite la componente x vector #1::");
				scanf("%f", &a1);
				printf("\nDigite la componente y vector #1:");
				scanf("%f", &a2);
				printf("\nDigite la componente z vector #1:");
				scanf("%f", &a3);
				printf("\nDigite la componente x vector #2:");
				scanf("%f", &b1);
				printf("\nDigite la componente y vector #2:");
				scanf("%f", &b2);
				printf("\nDigite la componente z vector #2:");
				scanf("%f", &b3);
				printf("\nDigite la componente x vector #3:");
				scanf("%f", &c1);
				printf("\nDigite la componente y vector #3:");
				scanf("%f", &c2);
				printf("\nDigite la componente z vector #3:");
				scanf("%f", &c3);
				k = a1 * (b2 * c3 - b3 * c2) - (a2 * (b1 * c3 - b3 * c1)) + a3 * (b1 * c2 - b2 * c1);
				printf("\nEl vector #1 es :<%0.2f,%0.2f,%0.2f>\nEl vector #2 es :<%0.2f,%0.2f,%0.2f>\nEl vector #3 es :<%0.2f,%0.2f,%0.2f>", a1, a2, a3, b1, b2, b3, c1, c2, c3);
				printf("\nEl producto mixto es: %0.2f\n\nDigite un numero para volver al menu\n", k);
				scanf("%i", &volver);
				break;
			}
			case 7:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n7)Producto punto.\n\n1)En R2(x,y)\n2)En R3(x,y,z)\n\nseleccione una opcion:\n");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nEscriba la componente x del vector #1:");
					scanf("%f", &x1);
					printf("\nEscriba la componente y del vector #1:");
					scanf("%f", &y1);
					printf("\nEscriba la componente x del vector #2:");
					scanf("%f", &x2);
					printf("\nEscriba la componente y del vector #2:");
					scanf("%f", &y2);
					p = x1 * x2 + y1 * y2;
					printf("\nEl producto punto es:%0.2f\n\nDigite un numero para volver al menu:", p);
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("Escriba la componente x del vector #1:");
					scanf("%f", &x1);
					printf("\nEscriba la componente y del vector #1:");
					scanf("%f", &y1);
					printf("\nEscriba la componente z del vector #1:");
					scanf("%f", &z1);
					printf("\nEscriba la componente x del vector #2:");
					scanf("%f", &x2);
					printf("\nEscriba la componente y del vector #2:");
					scanf("%f", &y2);
					printf("\nEscriba la componente z del vector #2:");
					scanf("%f", &z2);
					p = x1 * x2 + y1 * y2 + z1 * z2;
					printf("\nEl producto punto es:%0.2f\n\nDigite un numero para volver al menu:", p);
					scanf("%i", &volver);
					break;
				}
				default:
				{
					break;
				}
				}
				break;
			}
			case 8:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n8)Angulo de dos vectores.\n\n1)En R2(x,y)\n2)En R3(x,y,z)\n\nseleccione una opcion:\n");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nEscriba la componente x del vector #1:");
					scanf("%f", &a1);
					printf("\nEscriba la componente y del vector #1:");
					scanf("%f", &a2);
					printf("\nEscriba la componente x del vector #2:");
					scanf("%f", &b1);
					printf("\nEscriba la componente y del vector #2:");
					scanf("%f", &b2);
					p = a1 * b1 + a2 * b2 + a3 * b3;
					ma = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
					mb = sqrt(pow(b1, 2) + pow(b2, 2) + pow(b3, 2));
					theta = acos((p / (ma * mb)));
					theta = theta * 180 / PI;
					printf("\nEl angulo entre los dos vectores es:%f\n\nDigite un numero para volver al menu\n", theta);
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("\nEscriba la componente x del vector #1:");
					scanf("%f", &a1);
					printf("\nEscriba la componente y del vector #1:");
					scanf("%f", &a2);
					printf("\nEscriba la componente z del vector #1:");
					scanf("%f", &a3);
					printf("\nEscriba la componente x del vector #2:");
					scanf("%f", &b1);
					printf("\nEscriba la componente y del vector #2:");
					scanf("%f", &b2);
					printf("\nEscriba la componente z del vector #2:");
					scanf("%f", &b3);
					p = a1 * b1 + a2 * b2 + a3 * b3;
					ma = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
					mb = sqrt(pow(b1, 2) + pow(b2, 2) + pow(b3, 2));
					theta = acos((p / (ma * mb)));
					theta = theta * 180 / PI;
					printf("\nEl angulo entre los dos vectores es:%f\n\nDigite un numero para volver al menu\n", theta);
					scanf("%i", &volver);
					break;
				}
				}
				break;
			}
			case 9:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado:\n\n9)Vector Unitario.\n");
				printf("\n1)R2\n2)R3\n\nSeleccione un tema:\n");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nDigite la componente x\n");
					scanf("%f", &a1);
					printf("\nDigite la componente y\n");
					scanf("%f", &a2);
					modulo = sqrt(pow(a1, 2) + pow(a2, 2));
					printf("%0.2f/%0.2f,%0.2f/%0.2f", a1, modulo, a2, modulo);
					printf("\nDigite cualquier numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				case 2:
				{
					printf("Digite la componente x\n");
					scanf("%f", &a1);
					printf("Digite la componente y\n");
					scanf("%f", &a2);
					printf("Digite la componente z\n");
					scanf("%f", &a3);
					modulo = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
					printf("%0.2f/%0.2f,%0.2f/%0.2f,%0.2f/%0.2f", a1, modulo, a2, modulo, a3, modulo);
					printf("\nDigite cualquier numero para volver al menu.\n");
					scanf("%i", &volver);
					break;
				}
				}
				break;
			}
			case 10:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n10)Angulos Directores.\n\n1)R2\n2)R3\n\nSeleccione una opcion\n");
				scanf("%i", &selector);
				switch (selector)
				{
				case 1:
				{
					printf("\nDigite la componente x\n");
					scanf("%f", &a1);
					printf("\nDigite la componente y\n");
					scanf("%f", &a2);
					modulo = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
					if (modulo != 0)
					{
						anguloa = acos(a1 / modulo);
						angulob = acos(a2 / modulo);

						anguloa = anguloa * 180 / PI;
						angulob = angulob * 180 / PI;

						printf("\nangulo #1=%0.2f\n", anguloa);
						printf("\nangulo #2=%0.2f\n", angulob);
						printf("\nDigite cualquier numero para volver al menu.\n");
						scanf("%i", &volver);
					}
					else
					{
						printf("EL modulo es 0");
						printf("\nDigite cualquier numero para volver al menu.\n");
						scanf("%i", &volver);
					}
					break;
				}
				case 2:
				{
					printf("\nDigite la componente x\n");
					scanf("%f", &a1);
					printf("\nDigite la componente y\n");
					scanf("%f", &a2);
					printf("\nDigite la componente z\n");
					scanf("%f", &a3);
					modulo = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
					if (modulo != 0)
					{
						anguloa = acos(a1 / modulo);
						angulob = acos(a2 / modulo);
						anguloc = acos(a3 / modulo);
						anguloa = anguloa * 180 / PI;
						angulob = angulob * 180 / PI;
						anguloc = anguloc * 180 / PI;
						printf("\nangulo #1=%0.2f\n", anguloa);
						printf("\nangulo #2=%0.2f\n", angulob);
						printf("\nangulo #3=%0.2f\n", anguloc);
						printf("\nDigite cualquier numero para volver al menu.\n");
						scanf("%i", &volver);
					}
					else
					{
						printf("\nEL modulo es 0\n");
						printf("\nDigite cualquier numero para volver al menu.\n");
						scanf("%i", &volver);
					}
					break;
				}
				}
				break;
			}
			case 11:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n11)Area de un paralelogramo.\n");
				printf("\nEscriba la componente en x del primer vector: ");
				scanf("%f", &a1);
				printf("\nEscriba la componente en y del primer vector: ");
				scanf("%f", &a2);
				printf("\nEscriba la componente en z del primer vector: ");
				scanf("%f", &a3);
				printf("\nEscriba la componente en x del segundo vector: ");
				scanf("%f", &b1);
				printf("\nEscriba la componente en y del segundo vector: ");
				scanf("%f", &b2);
				printf("\nEscriba la componente en z del segundo vector: ");
				scanf("%f", &b3);
				l = (a2 * b3) - (a3 * b2);
				j = -((a1 * b3) - (a3 * b1));
				k = (a1 * b2) - (a2 * b1);
				areapg = (sqrt(pow(l, 2) + pow(j, 2) + pow(k, 2)));
				printf("\nEl vector es #1 es:<%0.2f,%0.2f,%0.2f>\nEl vector es #2 es:<%0.2f,%0.2f,%0.2f>\nEl area del paralelogramo es: %0.2f\n\nDigite un numero para volver al menu\n", a1, a2, a3, b1, b2, b3, areapg);
				scanf("%i", &volver);
				break;
			}
			case 12:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n12)Area de un triangulo.\n");
				printf("\nEscriba la componente en x del primer vector: ");
				scanf("%f", &a1);
				printf("\nEscriba la componente en y del primer vector: ");
				scanf("%f", &a2);
				printf("\nEscriba la componente en z del primer vector: ");
				scanf("%f", &a3);
				printf("\nEscriba la componente en x del segundo vector: ");
				scanf("%f", &b1);
				printf("\nEscriba la componente en y del segundo vector: ");
				scanf("%f", &b2);
				printf("\nEscriba la componente en z del segundo vector: ");
				scanf("%f", &b3);
				l = (a2 * b3) - (a3 * b2);
				j = -((a1 * b3) - (a3 * b1));
				k = (a1 * b2) - (a2 * b1);
				areatri = (sqrt(pow(l, 2) + pow(j, 2) + pow(k, 2))) / 2;
				printf("\nEl vector #1 es:<%0.2f,%0.2f,%0.2f>\nEl vector #2 es:<%0.2f,%0.2f,%0.2f>\nEl area del triangulo es: %0.2f\n\nDigite un numero para volver al menu\n", a1, a2, a3, b1, b2, b3, areatri);
				scanf("%i", &volver);
				break;
			}
			case 13:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n13)Volumen de un paralelepipedo\n");
				printf("\nDigite la componente x vector #1:");
				scanf("%f", &a1);
				printf("\nDigite la componente y vector #1:");
				scanf("%f", &a2);
				printf("\nDigite la componente z vector #1:");
				scanf("%f", &a3);
				printf("\nDigite la componente x vector #2:");
				scanf("%f", &b1);
				printf("\nDigite la componente y vector #2:");
				scanf("%f", &b2);
				printf("\nDigite la componente z vector #2:");
				scanf("%f", &b3);
				printf("\nDigite la componente x vector #3:");
				scanf("%f", &c1);
				printf("\nDigite la componente y vector #3:");
				scanf("%f", &c2);
				printf("\nDigite la componente z vector #3:");
				scanf("%f", &c3);
				k = a1 * (b2 * c3 - b3 * c2) - (a2 * (b1 * c3 - b3 * c1)) + a3 * (b1 * c2 - b2 * c1);
				k = sqrt(pow(k, 2));
				printf("\nEl volumen de el paralelepipedo es: %0.2f\n\nDigite un numero para volver al menu.\n\n", k);
				scanf("%i", &volver);

				break;
			}
			case 14:
			{
				system("cls");
				printf("Unidad 4:Vectores en R2 y R3.\n\nTema seleccionado: \n\n14)Volumen de una piramide triangular.\n");
				printf("\nDigite la componente x vector #1:");
				scanf("%f", &a1);
				printf("\nDigite la componente y vector #1:");
				scanf("%f", &a2);
				printf("\nDigite la componente z vector #1:");
				scanf("%f", &a3);
				printf("\nDigite la componente x vector #2:");
				scanf("%f", &b1);
				printf("\nDigite la componente y vector #2:");
				scanf("%f", &b2);
				printf("\nDigite la componente z vector #2:");
				scanf("%f", &b3);
				printf("\nDigite la componente x vector #3:");
				scanf("%f", &c1);
				printf("\nDigite la componente y vector #3:");
				scanf("%f", &c2);
				printf("\nDigite la componente z vector #3:");
				scanf("%f", &c3);
				k = a1 * (b2 * c3 - b3 * c2) - (a2 * (b1 * c3 - b3 * c1)) + a3 * (b1 * c2 - b2 * c1);
				k = k / 6;
				k = sqrt(pow(k, 2));
				printf("\n\nEl volumen de la piramide triangular es: %0.2f\n\nDigite un numero para volver al menu.\n\n", k);
				scanf("%i", &volver);
			}
			default:
			{
				break;
			}
			}
			break;
		}
		case 5:
		{
			system("cls");
			printf("Unidad 5:Geometria de movimiento.\n\n1)Traslacion en R2.\n2)Traslacion en R3.\n3)Rotacion en R2 grados alrededor del origen O.\n4)Rotacion alrededor del eje Z en R3.\n5)Rotacion alrededor del eje Y en R3.\n6)Rotacion alrededor del eje X en R3.\n7)Reflexion sobre el eje X en R2.\n8)Reflexion sobre el eje Y en R2.\n9)Reflexion sobre la recta Y=X en R2.\n10)Reflexion sobre la recta Y=mX en R2.\n11)Reflexion en el espacio tridimensional sobre el plano XY.\n12)Reflexion en el espacio tridimensional sobre el el plano XZ.\n13)Reflexion en el espacio tridimensional sobre el plano YZ.\n14)Rotacion al rededor de un eje arbitrario.\n15)Reflexion sobre un eje arbitrario, sobre una recta paralela al eje X ( Y = K ).\n16)Reflexion sobre un eje arbitrario, sobre una recta paralela al eje Y ( X = H ).\n17)Escalacion uniforme u homotecia en R2.\n18)Escalacion uniforme u homotecia en R3.\n19)Escalacion no uniforme en R2.\n20)Escalacion no uniforme en R3.\n21)Escalacion con centro arbitrario.\n\nSeleccione un tema:");
			scanf("%i", &selector);
			switch (selector)
			{
			case 1:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n1)Traslacion en R2.\n\n");
				printf("\nDigite el valor de la coordenada en x:\n");
				scanf("%f", &x);
				printf("\nDigite  el valor de la coordenada en y:\n");
				scanf("%f", &y);
				printf("\nDigite la traslacion en h:\n");
				scanf("%f", &h);
				printf("\nDigite la traslacion en k:\n");
				scanf("%f", &k);
				x = x + h;
				y = y + k;
				printf("\nSe obtiene:\n(%0.2f,%0.2f)\n\nDigite cualquier numero para regresar al menu principal.", x, y);
				scanf("%i", &volver);
				break;
			}
			case 2:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n2)Traslacion en R3.\n\n");
				printf("\nDigite  el valor de la coordenada en x:\n");
				scanf("%f", &x);
				printf("\nDigite  el valor de la coordenada en y:\n");
				scanf("%f", &y);
				printf("\nDigite  el valor de la coordenada en z:\n");
				scanf("%f", &z);
				printf("\nDigite la traslacion en h:\n");
				scanf("%f", &h);
				printf("\nDigite la traslacion en k:\n");
				scanf("%f", &k);
				printf("\nDigite la traslacion en l:\n");
				scanf("%f", &l);
				x = x + h;
				y = y + k;
				z = z + l;
				printf("\nSe obtiene:\n(%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver", x, y, z);
				scanf("%i", &volver);
				break;
			}
			case 3:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n3) Rotacion en R2 grados alrededor del origen O.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite los grados\n");
				scanf("%f", &theta);
				theta = theta * PI / 180;
				coseno = cos(theta);
				seno = sin(theta);
				nseno = seno * -1;
				x1 = (x * coseno) - (y * seno);
				y1 = (x * seno) + (y * coseno);
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 4:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n4)Rotacion en R3 alrdedor del eje z.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				printf("\nDigite los grados\n");
				scanf("%f", &theta);
				theta = theta * PI / 180;
				coseno = cos(theta);
				seno = sin(theta);
				nseno = seno * -1;
				x1 = x * coseno + y * nseno + z * 0;
				y1 = x * seno + y * coseno + z * 0;
				z1 = x * 0 + y * 0 + z * 1;
				printf("\nSe obtiene (%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1, z1);
				scanf("%i", &volver);
				break;
			}
			case 5:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n5)Rotacion en R3 alrededor del eje Y.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				printf("\nDigite los grados\n");
				scanf("%f", &theta);
				theta = theta * PI / 180;
				coseno = cos(theta);
				seno = sin(theta);
				nseno = seno * -1;
				x1 = x * coseno + y * 0 + z * seno;
				y1 = x * 0 + y * 1 + z * 0;
				z1 = x * nseno + y * 0 + z * coseno;
				printf("\nSe obtiene (%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1, z1);
				scanf("%i", &volver);
				break;
			}
			case 6:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n6)Rotacion en R3 alrededor del eje X.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				printf("\nDigite los grados\n");
				scanf("%f", &theta);
				theta = theta * PI / 180;
				coseno = cos(theta);
				seno = sin(theta);
				nseno = seno * -1;
				x1 = x * 1 + y * 0 + z * 0;
				y1 = x * 0 + y * coseno + z * nseno;
				z1 = x * 0 + y * seno + z * coseno;
				printf("\nSe obtiene (%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1, z1);
				scanf("%i", &volver);
				break;
			}
			case 7:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n7)Reflexion sobre el eje X en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				x1 = x;
				y1 = y * (-1);
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 8:
			{
				float x, y, z, x1, y1, z1, theta, coseno, seno, nseno;
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n8)Reflexion sobre el eje Y en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				x1 = x * (-1);
				y1 = y;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 9:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n9)Reflexion Sobre la recta Y=X en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				x1 = y;
				y1 = x;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 10:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n10)Reflexion sobre la recta Y=MX en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de M\n");
				scanf("%f", &z);
				x1 = ((1 - pow(z, 2)) * x + 2 * z * y) / (1 + pow(z, 2));
				y1 = ((pow(z, 2) - 1) * y + 2 * z * x) / (1 + pow(z, 2));
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 11:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n11)Reflexion en el espacio tridimensional Plano XY.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				x1 = x;
				y1 = y;
				z1 = z * -1;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 12:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n12)Reflexion en el espacio tridimensional Plano XZ.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				x1 = x;
				y1 = y * -1;
				z1 = z;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 13:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n13)Reflexion en el espacio tridimensional Plano YZ.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Z\n");
				scanf("%f", &z);
				x1 = x * -1;
				y1 = y;
				z1 = z;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 14:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n14)Rotacion alrededor de un eje arbitrario.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el angulo de rotacion\n");
				scanf("%f", &theta);
				printf("\nDigite el valor de h\n");
				scanf("%f", &h);
				printf("\nDigite el valor de k\n");
				scanf("%f", &k);
				theta = theta * PI / 180;
				x1 = x * cos(theta) - y * sin(theta) + ((1 - cos(theta)) * h + k * sin(theta));
				y1 = x * sin(theta) + y * cos(theta) + ((1 - cos(theta)) * k - h * sin(theta));
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 15:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n15)Reflexion sobre un eje arbitrario, sobre una recta paralela al eje X ( Y = K ).\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de k\n");
				scanf("%f", &k);
				x1 = x + y * 0 + 1 * 0;
				y1 = x * 0 + y * (-1) + 1 * 2 * k;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 16:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n16)Reflexion sobre un eje arbitrario ,sobre una recta paralela al eje y ( x = h ).\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de h\n");
				scanf("%f", &h);
				x1 = x * -1 + y * 0 + 1 * 2 * h;
				y1 = x * 0 + y * 1 + 1 * 0;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 17:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n17)Escalacion uniforme u homogenea en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de k\n");
				scanf("%f", &k);
				x1 = k * x;
				y1 = k * y;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 18:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n18)Escalacion uniforme u homogenea en r3.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de z\n");
				scanf("%f", &z);
				printf("\nDigite el valor de k\n");
				scanf("%f", &k);
				x1 = k * x;
				y1 = k * y;
				z1 = k * z;
				printf("\nSe obtiene (%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1, z1);
				scanf("%i", &volver);
				break;
			}
			case 19:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n19)Escalacion no uniforme en R2.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Kx\n");
				scanf("%f", &k);
				printf("\nDigite el valor de Ky\n");
				scanf("%f", &k2);
				x1 = k * x;
				y1 = k2 * y;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			case 20:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n20)Escalacion no uniforme en R3.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de z\n");
				scanf("%f", &z);
				printf("\nDigite el valor de Kx\n");
				scanf("%f", &k);
				printf("\nDigite el valor de Ky\n");
				scanf("%f", &k2);
				printf("\nDigite el valor de Kz\n");
				scanf("%f", &k3);
				x1 = k * x;
				y1 = k2 * y;
				z1 = k3 * z;
				printf("\nSe obtiene (%0.2f,%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1, z1);
				scanf("%i", &volver);
				break;
			}
			case 21:
			{
				system("cls");
				printf("Unidad 5:Geometria de movimiento.\n\nTema seleccionado: \n\n21)Escalacion con centro arbitriario.\n\n");
				printf("\nDigite el valor de X\n");
				scanf("%f", &x);
				printf("\nDigite el valor de Y\n");
				scanf("%f", &y);
				printf("\nDigite el valor de Kx\n");
				scanf("%f", &k);
				printf("\nDigite el valor de Ky\n");
				scanf("%f", &k2);
				printf("\nDigite el valor del centro en h\n");
				scanf("%f", &h);
				printf("\nDigite el valor del centro en k\n");
				scanf("%f", &k3);
				x1 = k * x + (1 - k) * h;
				y1 = k2 * y + (1 - k2) * k3;
				printf("\nSe obtiene (%0.2f,%0.2f)\n\nDigite cualquier numero para volver al menu principal.\n", x1, y1);
				scanf("%i", &volver);
				break;
			}
			default:
			{
				break;
			}
			}
			break;
		}
	case 6:{
		system("cls");
		printf("Informacion sobre este programa:\n\n Este programa fue programado por los estudiantes:\n1)Iverson Rodriguez\n2)Luis Angulo\n3)Jasson Medina.\n4)Scarleth Cuadra.\n5)Steven Mendez.\n\nLos ejercicios que puede realizar este programa son:\n\n");
		printf("1.	Area de un triangulo.\n2.	Diagonal de un rectangulo dado sus lados.\n3.	Area de un cuadrilatero.\n4.	Perimetro de un paralelogramo dado sus lados\n5.	Area de Un Paralelogramo.\n6.	Area de Un Rombo.\n7.	Perimetro de Un Rombo.\n8.	Area De Un Cuadrado.\n9.	Area de Un Trapecio\n10.	Hipotenusa de un triangulo rectangulo.\n11.	Area y Perimetro de un cuadrado\n12.	Area y Perimetro de un rectangulo\n13.	Area y Perimetro de un triangulo\n14.	Area y Perimetro de un trapecio\n15.	Area y Perimetro de un circulo\n16.	Area y Perimetro de un polígono\n17.	Paralelepipedo Volumen\n18.	Paralelepipedo Altura\n19.	Diagonal del paralelepípedo \n20.	Area total de un palalelepipedo\n21.	Volumen de un cubo\n22.	Altura de un cubo\n23.	Encontrar el lado con el area total dada de un cubo\n24.	Volumen piramide regular.\n25.	Apotema piramide regular\n26.	Perimetro de la base piramide regular.\n27.	Volumen pirámide truncada.\n28.	Area lateral pirámide truncada.\n29.	Area total piramide truncada.\n30.	Volumen de un cilindro.\n31.	Pendiente de un segmento\n32.	Distancia entre dos puntos\n33.	Coordenadas del punto medio\n34.	Division de un segmento segun la razon dada\n35.	Magnitud de un vector\n36.	Resta de vectores r2\n37.	Resta de vectores r3\n38.	Suma de vectores en r2\n39.	Suma de vectores en r3\n40.	Producto de un vector por un escalar\n41.	Producto cruz\n42.	Producto punto\n43.	Producto mixto o triple producto escalar.\n44.	Angulo entre dos vectores.\n45.	Vectores unitarios\n46.	Angulos directores\n47.	Area de un paralelogramo\n48.	Areade un triangulo\n49.	Volumen de un paralelipedo\n50.	Volumen de una pirámide triangular.\n51.	Traslacion en r2.\n52.	Traslacion en r3.\n53.	Rotacion en R2 grados alrededor del origen O.\n54.	Rotacion alrededor del eje Z en R3.\n55.	Rotacion alrededor del eje Y en R3.\n56.	Rotacion alrededor del eje X en R3.\n57.	Reflexion sobre el eje X en R2.\n58.	Reflexion sobre el eje Y en R2.\n59.	Reflexion sobre la recta Y=X en R2.\n60.	Reflexion sobre la recta Y=mX en R2.\n61.	Reflexion en el espacio tridimensional sobre el plano XY.\n62.	Reflexion en el espacio tridimensional sobre el el plano XZ.\n63.	Reflexion en el espacio tridimensional sobre el plano YZ.\n64.	Rotacion al rededor de un eje arbitrario.\n65.	Reflexion sobre un eje arbitrario, sobre una recta paralela al eje X ( Y = K ).\n66.	Reflexion sobre un eje arbitrario, sobre una recta paralela al eje Y ( X = H ).\n67.	Escalacion uniforme u homotecia en R2.\n68.	Escalacion uniforme u homotecia en R3.\n69.	Escalacion no uniforme en R2.\n70.	Escalacion no uniforme en R3.\n71.	Escalacion con centro arbitrario.\n\nDigite cualquier numero para volver al menu principal.\n\n");
		scanf("%i", &volver);
		break;
	}	}
	}
	return 0;
}
