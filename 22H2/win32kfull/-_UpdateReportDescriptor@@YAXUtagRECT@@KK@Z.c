/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01B215C
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01B2264 (CreatePseudoDigitizerDevice.c)
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

  byte_1C035A322 = a3;
  v3 = a3 >> 8;
  byte_1C035A394 = a3;
  byte_1C035A406 = a3;
  byte_1C035A478 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C035A31D = a2;
  word_1C035A38F = a2;
  word_1C035A401 = a2;
  word_1C035A473 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C035A323 = v3;
  byte_1C035A395 = v3;
  byte_1C035A407 = v3;
  byte_1C035A479 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C035A310 = v5;
  byte_1C035A326 = BYTE1(v7);
  byte_1C035A398 = BYTE1(v7);
  byte_1C035A40A = BYTE1(v7);
  byte_1C035A47C = BYTE1(v7);
  byte_1C035A311 = v4;
  byte_1C035A325 = v6;
  byte_1C035A382 = v5;
  byte_1C035A383 = v4;
  byte_1C035A397 = v6;
  byte_1C035A3F4 = v5;
  byte_1C035A3F5 = v4;
  byte_1C035A409 = v6;
  byte_1C035A466 = v5;
  byte_1C035A467 = v4;
  byte_1C035A47B = v6;
}
