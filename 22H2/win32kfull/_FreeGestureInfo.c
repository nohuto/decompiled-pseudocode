/*
 * XREFs of _FreeGestureInfo @ 0x1C0227680
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C005D060 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C006A290 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0121C48 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F93D0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9530 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01FD4D0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C022732C (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = HMValidateHandleNoSecure(a1, 21);
  v2 = v1;
  if ( !v1 || *(_BYTE *)(_HMPheFromObject(v1) + 24) != 21 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
