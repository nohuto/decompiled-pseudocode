/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x1409A84C4
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x1409A1BBC (TtmiSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A39F8 (TtmpDispatchSetDisplayState.c)
 *     TtmiResetTerminalTimeouts @ 0x1409A8238 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x1409A8578 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409A5AB4 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x1409A76BC (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409A77D4 (TtmiLogTerminalOnRequest.c)
 *     TtmpExitProximity @ 0x1409A88B4 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x1409A8A90 (TtmpShouldEscapeProximity.c)
 */

void __fastcall TtmiSetPendingOnOffRequest(__int64 a1, _DWORD *a2, char a3, int a4, int a5)
{
  __int64 v9; // r8
  int v10; // ecx

  if ( (a2[9] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      TtmiLogProximityBlockedRequest(a3, a4, a5);
      return;
    }
    LOBYTE(v9) = a4;
    TtmpExitProximity(a1, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    TtmiLogTerminalOnRequest(v10, a4, a5);
  else
    TtmiLogTerminalOffRequest(v10, a4, a5);
  a2[14] = a4;
  a2[9] |= 4u;
  a2[13] = 2 - (a3 != 0);
  TtmiScheduleSessionWorker(a1, 2);
}
