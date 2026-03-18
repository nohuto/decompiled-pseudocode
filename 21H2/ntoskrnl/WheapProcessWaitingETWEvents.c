/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x140860F60
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140645F50 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x140860F30 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x140643F08 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
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
    WheapFreeErrorRecord((ULONG_PTR)v0);
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
