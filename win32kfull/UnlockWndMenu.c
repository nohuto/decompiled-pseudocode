/*
 * XREFs of UnlockWndMenu @ 0x1C012F0B4
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00EC914 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

struct tagWND **__fastcall UnlockWndMenu(struct tagWND *a1)
{
  return UnlockWndMenuWorker(a1, 0);
}
