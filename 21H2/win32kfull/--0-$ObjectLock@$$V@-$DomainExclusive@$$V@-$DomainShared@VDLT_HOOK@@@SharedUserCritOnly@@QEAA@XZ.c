/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AD240
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     xxxCallMsgFilter @ 0x1C013EB60 (xxxCallMsgFilter.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HOOK@@@@IEAA@XZ @ 0x1C00AD2BC (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HOOK@@@@IEAA@XZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  bool v3; // zf
  int v4; // esi
  __int64 v5; // rdi
  tagDomLock *v6; // rcx

  DomainSharedBase<DLT_HOOK>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(a1);
  *(_BYTE *)(a1 + 48) = 0;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v3 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = a1;
      do
      {
        v6 = *(tagDomLock **)v5;
        if ( *(_QWORD *)v5 )
        {
          if ( *(_BYTE *)(v5 + 8) )
            tagDomLock::LockExclusive(v6);
          else
            tagDomLock::LockShared(v6);
        }
        ++v4;
        v5 += 16LL;
      }
      while ( !v4 );
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  return a1;
}
