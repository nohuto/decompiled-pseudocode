/*
 * XREFs of _PostTransformableMessage @ 0x1C00A755C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C00767D8 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     xxxSystemTimerProc @ 0x1C010B7C0 (xxxSystemTimerProc.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DBD50 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01DCEB0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx

  v5 = 0;
  v6 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, a5);
  if ( v6 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
