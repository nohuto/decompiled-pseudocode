/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01B1740
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     UnlinkSendListSms @ 0x1C0094A8C (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     fnHkINLPMSG @ 0x1C00C5E60 (fnHkINLPMSG.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00E66E8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ForwardTouchMessage @ 0x1C01B139C (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D4F90 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012D1C4 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01AFD74 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall FreeTouchInputInfo(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  tagDomLock *v5; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+48h] [rbp-20h]
  char v8; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)&v5);
  v2 = HMValidateHandleNoSecure(a1, 20);
  v3 = v2;
  if ( v2 && *(_BYTE *)(_HMPheFromObject(v2) + 24) == 20 )
  {
    HMDestroyObject(v3);
    if ( v8 && v7 && v5 )
    {
      if ( v6 )
        tagDomLock::UnLockExclusive(v5);
      else
        tagDomLock::UnLockShared(v5);
    }
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v5);
    return 0LL;
  }
}
