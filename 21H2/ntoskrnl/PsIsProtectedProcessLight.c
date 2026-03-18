/*
 * XREFs of PsIsProtectedProcessLight @ 0x140242520
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 2170) & 7) == 1;
}
