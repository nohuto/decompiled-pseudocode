/*
 * XREFs of PopUserPresentSetWorker @ 0x14078EB40
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     PopSetNotificationWork @ 0x140281E90 (PopSetNotificationWork.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PopNotifyConsoleUserPresent @ 0x140773100 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, char a2)
{
  LONG result; // eax

  if ( byte_140C23E91 )
  {
    _InterlockedExchange(&dword_140C23E98, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140C23E98);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140C23E94, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
