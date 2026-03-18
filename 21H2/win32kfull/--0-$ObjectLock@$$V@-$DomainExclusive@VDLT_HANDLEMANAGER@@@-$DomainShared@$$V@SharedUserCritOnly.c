/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01D57F8
 * Callers:
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01D587C (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     AllocGestureInfo @ 0x1C0221000 (AllocGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070328 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  bool v2; // zf
  int v3; // esi
  __int64 v4; // rdi
  tagDomLock *v5; // rcx

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(a1);
  *(_BYTE *)(a1 + 48) = 0;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v2 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v2 )
    {
      v3 = 0;
      v4 = a1;
      do
      {
        v5 = *(tagDomLock **)v4;
        if ( *(_QWORD *)v4 )
        {
          if ( *(_BYTE *)(v4 + 8) )
            tagDomLock::LockExclusive(v5);
          else
            tagDomLock::LockShared(v5);
        }
        ++v3;
        v4 += 16LL;
      }
      while ( !v3 );
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  return a1;
}
