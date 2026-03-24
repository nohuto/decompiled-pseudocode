/*
 * XREFs of WheapEtwEnableCallback @ 0x1407D35D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x1405BBAA8 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1405BD410 (WheapGenerateETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax

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
      WheapFreeErrorRecord((ULONG_PTR)v4, v6, v7, v8);
    }
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v9 = WheapDeferredInternalLogs;
      if ( *(__int64 **)(WheapDeferredInternalLogs + 8) != &WheapDeferredInternalLogs )
        break;
      v10 = *(_QWORD *)WheapDeferredInternalLogs;
      if ( *(_QWORD *)(*(_QWORD *)WheapDeferredInternalLogs + 8LL) != WheapDeferredInternalLogs )
        break;
      WheapDeferredInternalLogs = *(_QWORD *)WheapDeferredInternalLogs;
      *(_QWORD *)(v10 + 8) = &WheapDeferredInternalLogs;
      KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
      if ( (__int64 *)v9 == &WheapDeferredInternalLogs )
        return;
      WheaLogInternalEvent((_DWORD *)(v9 + 16));
    }
LABEL_9:
    __fastfail(3u);
  }
}
