/*
 * XREFs of EditionIsGetKeyStateBlocked @ 0x1C00FBB20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

_BOOL8 EditionIsGetKeyStateBlocked()
{
  return *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) != grpdeskRitInput;
}
