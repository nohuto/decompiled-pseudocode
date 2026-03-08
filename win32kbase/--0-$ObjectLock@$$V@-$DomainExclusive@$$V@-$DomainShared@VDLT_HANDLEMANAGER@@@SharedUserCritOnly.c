/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C003B2D0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  bool v2; // zf
  int v3; // esi
  __int64 v4; // rdi
  PERESOURCE *v5; // rcx

  *(_QWORD *)a1 = GetDomainLockRef(14LL);
  *(_QWORD *)(a1 + 16) = &gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v2 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v2 )
    {
      v3 = 0;
      v4 = a1;
      do
      {
        v5 = *(PERESOURCE **)v4;
        if ( *(_QWORD *)v4 )
        {
          if ( *(_BYTE *)(v4 + 8) )
            tagDomLock::LockExclusive(v5);
          else
            ExEnterCriticalRegionAndAcquireResourceShared(*v5);
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
