/*
 * XREFs of ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C0147CAC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::lock(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  int v3; // esi
  PERESOURCE *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    do
    {
      v4 = *(PERESOURCE **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *(_BYTE *)(v2 + 8) )
          tagDomLock::LockExclusive(v4);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*v4);
      }
      ++v3;
      v2 += 16LL;
    }
    while ( !v3 );
    *v1 = 1;
  }
}
