/*
 * XREFs of ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180251AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::GetRealization(
        CTranslateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm2_4
  char v6; // al

  v3 = *((_DWORD *)this + 40);
  v4 = *((_DWORD *)this + 41);
  v5 = *((_DWORD *)this + 42);
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = v3;
  *((_DWORD *)a3 + 13) = v4;
  *((_DWORD *)a3 + 14) = v5;
  *((_DWORD *)a3 + 15) = 1065353216;
  v6 = *((_BYTE *)a3 + 65) & 0xD7;
  *((_BYTE *)a3 + 64) = 84;
  *((_BYTE *)a3 + 65) = v6 | 0x17;
}
