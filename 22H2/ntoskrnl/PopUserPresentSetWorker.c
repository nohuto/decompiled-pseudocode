/*
 * XREFs of PopUserPresentSetWorker @ 0x14078EA40
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     PopSetNotificationWork @ 0x14034AEA0 (PopSetNotificationWork.c)
 *     PopNotifyConsoleUserPresent @ 0x140772DC0 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140C23351 )
  {
    _InterlockedExchange(&dword_140C23358, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C23358);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C23354, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
