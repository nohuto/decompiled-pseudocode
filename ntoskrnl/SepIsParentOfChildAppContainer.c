/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x1409CEBF4
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1409C65F0 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepGetTokenSessionMapEntry @ 0x14045C46E (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9428 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1409CE86C (SepFindMatchingLowBoxNumberEntries.c)
 */

char __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  char IsParentOfChildAppContainer; // r15
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v14; // [rsp+38h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  IsParentOfChildAppContainer = 0;
  v7 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
      v7 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, (__int64 *)&BugCheckParameter2) < 0 )
      {
LABEL_11:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return IsParentOfChildAppContainer;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v9 = KeGetCurrentThread();
    v10 = BugCheckParameter2;
    v11 = BugCheckParameter2;
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                *(PRTL_DYNAMIC_HASH_TABLE *)(v10 + 24),
                a2,
                a3,
                &v14,
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v13) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v14[1].Linkage.Blink, *(PSID *)(v13 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v7 )
      return IsParentOfChildAppContainer;
    goto LABEL_11;
  }
  return 0;
}
