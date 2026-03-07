void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C035D312 = a3;
  v3 = a3 >> 8;
  byte_1C035D384 = a3;
  byte_1C035D3F6 = a3;
  byte_1C035D468 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C035D30D = a2;
  word_1C035D37F = a2;
  word_1C035D3F1 = a2;
  word_1C035D463 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C035D313 = v3;
  byte_1C035D385 = v3;
  byte_1C035D3F7 = v3;
  byte_1C035D469 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C035D300 = v5;
  byte_1C035D316 = BYTE1(v7);
  byte_1C035D388 = BYTE1(v7);
  byte_1C035D3FA = BYTE1(v7);
  byte_1C035D46C = BYTE1(v7);
  byte_1C035D301 = v4;
  byte_1C035D315 = v6;
  byte_1C035D372 = v5;
  byte_1C035D373 = v4;
  byte_1C035D387 = v6;
  byte_1C035D3E4 = v5;
  byte_1C035D3E5 = v4;
  byte_1C035D3F9 = v6;
  byte_1C035D456 = v5;
  byte_1C035D457 = v4;
  byte_1C035D46B = v6;
}
