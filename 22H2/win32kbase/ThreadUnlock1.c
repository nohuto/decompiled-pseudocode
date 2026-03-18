/*
 * XREFs of ThreadUnlock1 @ 0x1C0045EE0
 * Callers:
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0069C00 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B53BC (--1CThreadLockInputDest@@QEAA@XZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C16A4 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C012CAC8 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 ThreadUnlock1()
{
  __int64 v0; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rbx
  struct _HANDLEENTRY *v5; // rdi
  char v6; // al
  char *v7; // rdi
  int v8; // esi
  tagDomLock *v9; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-40h]
  char v11; // [rsp+30h] [rbp-38h] BYREF
  void *v12; // [rsp+38h] [rbp-30h]
  char v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+50h] [rbp-18h]

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
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
      v5 = (struct _HANDLEENTRY *)((char *)qword_1C028FE68
                                 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)v3);
      v6 = *((_BYTE *)v5 + 25);
      if ( (v6 & 1) != 0 && (v6 & 2) == 0 )
      {
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          v7 = &v11;
          v11 = 1;
          v12 = &gDomainDummyLock;
          v8 = 0;
          v13 = 0;
          v14 = 0LL;
          v15 = 0;
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
          LockIntoSharedUserCritDeferredUnlockList(v3);
          if ( v15 && DomainLockRef )
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        else if ( !gphePrimaryDestroyTarget
               || v5 == gphePrimaryDestroyTarget
               || gbInDestroyExclusiveUserCritDeferredUnlockList )
        {
          HMDestroyUnlockedObjectWorker(v5);
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
