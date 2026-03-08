/*
 * XREFs of ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18027D704
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800C51A0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D80C (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18027D594 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 */

bool __fastcall CAnimationInterpolator::GetAdjustedHandoffValue(
        __int64 a1,
        signed __int64 a2,
        float a3,
        int a4,
        float a5,
        signed __int64 a6,
        float *a7)
{
  float v9; // xmm6_4
  bool v11; // bp
  int v12; // edi
  float v13; // xmm0_4

  v9 = a3;
  v11 = CAnimationInterpolator::EnsureHandoffCachedData((CAnimationInterpolator *)a1, a5, a6);
  if ( v11 )
  {
    v12 = a4 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v9 = a3 + *(float *)(a1 + 12);
    }
    else if ( a2 <= a6 )
    {
      if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v9 = (float)((float)(a3 - *(float *)(a1 + 16)) * *(float *)(a1 + 20)) + *(float *)(a1 + 16);
      }
      else
      {
        if ( a6 < 0 )
          v13 = (float)(a6 & 1 | (unsigned int)((unsigned __int64)a6 >> 1))
              + (float)(a6 & 1 | (unsigned int)((unsigned __int64)a6 >> 1));
        else
          v13 = (float)(int)a6;
        v9 = (float)((float)(1.0 - (float)((float)(int)a2 / v13)) * *(float *)(a1 + 12)) + a3;
      }
    }
  }
  if ( !_finite(v9) )
    return 0;
  *a7 = v9;
  return v11;
}
