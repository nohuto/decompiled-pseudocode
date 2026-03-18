/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C02102A4
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0200270 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ?Feature_MszAdjustment__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015ADC4 (-Feature_MszAdjustment__private_IsEnabledPreCheck@@YAHXZ.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __m128i v7; // xmm6
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  __m128i v13; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL);
  v6 = *(_QWORD *)(v5 + 232);
  if ( *(_QWORD *)(v5 + 216) != v6 )
    return 0LL;
  v7 = *(__m128i *)GetMonitorWorkRectForWindow((__int64)&v13, v6, a1);
  v13 = v7;
  Feature_MszAdjustment__private_IsEnabledPreCheck();
  if ( *a2 > _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7)
    || a2[1] > v13.m128i_i32[3] - v13.m128i_i32[1] )
  {
    return 0LL;
  }
  v8 = *(_DWORD *)(v5 + 112);
  v9 = *(_DWORD *)(v5 + 116);
  if ( v8 >= *a2 )
    v8 = *a2;
  *(_DWORD *)(v5 + 112) = v8;
  if ( v9 >= a2[1] )
    v9 = a2[1];
  *(_DWORD *)(v5 + 116) = v9;
  v10 = *(_DWORD *)(v5 + 104);
  if ( v10 <= *a3 )
    v10 = *a3;
  *(_DWORD *)(v5 + 104) = v10;
  v11 = *(_DWORD *)(v5 + 108);
  if ( v11 <= a3[1] )
    v11 = a3[1];
  result = 1LL;
  *(_DWORD *)(v5 + 108) = v11;
  return result;
}
