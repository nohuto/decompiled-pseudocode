/*
 * XREFs of TtmpExitProximity @ 0x1409A88B4
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1409A84C4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1409A8578 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogExitProximity @ 0x1409A54C4 (TtmiLogExitProximity.c)
 */

void __fastcall TtmpExitProximity(__int64 a1, _DWORD *a2, char a3)
{
  int v3; // eax
  int v6; // ecx

  v3 = a2[9];
  if ( (v3 & 8) != 0 )
  {
    v6 = a2[67];
    a2[9] = v3 & 0xFFFFFFB7 | 0x40;
    TtmiLogExitProximity(v6, a2[68], a3);
    a2[9] |= 4u;
    TtmiScheduleSessionWorker(a1, 2);
  }
}
