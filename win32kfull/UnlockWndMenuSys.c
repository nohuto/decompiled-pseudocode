/*
 * XREFs of UnlockWndMenuSys @ 0x1C012F0CC
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00EC914 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

struct tagWND **__fastcall UnlockWndMenuSys(struct tagWND *a1)
{
  return UnlockWndMenuWorker(a1, 1u);
}
