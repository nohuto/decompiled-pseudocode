/*
 * XREFs of UnlockWndMenuSys @ 0x1C013D0DC
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00B4970 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

struct tagWND **__fastcall UnlockWndMenuSys(struct tagWND *a1)
{
  return UnlockWndMenuWorker(a1, 1u);
}
