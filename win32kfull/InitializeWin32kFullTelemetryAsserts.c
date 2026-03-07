__int64 InitializeWin32kFullTelemetryAsserts()
{
  __int64 result; // rax
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v2; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = (unsigned int)_InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( !(_DWORD)result )
  {
    RtlInitAnsiString(&DestinationString, "win32kfull.sys");
    v2 = DestinationString;
    return InitializeTelemetryAssertsKMWorkerInternal(&v2);
  }
  return result;
}
