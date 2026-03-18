/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0122AC8
 * Callers:
 *     _BuildPropList @ 0x1C0071C8C (_BuildPropList.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2,
        __int64 a3,
        __int64 a4)
{
  tagObjLock **v4; // rdi
  tagObjLock *v5; // rsi
  PERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi

  v4 = (tagObjLock **)(a1 + 16);
  *(_QWORD *)a1 = gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  v5 = a2;
  *(_BYTE *)(a1 + 40) = 0;
  v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( ExIsResourceAcquiredExclusiveLite(*v7) != 1 && IS_USERCRIT_OWNED_AT_ALL(v9, v8, v10, v11) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    if ( v5 == (tagObjLock *)gObjDummyLock )
      v5 = 0LL;
    *v4 = v5;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v12 = 0;
      do
      {
        if ( *v4 )
          tagObjLock::LockExclusive(*v4);
        ++v12;
        ++v4;
      }
      while ( !v12 );
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return a1;
}
