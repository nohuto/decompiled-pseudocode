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
