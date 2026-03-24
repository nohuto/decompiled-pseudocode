/*
 * XREFs of _FreeGestureInfo @ 0x1C0227C40
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C005D100 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x1C006A330 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0121FC8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F9990 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9AF0 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01FDA90 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C02278EC (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
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
