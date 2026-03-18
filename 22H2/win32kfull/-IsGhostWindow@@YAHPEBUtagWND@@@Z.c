/*
 * XREFs of ?IsGhostWindow@@YAHPEBUtagWND@@@Z @ 0x1C00CFBBC
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsGhostWindow(const struct tagWND *a1)
{
  return (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 682;
}
