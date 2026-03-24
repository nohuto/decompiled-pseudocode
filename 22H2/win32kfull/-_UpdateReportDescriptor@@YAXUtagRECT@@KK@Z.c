/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01DD85C
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DD964 (CreatePseudoDigitizerDevice.c)
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

  byte_1C0333262 = a3;
  v3 = a3 >> 8;
  byte_1C03332D4 = a3;
  byte_1C0333346 = a3;
  byte_1C03333B8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C033325D = a2;
  word_1C03332CF = a2;
  word_1C0333341 = a2;
  word_1C03333B3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0333263 = v3;
  byte_1C03332D5 = v3;
  byte_1C0333347 = v3;
  byte_1C03333B9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0333250 = v5;
  byte_1C0333266 = BYTE1(v7);
  byte_1C03332D8 = BYTE1(v7);
  byte_1C033334A = BYTE1(v7);
  byte_1C03333BC = BYTE1(v7);
  byte_1C0333251 = v4;
  byte_1C0333265 = v6;
  byte_1C03332C2 = v5;
  byte_1C03332C3 = v4;
  byte_1C03332D7 = v6;
  byte_1C0333334 = v5;
  byte_1C0333335 = v4;
  byte_1C0333349 = v6;
  byte_1C03333A6 = v5;
  byte_1C03333A7 = v4;
  byte_1C03333BB = v6;
}
