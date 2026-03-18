/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x14035DA0C
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2BEFC (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 17216);
}
