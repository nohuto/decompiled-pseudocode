/*
 * XREFs of MmGetResidentAvailablePages @ 0x140299944
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetResidentAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * a1) + 17280LL);
}
