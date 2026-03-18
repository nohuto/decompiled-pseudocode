/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x1409CEF44
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1409C6230 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x1405F5A58 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9218 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1409CEBD4 (SepFindMatchingLowBoxNumberEntries.c)
 */

char __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  char IsParentOfChildAppContainer; // r15
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // [rsp+38h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
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
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return IsParentOfChildAppContainer;
      }
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( (int)SepFindMatchingLowBoxNumberEntries(
                *(PRTL_DYNAMIC_HASH_TABLE *)(v10 + 24),
                a2,
                a3,
                &v13,
                (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v12) >= 0 )
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(v13[1].Linkage.Blink, *(PSID *)(v12 + 32));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v7 )
      return IsParentOfChildAppContainer;
    goto LABEL_11;
  }
  return 0;
}
