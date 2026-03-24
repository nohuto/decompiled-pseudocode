/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DC580
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C005D060 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C006A290 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0121C48 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ForwardTouchMessage @ 0x1C01DC09C (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FBBB0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = HMValidateHandleNoSecure(a1, 20);
  v2 = v1;
  if ( !v1 || *(_BYTE *)(_HMPheFromObject(v1) + 24) != 20 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
