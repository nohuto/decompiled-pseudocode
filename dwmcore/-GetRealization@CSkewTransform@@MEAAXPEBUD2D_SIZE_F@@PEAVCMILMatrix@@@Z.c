/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024E550
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     fmod_0 @ 0x180117734 (fmod_0.c)
 *     tan_0 @ 0x1801177B8 (tan_0.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18026CF08 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v5; // xmm8_4
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  float v9; // xmm2_4
  double v10; // xmm0_8
  double v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4

  v5 = *((float *)this + 40);
  v6 = *((float *)this + 41);
  *(_DWORD *)a3 = 1065353216;
  v7 = fmod_0(v6, 360.0);
  v8 = tan_0(v7 * 0.01745329238474369);
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  v9 = v8;
  *((float *)a3 + 1) = v9;
  v10 = fmod_0(v5, 360.0);
  v11 = tan_0(v10 * 0.01745329238474369);
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 9) = 0;
  *((_DWORD *)a3 + 11) = 0;
  *((_DWORD *)a3 + 12) = 0;
  *((_DWORD *)a3 + 13) = 0;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 16) = 0;
  v12 = v11;
  *((_DWORD *)a3 + 5) = 1065353216;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((float *)a3 + 4) = v12;
  v13 = *((float *)this + 42);
  v14 = *((float *)this + 43);
  if ( v13 != 0.0 || v14 != 0.0 )
  {
    CMILMatrix::PrependTranslate(a3, COERCE_FLOAT(LODWORD(v13) ^ _xmm), COERCE_FLOAT(LODWORD(v14) ^ _xmm));
    CMILMatrix::Translate(a3, v13, v14);
  }
}
