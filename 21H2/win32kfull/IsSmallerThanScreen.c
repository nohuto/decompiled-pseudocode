/*
 * XREFs of IsSmallerThanScreen @ 0x1C002C4B0
 * Callers:
 *     xxxSetSysMenu @ 0x1C0046D10 (xxxSetSysMenu.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C006A0F4 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00426C8 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D904 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1, _QWORD *a2)
{
  struct tagMONITOR *v4; // rbp
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v6; // xmm1
  __int64 v7; // rax
  unsigned __int64 v8; // xmm0_8
  int v9; // esi
  int v10; // edi
  _DWORD *v11; // rdx
  unsigned __int16 WindowCompositedDpi; // ax
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = _MonitorFromWindowInternal(a1, 1u, 0);
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(v14, v4, a1);
  v6 = *MonitorWorkRectForWindow;
  v7 = MonitorWorkRectForWindow->m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v9 = v8 - v7;
  v10 = HIDWORD(v8) - HIDWORD(v7);
  if ( a2 )
  {
    WindowCompositedDpi = GetWindowCompositedDpi(a1);
    *a2 = GetMonitorRegionForDpi(v4, WindowCompositedDpi);
  }
  v11 = (_DWORD *)*((_QWORD *)a1 + 5);
  return v11[24] - v11[22] < v9 || v11[25] - v11[23] < v10;
}
