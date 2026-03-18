/*
 * XREFs of ThreadUnlockWorker1 @ 0x1C008DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0030CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C0141650 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 ThreadUnlockWorker1()
{
  __int64 v0; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rbx
  struct _HANDLEENTRY *v4; // rdi
  char v5; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rdi
  int v10; // esi
  PERESOURCE *v11; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+28h] [rbp-40h] BYREF
  void *v14; // [rsp+30h] [rbp-38h]
  char v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+48h] [rbp-20h]

  v0 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  v2 = *(_QWORD **)(v0 + 416);
  *(_QWORD *)(v0 + 416) = *v2;
  v3 = v2[1];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      v4 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68
                                 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v3);
      v5 = *((_BYTE *)v4 + 25);
      if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          DomainLockRef = GetDomainLockRef(12LL, v7, v8);
          v9 = &v13;
          v13 = 1;
          v14 = &gDomainDummyLock;
          v16 = 0LL;
          v10 = 0;
          v17 = 0;
          v15 = 0;
          do
          {
            v11 = (PERESOURCE *)*((_QWORD *)v9 - 1);
            if ( v11 )
            {
              if ( *v9 )
                tagDomLock::LockExclusive(v11);
              else
                ExEnterCriticalRegionAndAcquireResourceShared(*v11);
            }
            ++v10;
            v9 += 16;
          }
          while ( !v10 );
          v17 = 1;
          LockIntoSharedUserCritDeferredUnlockList(v3);
          if ( v17 && DomainLockRef )
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        else if ( !gphePrimaryDestroyTarget
               || v4 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v4, v7, v8);
        }
        else
        {
          ++gcSecondaryDestroyTargets;
          LockIntoExclusiveUserCritDeferredUnlockList(v3);
        }
        return 0LL;
      }
    }
  }
  return v3;
}
