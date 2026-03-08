/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x140299A38
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x14062CC28 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14029A1BC (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbx

  v0 = (qword_140C66A20 << 9) - qword_140C695F0;
  v1 = qword_140C69610 + (unsigned int)MiGetNumberOfCachedPtes(&qword_140C695C0) + v0;
  if ( v1 >= 0x100000000LL )
    LODWORD(v1) = -1;
  return (unsigned int)v1;
}
