/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x14085D1A0
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140610D50 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x14085D170 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x14060EAB0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140610F18 (WheapGenerateETWEvents.c)
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
    v2 = *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.AlignmentRequirement + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.AlignmentRequirement )
      goto LABEL_8;
    v3 = **(_QWORD **)&WheapDispatchPtr.AlignmentRequirement;
    if ( *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.AlignmentRequirement + 8LL) != *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement )
      goto LABEL_8;
    *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement = **(_QWORD **)&WheapDispatchPtr.AlignmentRequirement;
    *(_QWORD *)(v3 + 8) = &WheapDispatchPtr.AlignmentRequirement;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (ULONG *)v2 == &WheapDispatchPtr.AlignmentRequirement )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
