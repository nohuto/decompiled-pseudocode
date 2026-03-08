/*
 * XREFs of MmGetProcessPartitionId @ 0x140299858
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x1409F3940 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409F40F4 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
