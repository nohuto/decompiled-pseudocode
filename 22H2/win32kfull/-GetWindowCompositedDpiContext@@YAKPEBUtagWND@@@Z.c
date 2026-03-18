/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80
 * Callers:
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00CFAA0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetScreenRectForWindow @ 0x1C0157A74 (GetScreenRectForWindow.c)
 *     GetMonitorMenuRectForWindow @ 0x1C024BCB8 (GetMonitorMenuRectForWindow.c)
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
