/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14053C8D0
 * Callers:
 *     MmShutdownSystem @ 0x1409B02C0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14053BF80 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
