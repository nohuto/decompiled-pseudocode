/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x140861010
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140613170 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x140860FE0 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x140610ED0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140613338 (WheapGenerateETWEvents.c)
 */

LONG WheapProcessWaitingETWEvents()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v0 = (__int64 *)WheapWaitingETWEvents;
    if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents
      || (v1 = *(_QWORD *)WheapWaitingETWEvents,
          *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents) )
    {
LABEL_8:
      __fastfail(3u);
    }
    WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
    *(_QWORD *)(v1 + 8) = &WheapWaitingETWEvents;
    KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
    if ( v0 == &WheapWaitingETWEvents )
      break;
    WheapGenerateETWEvents((__int64)(v0 + 5));
    WheapFreeErrorRecord((__int64)v0);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
    v2 = WheapDeferredInternalLogs;
    if ( *(__int64 **)(WheapDeferredInternalLogs + 8) != &WheapDeferredInternalLogs )
      goto LABEL_8;
    v3 = *(_QWORD *)WheapDeferredInternalLogs;
    if ( *(_QWORD *)(*(_QWORD *)WheapDeferredInternalLogs + 8LL) != WheapDeferredInternalLogs )
      goto LABEL_8;
    WheapDeferredInternalLogs = *(_QWORD *)WheapDeferredInternalLogs;
    *(_QWORD *)(v3 + 8) = &WheapDeferredInternalLogs;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (__int64 *)v2 == &WheapDeferredInternalLogs )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
