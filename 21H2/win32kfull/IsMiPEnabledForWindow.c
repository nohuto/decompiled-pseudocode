/*
 * XREFs of IsMiPEnabledForWindow @ 0x1C01DCDE0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DBD50 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C01DC524 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01DCEB0 (PostMousePointerLeaveAndCleanup.c)
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
  v2 = *(_DWORD *)(v1 + 1256);
  result = (*(_BYTE *)(*(_QWORD *)(v1 + 424) + 820LL) & 4) != 0 || (v2 & 0x2000000) != 0;
  if ( (v2 & 0x4000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 320);
    if ( (v4 & 0x10) != 0 )
      return ((unsigned __int8)v4 >> 3) & 1;
  }
  return result;
}
