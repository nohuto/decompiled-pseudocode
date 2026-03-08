/*
 * XREFs of MiIsSoftwareEnclave @ 0x1402D5610
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(a1 + 64) & 1) == 0;
}
