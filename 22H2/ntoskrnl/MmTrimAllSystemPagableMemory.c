/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1406356F0
 * Callers:
 *     MmShutdownSystem @ 0x140AAC090 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140635300 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
