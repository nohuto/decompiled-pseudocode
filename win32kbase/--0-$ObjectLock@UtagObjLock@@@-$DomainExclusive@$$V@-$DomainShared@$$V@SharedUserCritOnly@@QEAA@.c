/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0072AEC
 * Callers:
 *     DeleteProperties @ 0x1C0072500 (DeleteProperties.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008ECEC (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C008F128 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C009B720 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        __int64 *a2)
{
  tagObjLock **v2; // rdi
  __int64 *v6; // rax
  int v7; // esi

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &gDomainDummyLock;
  v2 = (tagObjLock **)(a1 + 16);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v6 = 0LL;
    *(_BYTE *)(a1 + 40) = 1;
    if ( a2 != &gObjDummyLock )
      v6 = a2;
    *v2 = (tagObjLock *)v6;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v7 = 0;
      do
      {
        if ( *v2 )
          tagObjLock::LockExclusive(*v2);
        ++v7;
        ++v2;
      }
      while ( !v7 );
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return a1;
}
