/*
 * XREFs of PsIsProtectedProcessLight @ 0x140296210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) == 1;
}
