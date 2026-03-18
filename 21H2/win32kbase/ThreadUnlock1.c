/*
 * XREFs of ThreadUnlock1 @ 0x1C0030C00
 * Callers:
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C004FA80 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0030CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C0141650 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 ThreadUnlock1()
{
  __int64 v0; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rbx
  struct _HANDLEENTRY *v5; // rdi
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rdi
  int v10; // esi
  tagDomLock *v11; // rcx
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
      v5 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68
                                 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v3);
      v6 = *((_BYTE *)v5 + 25);
      if ( (v6 & 1) != 0 && (v6 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          v9 = &v13;
          v13 = 1;
          v14 = &gDomainDummyLock;
          v16 = 0LL;
          v10 = 0;
          v17 = 0;
          v15 = 0;
          do
          {
            v11 = (tagDomLock *)*((_QWORD *)v9 - 1);
            if ( v11 )
            {
              if ( *v9 )
                tagDomLock::LockExclusive(v11);
              else
                ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v11);
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
               || v5 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v5, v7, v8);
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
