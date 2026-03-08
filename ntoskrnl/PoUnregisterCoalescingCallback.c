/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x140983E40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14034C120 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 8;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(a1 + 8);
  if ( ExCompareExchangeCallBack(v2, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock(v2, v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExWaitForRundownProtectionRelease(v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
    v5 = a1[6];
    if ( *(_QWORD **)(v5 + 8) != a1 + 6 || (v6 = (_QWORD *)a1[7], (_QWORD *)*v6 != a1 + 6) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v2, v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
}
