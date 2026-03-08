/*
 * XREFs of TtmiResetInactivityTimer @ 0x1409A8198
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1409A8238 (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x1409A8CC8 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409A8E80 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A55D8 (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
  if ( TtmpTerminalInactivityTimeout )
    KiSetTimerEx(
      (__int64)&TtmpTerminalInactivityTimer,
      TtmpTerminalInactivityTimeout,
      0,
      0,
      (__int64)&TtmpTerminalInactivityTimerDpc);
  else
    KeCancelTimer(&TtmpTerminalInactivityTimer);
  if ( a1 == 4 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - TtmpLastInputInactivityResetTime) > 0x1312D00 )
      TtmiLogInactivityTimerReset(4);
    TtmpLastInputInactivityResetTime = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite(&TtmpTerminalInactivityLock);
}
