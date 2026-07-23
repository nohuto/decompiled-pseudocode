/*
 * XREFs of WheapEtwEnableCallback @ 0x1407D3740
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x1405BBCD8 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1405BD640 (WheapGenerateETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
      v4 = (__int64 *)WheapWaitingETWEvents;
      if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents )
        goto LABEL_9;
      v5 = *(_QWORD *)WheapWaitingETWEvents;
      if ( *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents )
        goto LABEL_9;
      WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
      *(_QWORD *)(v5 + 8) = &WheapWaitingETWEvents;
      KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
      if ( v4 == &WheapWaitingETWEvents )
        break;
      WheapGenerateETWEvents((__int64)(v4 + 5));
      WheapFreeErrorRecord((ULONG_PTR)v4);
    }
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v6 = WheapDeferredInternalLogs;
      if ( *(__int64 **)(WheapDeferredInternalLogs + 8) != &WheapDeferredInternalLogs )
        break;
      v7 = *(_QWORD *)WheapDeferredInternalLogs;
      if ( *(_QWORD *)(*(_QWORD *)WheapDeferredInternalLogs + 8LL) != WheapDeferredInternalLogs )
        break;
      WheapDeferredInternalLogs = *(_QWORD *)WheapDeferredInternalLogs;
      *(_QWORD *)(v7 + 8) = &WheapDeferredInternalLogs;
      KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
      if ( (__int64 *)v6 == &WheapDeferredInternalLogs )
        return;
      WheaLogInternalEvent((_DWORD *)(v6 + 16));
    }
LABEL_9:
    __fastfail(3u);
  }
}
