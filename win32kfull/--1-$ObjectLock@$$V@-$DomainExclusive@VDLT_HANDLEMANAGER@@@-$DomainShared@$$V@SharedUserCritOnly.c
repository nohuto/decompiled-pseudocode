/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012D1C4
 * Callers:
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 *     _FreeTouchInputInfo @ 0x1C01B1740 (_FreeTouchInputInfo.c)
 *     AllocGestureInfo @ 0x1C0207064 (AllocGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(
        __int64 a1)
{
  tagDomLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v2 = *(tagDomLock **)a1;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v2);
      else
        tagDomLock::UnLockShared(v2);
    }
    *(_BYTE *)(a1 + 40) = 0;
  }
}
