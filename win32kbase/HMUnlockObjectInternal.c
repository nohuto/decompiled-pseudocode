/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0072A40
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0072910 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00A2FD0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00D1154 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C01539B8 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

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
