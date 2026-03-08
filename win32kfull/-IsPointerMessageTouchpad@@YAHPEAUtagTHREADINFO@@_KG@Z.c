/*
 * XREFs of ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01465CE
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C6C2C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax

  v6 = SGDGetUserSessionState(a1);
  return CTouchProcessor::IsPointerMessageTouchpad(*(CTouchProcessor **)(v6 + 3424), a1, a2, a3);
}
