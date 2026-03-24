/*
 * XREFs of RIMAllocKernelMem @ 0x1C015AC20
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 */

__int64 __fastcall RIMAllocKernelMem(__int64 a1, unsigned int a2)
{
  return Win32AllocPool(a1, a2);
}
