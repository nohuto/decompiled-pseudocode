/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C00C0A70
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00C0AC8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v2; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  RtlInitAnsiString(&DestinationString, "win32kbase.sys");
  v2 = DestinationString;
  return InitializeTelemetryAssertsKMWorkerInternal(&v2);
}
