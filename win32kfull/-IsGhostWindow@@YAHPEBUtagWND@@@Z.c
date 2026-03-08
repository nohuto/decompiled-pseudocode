/*
 * XREFs of ?IsGhostWindow@@YAHPEBUtagWND@@@Z @ 0x1C00A2014
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsGhostWindow(const struct tagWND *a1)
{
  return (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 682;
}
