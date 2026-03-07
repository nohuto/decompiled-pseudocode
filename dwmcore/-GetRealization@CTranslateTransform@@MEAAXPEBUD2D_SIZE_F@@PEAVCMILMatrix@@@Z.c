void __fastcall CTranslateTransform::GetRealization(
        CTranslateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  char v5; // al

  v3 = *((_DWORD *)this + 40);
  v4 = *((_DWORD *)this + 41);
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = v3;
  *((_DWORD *)a3 + 13) = v4;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  v5 = *((_BYTE *)a3 + 65) & 0xD7;
  *((_BYTE *)a3 + 64) = 84;
  *((_BYTE *)a3 + 65) = v5 | 0x17;
}
