/*
 * XREFs of ?IsSufficientPresentCount@CPresentRate@@IEAA_NI_N@Z @ 0x18020CF40
 * Callers:
 *     ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1800F0BD0 (-PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPresentRate::IsSufficientPresentCount(CPresentRate *this, int a2, char a3)
{
  bool v3; // r9
  unsigned int v5; // r11d
  float v6; // xmm0_4
  unsigned int v7; // eax
  __m128 v8; // xmm2
  __m128 v9; // rt1
  float v10; // xmm0_4
  unsigned int v11; // ecx
  __m128 v12; // xmm2
  __m128 v13; // rt1
  struct CComposition *v14; // rcx
  bool result; // al
  float v16; // [rsp+10h] [rbp+10h]
  float v17; // [rsp+10h] [rbp+10h]

  v3 = 0;
  if ( *(_DWORD *)this )
  {
    v5 = a2 - *(_DWORD *)this;
    if ( a3 )
    {
      v6 = (float)CCommonRegistryData::OverlayDisqualifyCount * *((float *)this + 4);
      if ( COERCE_UNSIGNED_INT(fabs(v6)) > 0x497FFFF0 )
      {
        v8 = 0LL;
        v8.m128_f32[0] = (float)(int)v6 - v6;
        v9.m128_f32[0] = FLOAT_N0_5;
        v7 = (int)v6 - _mm_cmple_ss(v8, v9).m128_u32[0];
      }
      else
      {
        v16 = v6 + 6291456.25;
        v7 = (int)(LODWORD(v16) << 10) >> 11;
      }
      v3 = v5 >= v7;
    }
    else
    {
      v10 = (float)CCommonRegistryData::OverlayQualifyCount * *((float *)this + 4);
      if ( COERCE_UNSIGNED_INT(fabs(v10)) > 0x497FFFF0 )
      {
        v12 = 0LL;
        v12.m128_f32[0] = (float)(int)v10 - v10;
        v13.m128_f32[0] = FLOAT_N0_5;
        v11 = (int)v10 - _mm_cmple_ss(v12, v13).m128_u32[0];
      }
      else
      {
        v17 = v10 + 6291456.25;
        v11 = (int)(LODWORD(v17) << 10) >> 11;
      }
      v3 = v5 >= v11;
    }
  }
  v14 = g_pComposition;
  result = v3;
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 1) = *((_QWORD *)v14 + 57);
  return result;
}
