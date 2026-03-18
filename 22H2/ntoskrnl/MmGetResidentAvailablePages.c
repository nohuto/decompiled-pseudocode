/*
 * XREFs of MmGetResidentAvailablePages @ 0x14021DBBC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetResidentAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * a1) + 17280LL);
}
