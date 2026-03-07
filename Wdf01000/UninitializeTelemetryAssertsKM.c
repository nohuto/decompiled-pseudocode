NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  KIRQL v1; // bl
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v3; // rax
  REGHANDLE RegHandle; // rcx
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    v1 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    while ( 1 )
    {
      Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink == &g_MicrosoftTelemetryAssertsTriggeredList )
        break;
      if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList
        || (v3 = g_MicrosoftTelemetryAssertsTriggeredList.Flink->Flink,
            g_MicrosoftTelemetryAssertsTriggeredList.Flink->Flink->Blink != g_MicrosoftTelemetryAssertsTriggeredList.Flink) )
      {
        __fastfail(3u);
      }
      g_MicrosoftTelemetryAssertsTriggeredList.Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink->Flink;
      v3->Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
      ExFreePoolWithTag(&Flink[-2], 0x74727341u);
    }
    KeReleaseSpinLock(&g_AssertSpinLock, v1);
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    RegHandle = Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.RegHandle;
    Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.RegHandle = 0LL;
    Tlgmtakm_hTelemetryAssertDiagTrack_KMProv.LevelPlus1 = 0;
    EtwUnregister(RegHandle);
    v5 = Tlgmtakm_hTelemetryAssertDiagTrackProv.RegHandle;
    Tlgmtakm_hTelemetryAssertDiagTrackProv.RegHandle = 0LL;
    Tlgmtakm_hTelemetryAssertDiagTrackProv.LevelPlus1 = 0;
    EtwUnregister(v5);
    v6 = Tlgmtakm_hTelemetryAssertProv.RegHandle;
    Tlgmtakm_hTelemetryAssertProv.RegHandle = 0LL;
    Tlgmtakm_hTelemetryAssertProv.LevelPlus1 = 0;
    return EtwUnregister(v6);
  }
  return result;
}
