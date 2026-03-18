/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0139AF4
 * Callers:
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallMsgFilter @ 0x1C015208E (xxxCallMsgFilter.c)
 *     _FreeTouchInputInfo @ 0x1C01B0580 (_FreeTouchInputInfo.c)
 *     AllocGestureInfo @ 0x1C020448C (AllocGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
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
