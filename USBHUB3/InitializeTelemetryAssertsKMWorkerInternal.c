__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL);
  g_ModuleName = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    qword_1C006DD88 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0074040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0074008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0074078);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
