/*
 * XREFs of SetNewForegroundQueue @ 0x1C003DC10
 * Callers:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0131FC0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00525A8 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 result; // rax

  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
  return result;
}
