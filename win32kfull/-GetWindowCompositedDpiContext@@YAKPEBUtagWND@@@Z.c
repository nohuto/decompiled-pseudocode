/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C014AD54 (GetScreenRectForWindow.c)
 *     GetMonitorMenuRectForWindow @ 0x1C024E978 (GetMonitorMenuRectForWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpiContext(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 18;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
  return v1;
}
