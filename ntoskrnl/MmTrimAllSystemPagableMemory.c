/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140633260
 * Callers:
 *     MmShutdownSystem @ 0x140AA8E60 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140632E70 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
