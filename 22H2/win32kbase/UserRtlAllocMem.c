/*
 * XREFs of UserRtlAllocMem @ 0x1C0139D40
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 */

__int64 __fastcall UserRtlAllocMem(__int64 a1)
{
  return Win32AllocPool(a1, 0x74727355u);
}
