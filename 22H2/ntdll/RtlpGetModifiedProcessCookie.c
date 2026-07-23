/*
 * XREFs of RtlpGetModifiedProcessCookie @ 0x180108088
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800F2524 (RtlInitializeHeapManager.c)
 *     RtlpReportHeapFailure @ 0x18010AE68 (RtlpReportHeapFailure.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 */

unsigned __int64 RtlpGetModifiedProcessCookie()
{
  unsigned int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  ProcessInformation = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  else
    return (2147483629 * (unsigned __int64)ProcessInformation + 2147483587) % 0x7FFFFFFF;
}
