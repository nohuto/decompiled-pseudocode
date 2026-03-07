__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(_STRING *ModuleNameAnsi)
{
  unsigned int v2; // ebx
  void *Pool2; // rax
  void (__fastcall *v4)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v5; // r8
  void (__fastcall *v6)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v7; // r8
  void (__fastcall *v8)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v9; // r8

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, ModuleNameAnsi->Length + 1LL, 1953657665LL);
  g_ModuleName = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, ModuleNameAnsi->Buffer, ModuleNameAnsi->Length);
    g_MicrosoftTelemetryAssertsTriggeredList.Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = &g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertProv, v4, v5);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertDiagTrackProv, v6, v7);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertDiagTrack_KMProv, v8, v9);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
