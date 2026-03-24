/*
 * XREFs of TtmiTerminalMonitorControl @ 0x1408FDBDC
 * Callers:
 *     TtmSessionMonitorControl @ 0x1408FEF14 (TtmSessionMonitorControl.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x1408FDB28 (TtmiSetPendingOnOffRequest.c)
 *     TtmpEnterProximity @ 0x1408FDEB8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408FDF14 (TtmpExitProximity.c)
 *     TtmiLogError @ 0x140902AC4 (TtmiLogError.c)
 */

__int64 __fastcall TtmiTerminalMonitorControl(__int64 a1, unsigned int *a2, unsigned int a3, int a4)
{
  char v5; // r8
  unsigned int v6; // ebx
  int v7; // r9d

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    if ( a3 == 22 )
    {
      TtmpEnterProximity();
      return v6;
    }
    goto LABEL_7;
  }
  v7 = a4 - 1;
  if ( !v7 )
  {
    if ( a3 == 22 )
    {
      TtmpExitProximity(a1, a2, 0LL);
      return v6;
    }
LABEL_6:
    v5 = 1;
LABEL_7:
    TtmiSetPendingOnOffRequest(a1, a2, v5, a3, 0x434D6553u);
    return v6;
  }
  if ( v7 == 1 )
  {
    if ( a2[69] - 2 <= 1 )
      return 255;
    goto LABEL_6;
  }
  v6 = -1073741811;
  TtmiLogError("TtmiTerminalMonitorControl", 1359LL, 0xFFFFFFFFLL, 3221225485LL);
  return v6;
}
