/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C007C9E4
 * Callers:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     GetMaxTrackSizeForWindow @ 0x1C00424BC (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0042874 (GetMonitorRectForWindow.c)
 *     xxxCheckFullScreen @ 0x1C007C5FC (xxxCheckFullScreen.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D9F0 (GetMonitorMenuRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C025DA2C (GetScreenRectForWindow.c)
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
