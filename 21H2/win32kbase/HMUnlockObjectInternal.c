/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0039070
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0038BD0 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0089240 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0030CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C0141650 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1)
{
  struct _HANDLEENTRY *v2; // rbx
  char v3; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rbx
  int v8; // esi
  tagDomLock *v9; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v11; // [rsp+28h] [rbp-40h] BYREF
  void *v12; // [rsp+30h] [rbp-38h]
  char v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  char v15; // [rsp+48h] [rbp-20h]

  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
    v7 = &v11;
    v11 = 1;
    v12 = &gDomainDummyLock;
    v14 = 0LL;
    v8 = 0;
    v15 = 0;
    v13 = 0;
    do
    {
      v9 = (tagDomLock *)*((_QWORD *)v7 - 1);
      if ( v9 )
      {
        if ( *v7 )
          tagDomLock::LockExclusive(v9);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v9);
      }
      ++v8;
      v7 += 16;
    }
    while ( !v8 );
    v15 = 1;
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v15 && DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  else if ( !gphePrimaryDestroyTarget
         || v2 == gphePrimaryDestroyTarget
         || gbInDestroyExclusiveUserCritDeferredUnlockList )
  {
    HMDestroyUnlockedObjectWorker(v2, v5, v6);
  }
  else
  {
    ++gcSecondaryDestroyTargets;
    LockIntoExclusiveUserCritDeferredUnlockList(a1);
  }
  return 0LL;
}
