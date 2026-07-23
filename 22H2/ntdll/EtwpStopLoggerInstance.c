/*
 * XREFs of EtwpStopLoggerInstance @ 0x18004F8C0
 * Callers:
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 * Callees:
 *     EtwpDisableTraceProviders @ 0x180044FF4 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x1800481EC (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x18004C9D0 (RtlWakeAllConditionVariable.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(_DWORD *)(a1 + 20));
  v2 = *(void **)(a1 + 560);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
