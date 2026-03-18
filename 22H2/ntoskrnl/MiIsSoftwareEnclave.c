/*
 * XREFs of MiIsSoftwareEnclave @ 0x14033DD60
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(a1 + 64) & 1) == 0;
}
