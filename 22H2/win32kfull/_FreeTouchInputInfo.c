/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01B0580
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C006C9DC (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00AE248 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     fnHkINLPMSG @ 0x1C0124E30 (fnHkINLPMSG.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ForwardTouchMessage @ 0x1C01B01AC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D3F60 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0139AF4 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01AEB84 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
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
