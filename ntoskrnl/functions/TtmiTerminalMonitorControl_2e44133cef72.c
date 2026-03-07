__int64 __fastcall TtmiTerminalMonitorControl(__int64 a1, _DWORD *a2, int a3, int a4)
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
    TtmiSetPendingOnOffRequest(a1, a2, v5, a3, 1129145683);
    return v6;
  }
  if ( v7 == 1 )
  {
    if ( (unsigned int)(a2[69] - 2) <= 1 )
      return 255;
    goto LABEL_6;
  }
  v6 = -1073741811;
  TtmiLogError("TtmiTerminalMonitorControl", 1497, -1, -1073741811);
  return v6;
}
