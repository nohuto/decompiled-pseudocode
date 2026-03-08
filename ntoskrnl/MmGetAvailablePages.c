/*
 * XREFs of MmGetAvailablePages @ 0x1402999C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409F40F4 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * a1) + 17216LL);
}
