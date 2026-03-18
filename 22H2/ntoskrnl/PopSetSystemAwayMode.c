/*
 * XREFs of PopSetSystemAwayMode @ 0x14098A940
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     PopAcquireUserPresentSpinLock @ 0x14058DF0C (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x14058DF30 (PopReleaseUserPresentSpinLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14098A8BC (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !byte_140C3D911 )
    {
      if ( byte_140C3D910 )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&PopUserPresentCompletedEvent);
        dword_140C3D914 = 1;
        if ( PopUserPresentSetStatus )
        {
          PopReleaseUserPresentSpinLock(v3);
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        }
        else
        {
          PopReleaseUserPresentSpinLock(v3);
        }
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140C3D914);
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
  else if ( byte_140C3D911 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, PopAwaymodeExitReason);
  }
  return v1;
}
