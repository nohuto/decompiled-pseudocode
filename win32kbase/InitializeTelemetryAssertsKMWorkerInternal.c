/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1C008C5C4
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x1C008C56C (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     UninitializeTelemetryAssertsLocks @ 0x1C008D720 (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C03017E0 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  struct _FAST_MUTEX *Pool2; // rax
  unsigned int v3; // ebx
  void *v4; // rax

  Pool2 = (struct _FAST_MUTEX *)ExAllocatePool2(66LL, 56LL, 1953657665LL);
  v3 = 0;
  g_AssertFastMutex = Pool2;
  if ( Pool2
    && (Pool2->Owner = 0LL,
        Pool2->Count = 1,
        Pool2->Contention = 0,
        KeInitializeEvent(&Pool2->Event, SynchronizationEvent, 0),
        v4 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL),
        (g_ModuleName = v4) != 0LL) )
  {
    memmove(v4, a1[1], *(unsigned __int16 *)a1);
    qword_1C02D0B58 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0300040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0300008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0300078);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  else
  {
    v3 = -1073741801;
    UninitializeTelemetryAssertsLocks();
  }
  return v3;
}
