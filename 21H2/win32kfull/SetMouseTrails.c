/*
 * XREFs of SetMouseTrails @ 0x1C00B537C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  int v2; // eax
  __int64 result; // rax

  SetPointer(0LL);
  v2 = a1 - 1;
  if ( !a1 )
    v2 = 0;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = v2;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) != 0;
    if ( (_DWORD)result != (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount != 0LL) )
    {
      if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 464LL) + 24LL), 1025, 0, 0);
      }
      else
      {
        result = FindTimer(0, WPP_MAIN_CB.ActiveThreadCount, 4, 1, 0LL);
        *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
      }
    }
  }
  return result;
}
