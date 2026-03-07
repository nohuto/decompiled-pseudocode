__int64 DestroyExclusiveUserCritDeferredUnlockList()
{
  unsigned int v0; // ebx
  struct tagKERNELHANDLETABLEENTRY *v1; // rdi
  __int64 v2; // rax
  __int64 result; // rax

  v0 = 0;
  if ( gbInDestroyExclusiveUserCritDeferredUnlockList )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4262LL);
  gbInDestroyExclusiveUserCritDeferredUnlockList = 1;
  if ( gphePrimaryDestroyTarget )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4265LL);
  v1 = gpExclusiveUserCritDeferredUnlockListHead;
  if ( gpExclusiveUserCritDeferredUnlockListHead )
  {
    do
    {
      gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v1 + 2);
      v2 = *(_QWORD *)v1;
      *((_QWORD *)v1 + 2) = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4278LL);
      if ( *(_DWORD *)(*(_QWORD *)v1 + 8LL) > 1u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4289LL);
      result = HMUnlockObject(*(_QWORD *)v1);
      v1 = gpExclusiveUserCritDeferredUnlockListHead;
      ++v0;
    }
    while ( gpExclusiveUserCritDeferredUnlockListHead );
    if ( v0 > gcSecondaryDestroyTargets )
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4305LL);
  }
  if ( v0 != gcDeferredDestroyTargets )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4306LL);
  gcSecondaryDestroyTargets = 0;
  gcDeferredDestroyTargets = 0;
  gbInDestroyExclusiveUserCritDeferredUnlockList = 0;
  return result;
}
