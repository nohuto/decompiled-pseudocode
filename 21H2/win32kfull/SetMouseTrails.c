/*
 * XREFs of SetMouseTrails @ 0x1C0029734
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = WPP_MAIN_CB.Dpc.TargetInfoAsUlong != 0;
    if ( (_DWORD)result != (WPP_MAIN_CB.Dpc.SystemArgument2 != 0LL) )
    {
      if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 464LL) + 24LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0LL, (__int64)WPP_MAIN_CB.Dpc.SystemArgument2, 4u, 1, 0LL);
        WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
      }
    }
  }
  return result;
}
