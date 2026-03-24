/*
 * XREFs of MmGetAvailablePages @ 0x140344570
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AD5C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 7104LL);
}
