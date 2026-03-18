/*
 * XREFs of PopUserPresentSetWorker @ 0x1407F32E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     PopEventCalloutDispatch @ 0x1403B69DC (PopEventCalloutDispatch.c)
 *     PopNotifyConsoleUserPresent @ 0x1407F2A20 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1)
{
  LONG result; // eax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( byte_140C232D1 )
  {
    _InterlockedExchange(&dword_140C232D8, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C232D8);
    KiSetTimerEx(
      (unsigned __int64)&PopAwayModeUserPresenceTimer,
      -30000000LL,
      0,
      0,
      (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a1);
  if ( (PopFullWake & 3) == 0 )
  {
    _InterlockedOr(&PopFullWake, 3u);
    PopEventCalloutDispatch(0, 0LL);
    PopAcquirePolicyLock(v3);
    PopInitSIdle(4LL);
    PopReleasePolicyLock(v5, v4);
  }
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C232D4, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
