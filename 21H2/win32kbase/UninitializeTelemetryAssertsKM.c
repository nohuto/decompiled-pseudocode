/*
 * XREFs of UninitializeTelemetryAssertsKM @ 0x1C00C090C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UninitializeTelemetryAssertsLocks @ 0x1C00C09FC (UninitializeTelemetryAssertsLocks.c)
 *     TakeTelemetryAssertsLock @ 0x1C00C0A34 (TakeTelemetryAssertsLock.c)
 */

NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  __int64 v5; // rax

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    if ( !(unsigned int)TakeTelemetryAssertsLock() )
    {
      while ( 1 )
      {
        v1 = g_MicrosoftTelemetryAssertsTriggeredList;
        if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
          break;
        if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
          || (v5 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
              *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
        {
          __fastfail(3u);
        }
        g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
        *(_QWORD *)(v5 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
        ExFreePoolWithTag((PVOID)(v1 - 32), 0x74727341u);
      }
      ExReleaseFastMutex(g_AssertFastMutex);
    }
    UninitializeTelemetryAssertsLocks();
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    v2 = qword_1C02C7098;
    qword_1C02C7098 = 0LL;
    dword_1C02C7078 = 0;
    EtwUnregister(v2);
    v3 = qword_1C02C7028;
    qword_1C02C7028 = 0LL;
    dword_1C02C7008 = 0;
    EtwUnregister(v3);
    v4 = qword_1C02C7060;
    qword_1C02C7060 = 0LL;
    dword_1C02C7040 = 0;
    return EtwUnregister(v4);
  }
  return result;
}
