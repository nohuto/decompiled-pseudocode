/*
 * XREFs of _PostTransformableMessage @ 0x1C00CB714
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005A50 (xxxSystemTimerProc.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C00CAA00 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B66A0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B7B10 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
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
