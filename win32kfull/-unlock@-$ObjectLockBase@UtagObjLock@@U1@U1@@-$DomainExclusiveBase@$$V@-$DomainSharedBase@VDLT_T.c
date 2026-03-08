/*
 * XREFs of ?unlock@?$ObjectLockBase@UtagObjLock@@U1@U1@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@AEAAXXZ @ 0x1C014401A
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedBase<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock,tagObjLock,tagObjLock>::unlock(
        __int64 a1)
{
  int v2; // esi
  tagObjLock **v3; // r14
  int i; // ebx
  __int64 v5; // rbx
  tagDomLock *v6; // rcx

  if ( *(_BYTE *)(a1 + 96) )
  {
    v2 = 2;
    v3 = (tagObjLock **)(a1 + 80);
    for ( i = 2; i >= 0; --i )
    {
      if ( *v3 )
        tagObjLock::UnLockExclusive(*v3);
      --v3;
    }
    v5 = a1 + 32;
    do
    {
      v6 = *(tagDomLock **)v5;
      if ( *(_QWORD *)v5 )
      {
        if ( *(_BYTE *)(v5 + 8) )
          tagDomLock::UnLockExclusive(v6);
        else
          tagDomLock::UnLockShared(v6);
      }
      v5 -= 16LL;
      --v2;
    }
    while ( v2 >= 0 );
    *(_BYTE *)(a1 + 96) = 0;
  }
}
