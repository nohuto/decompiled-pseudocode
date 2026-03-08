/*
 * XREFs of UnlockDesktopSysMenu @ 0x1C00F390C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UnlockDesktopMenu @ 0x1C00F3930 (UnlockDesktopMenu.c)
 */

__int64 __fastcall UnlockDesktopSysMenu(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x80u;
  return UnlockDesktopMenu(a1);
}
