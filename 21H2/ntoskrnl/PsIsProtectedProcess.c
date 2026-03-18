/*
 * XREFs of PsIsProtectedProcess @ 0x1402A0790
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) != 0;
}
