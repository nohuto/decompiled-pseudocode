/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0062280
 * Callers:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025A5CC (GetMonitorMenuRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C025A608 (GetScreenRectForWindow.c)
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
