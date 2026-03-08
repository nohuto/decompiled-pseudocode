/*
 * XREFs of ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1801A4568
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CGestureTargetingManager::CombineInteractionFilter(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // r9
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  float v7; // xmm0_4

  v3 = 0;
  if ( *(_BYTE *)a2 || (v4 = 0, *(_BYTE *)a3) )
    v4 = 1;
  *(_BYTE *)a1 = v4;
  if ( *(_BYTE *)(a2 + 1) || *(_BYTE *)(a3 + 1) )
    v3 = 1;
  v5 = (__m128)*(unsigned int *)(a2 + 4);
  v6 = (__m128)*(unsigned int *)(a2 + 8);
  v5.m128_f32[0] = v5.m128_f32[0] + *(float *)(a3 + 4);
  v6.m128_f32[0] = v6.m128_f32[0] + *(float *)(a3 + 8);
  v7 = *(float *)(a2 + 12) + *(float *)(a3 + 12);
  *(_BYTE *)(a1 + 1) = v3;
  *(_QWORD *)(a1 + 4) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  *(float *)(a1 + 12) = v7;
  return a1;
}
