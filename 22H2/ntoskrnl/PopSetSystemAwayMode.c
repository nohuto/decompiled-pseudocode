/*
 * XREFs of PopSetSystemAwayMode @ 0x1408E7820
 * Callers:
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     PopNotifyConsoleUserPresent @ 0x140772DC0 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x1408E77A4 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140C23351 )
    {
      if ( byte_140C23350 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_140C23354, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140C23354);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140C23351 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
