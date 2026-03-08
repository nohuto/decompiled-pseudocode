/*
 * XREFs of IsSmallerThanScreen @ 0x1C0224BC0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetSysMenu @ 0x1C0224F64 (xxxSetSysMenu.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1)
{
  struct tagMONITOR *v2; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  _DWORD *v4; // r9
  unsigned __int64 v5; // xmm0_8
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = _MonitorFromWindowInternal(a1, 1u, 0);
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v7, (__int64)v2, a1);
  v4 = (_DWORD *)*((_QWORD *)a1 + 5);
  v5 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
  return v4[24] - v4[22] < (int)(v5 - MonitorWorkRectForWindow->m128i_i64[0])
      || v4[25] - v4[23] < (int)(HIDWORD(v5) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
}
