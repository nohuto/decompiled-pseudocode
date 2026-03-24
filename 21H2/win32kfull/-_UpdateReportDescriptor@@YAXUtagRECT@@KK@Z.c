/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01DDE1C
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DDF24 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C0334262 = a3;
  v3 = a3 >> 8;
  byte_1C03342D4 = a3;
  byte_1C0334346 = a3;
  byte_1C03343B8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C033425D = a2;
  word_1C03342CF = a2;
  word_1C0334341 = a2;
  word_1C03343B3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0334263 = v3;
  byte_1C03342D5 = v3;
  byte_1C0334347 = v3;
  byte_1C03343B9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0334250 = v5;
  byte_1C0334266 = BYTE1(v7);
  byte_1C03342D8 = BYTE1(v7);
  byte_1C033434A = BYTE1(v7);
  byte_1C03343BC = BYTE1(v7);
  byte_1C0334251 = v4;
  byte_1C0334265 = v6;
  byte_1C03342C2 = v5;
  byte_1C03342C3 = v4;
  byte_1C03342D7 = v6;
  byte_1C0334334 = v5;
  byte_1C0334335 = v4;
  byte_1C0334349 = v6;
  byte_1C03343A6 = v5;
  byte_1C03343A7 = v4;
  byte_1C03343BB = v6;
}
