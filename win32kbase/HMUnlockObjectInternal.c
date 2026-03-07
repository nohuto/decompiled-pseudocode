_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1)
{
  struct _HANDLEENTRY *v2; // rbx
  char v3; // al
  char *v5; // rbx
  int v6; // esi
  PERESOURCE *v7; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v9; // [rsp+28h] [rbp-40h] BYREF
  void *v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  char v13; // [rsp+48h] [rbp-20h]

  v2 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainLockRef = GetDomainLockRef(12);
    v5 = &v9;
    v9 = 1;
    v10 = &gDomainDummyLock;
    v12 = 0LL;
    v6 = 0;
    v13 = 0;
    v11 = 0;
    do
    {
      v7 = (PERESOURCE *)*((_QWORD *)v5 - 1);
      if ( v7 )
      {
        if ( *v5 )
          tagDomLock::LockExclusive(v7);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*v7);
      }
      ++v6;
      v5 += 16;
    }
    while ( !v6 );
    v13 = 1;
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v13 && DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  else if ( !gphePrimaryDestroyTarget
         || v2 == gphePrimaryDestroyTarget
         || gbInDestroyExclusiveUserCritDeferredUnlockList )
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  else
  {
    ++gcSecondaryDestroyTargets;
    LockIntoExclusiveUserCritDeferredUnlockList(a1);
  }
  return 0LL;
}
