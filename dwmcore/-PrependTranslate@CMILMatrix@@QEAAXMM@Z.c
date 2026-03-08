/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18026CF08
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024E550 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3)
{
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  __int64 v7; // r11
  float v8; // xmm5_4
  float v9; // xmm5_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211 )
  {
    v4 = (float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5));
    v5 = a3 * *((float *)this + 6);
    *((float *)this + 12) = (float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                          + *((float *)this + 12);
    v6 = (float)(a2 * *((float *)this + 2)) + v5;
    *((float *)this + 13) = v4 + *((float *)this + 13);
    *((float *)this + 14) = v6 + *((float *)this + 14);
    if ( CMILMatrix::IsAffine<1>((__int64)this, 1) )
    {
      *(_BYTE *)(v7 + 64) &= 0xFCu;
    }
    else
    {
      v9 = v8 * *(float *)(v7 + 12);
      *(_DWORD *)(v7 + 64) = 0;
      *(float *)(v7 + 60) = (float)(v9 + (float)(a3 * *(float *)(v7 + 28))) + *(float *)(v7 + 60);
    }
  }
}
