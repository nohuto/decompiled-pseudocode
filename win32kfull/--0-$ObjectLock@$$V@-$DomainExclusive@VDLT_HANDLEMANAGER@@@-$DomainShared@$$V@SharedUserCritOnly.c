/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01AFD74
 * Callers:
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01AFDF8 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01B1740 (_FreeTouchInputInfo.c)
 *     AllocGestureInfo @ 0x1C0207064 (AllocGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 * Callees:
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00394D8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C00E3814 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // esi
  __int64 v5; // rdi
  tagDomLock *v6; // rcx

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(a1);
  *(_BYTE *)(a1 + 48) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v2) )
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
