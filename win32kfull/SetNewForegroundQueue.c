/*
 * XREFs of SetNewForegroundQueue @ 0x1C00CE270
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UpdateRawMouseMode @ 0x1C00CE364 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1, const struct tagWND *a2)
{
  GroupedProcessForegroundBoost *v3; // rcx
  __int64 result; // rax

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      (char)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0x54u,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      gpqForeground,
      a1);
  v3 = (GroupedProcessForegroundBoost *)gpqForeground;
  if ( gpqForeground )
  {
    v3 = *(GroupedProcessForegroundBoost **)(gpqForeground + 128LL);
    if ( v3 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v3, a2);
  }
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  result = SGDGetUserSessionState(v3);
  *(_DWORD *)(result + 15956) = 0;
  return result;
}
