/*
 * XREFs of ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C012EBFC
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C00254FC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F59A8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleGhostRelatedWindowDestruction(struct tagWND *a1)
{
  if ( IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow(a1);
  }
  else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow(a1);
  }
}
