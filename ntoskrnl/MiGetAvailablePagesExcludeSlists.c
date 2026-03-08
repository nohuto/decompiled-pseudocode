/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x1402F2A0C
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 17216);
}
