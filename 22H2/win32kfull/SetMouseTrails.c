/*
 * XREFs of SetMouseTrails @ 0x1C0029694
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026774 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     SetPointer @ 0x1C002A420 (SetPointer.c)
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = a1 != 0 ? a1 - 1 : 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) != 0;
    if ( (_DWORD)result != (WPP_MAIN_CB.Dpc.DeferredContext != 0LL) )
    {
      if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 464LL) + 24LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0LL, (__int64)WPP_MAIN_CB.Dpc.DeferredContext, 4u, 1, 0LL);
        WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
      }
    }
  }
  return result;
}
