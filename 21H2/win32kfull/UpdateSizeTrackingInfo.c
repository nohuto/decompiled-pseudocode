/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C02110F8
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0204320 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C003E37C (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020B7A8 (-IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __m128i *MonitorWorkRectForWindow; // rax
  int v9; // ebx
  BOOL v10; // edx
  int v11; // ecx
  int v12; // ebx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL);
  v7 = *(_QWORD *)(v6 + 232);
  if ( *(_QWORD *)(v6 + 216) != v7 )
    return 0LL;
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v14, v7, a1);
  v15 = 0LL;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8)) - _mm_cvtsi128_si32(*MonitorWorkRectForWindow);
  if ( IsLeftOrRightArranged(a1) && GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v15) )
    v9 += SWORD1(v15) + (__int16)v15;
  v10 = 0;
  v11 = v9 - *a3;
  if ( v11 <= 0 )
    return 0LL;
  v12 = v9 - *a2;
  result = 1LL;
  if ( v12 > 0 )
    v10 = v12 > *(_DWORD *)(v6 + 108);
  if ( v11 < *(_DWORD *)(v6 + 112) )
    *(_DWORD *)(v6 + 112) = v11;
  if ( v10 )
    *(_DWORD *)(v6 + 104) = v12;
  return result;
}
