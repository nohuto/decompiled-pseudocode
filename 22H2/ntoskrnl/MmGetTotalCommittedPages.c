/*
 * XREFs of MmGetTotalCommittedPages @ 0x140344590
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommittedPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 7464LL);
}
