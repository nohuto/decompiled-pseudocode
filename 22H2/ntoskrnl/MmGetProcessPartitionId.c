/*
 * XREFs of MmGetProcessPartitionId @ 0x1403445F0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x14077A830 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AD5C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
