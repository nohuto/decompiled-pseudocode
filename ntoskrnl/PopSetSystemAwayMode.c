/*
 * XREFs of PopSetSystemAwayMode @ 0x140987890
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopAcquireUserPresentSpinLock @ 0x14058B9DC (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x14058BA00 (PopReleaseUserPresentSpinLock.c)
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14098780C (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !byte_140C3D491 )
    {
      if ( byte_140C3D490 )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&PopUserPresentCompletedEvent);
        dword_140C3D494 = 1;
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
          &dword_140C3D494);
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
  else if ( byte_140C3D491 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0LL, (unsigned int)PopAwaymodeExitReason);
  }
  return v1;
}
