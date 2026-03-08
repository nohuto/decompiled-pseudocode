/*
 * XREFs of IsMiPEnabledForWindow @ 0x1C014417A
 * Callers:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C0143D62 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B66A0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B7B10 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForWindow(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  _BOOL8 result; // rax
  int v4; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 1272);
  result = (*(_BYTE *)(*(_QWORD *)(v1 + 424) + 812LL) & 4) != 0 || (v2 & 0x2000000) != 0;
  if ( (v2 & 0x4000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 320);
    if ( (v4 & 0x10) != 0 )
      return ((unsigned __int8)v4 >> 3) & 1;
  }
  return result;
}
