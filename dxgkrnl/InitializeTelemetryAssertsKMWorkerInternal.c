/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1C002310C
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C0023004 (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0210B58 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  struct _KEVENT *Pool2; // rax
  void *v3; // rax
  unsigned int v4; // ebx

  Pool2 = (struct _KEVENT *)ExAllocatePool2(66LL, 56LL, 1953657665LL);
  g_AssertFastMutex = Pool2;
  if ( Pool2
    && (Pool2->Header.WaitListHead.Flink = 0LL,
        LODWORD(Pool2->Header.WaitListHead.Blink) = 0,
        Pool2->Header.LockNV = 1,
        KeInitializeEvent(Pool2 + 1, SynchronizationEvent, 0),
        v3 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL),
        (g_ModuleName = (__int64)v3) != 0) )
  {
    memmove(v3, a1[1], *(unsigned __int16 *)a1);
    qword_1C013B338 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0161040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1C0161008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0161078);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0;
  }
  else
  {
    v4 = -1073741801;
    if ( g_AssertFastMutex )
    {
      ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
      g_AssertFastMutex = 0LL;
    }
  }
  return v4;
}
