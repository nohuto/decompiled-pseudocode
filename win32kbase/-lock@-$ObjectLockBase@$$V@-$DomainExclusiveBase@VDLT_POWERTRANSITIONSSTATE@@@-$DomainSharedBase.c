/*
 * XREFs of ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C00CFB20
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::lock(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
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
