/*
 * XREFs of PsIsProtectedProcess @ 0x140299450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) != 0;
}
