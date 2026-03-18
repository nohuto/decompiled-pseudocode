/*
 * XREFs of PowerOffGdi @ 0x1C01356C0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0130984 (xxxRemoteDisconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 PowerOffGdi()
{
  __int64 v0; // rcx
  int MDEVPowerState; // ebx
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  struct tagWND *v5; // rcx

  TransitionCursorSuppressionState(2u, 0);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    v0 = gbGDIOn;
    gbGDIOn = 0;
  }
  v2 = SGDGetUserSessionState(v0);
  DrvDxgkLogCodePointPacket(12LL, *(_DWORD *)(v2 + 3212) == 5, 0LL, 0LL);
  result = DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 16LL), 0LL);
  if ( MDEVPowerState )
  {
    result = SGDGetUserSessionState(v4);
    if ( *(_DWORD *)(result + 3212) == 5 )
    {
      result = *(_QWORD *)(gptiCurrent + 456LL);
      if ( result )
      {
        result = *(_QWORD *)(result + 8);
        if ( result )
        {
          v5 = *(struct tagWND **)(result + 168);
          if ( v5 )
            return PostMessage(v5, 0x218u, 0xCuLL, 0LL);
        }
      }
    }
  }
  return result;
}
