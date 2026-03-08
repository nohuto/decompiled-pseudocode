/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C01F3478
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E0CB0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __m128i *MonitorWorkRectForWindow; // rax
  unsigned __int64 v8; // xmm0_8
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 result; // rax
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL);
  v6 = *(_QWORD *)(v5 + 232);
  if ( *(_QWORD *)(v5 + 216) != v6 )
    return 0LL;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v14, v6, a1);
  v8 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
  if ( *a2 > (int)(v8 - MonitorWorkRectForWindow->m128i_i64[0])
    || a2[1] > (int)(HIDWORD(v8) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0])) )
  {
    return 0LL;
  }
  v9 = *(_DWORD *)(v5 + 112);
  v10 = *(_DWORD *)(v5 + 116);
  if ( v9 >= *a2 )
    v9 = *a2;
  *(_DWORD *)(v5 + 112) = v9;
  if ( v10 >= a2[1] )
    v10 = a2[1];
  *(_DWORD *)(v5 + 116) = v10;
  v11 = *(_DWORD *)(v5 + 104);
  if ( v11 <= *a3 )
    v11 = *a3;
  *(_DWORD *)(v5 + 104) = v11;
  v12 = *(_DWORD *)(v5 + 108);
  if ( v12 <= a3[1] )
    v12 = a3[1];
  result = 1LL;
  *(_DWORD *)(v5 + 108) = v12;
  return result;
}
