/*
 * XREFs of PspGetNextSyscallProviderProcess @ 0x1406597D0
 * Callers:
 *     PspQuerySyscallProviderProcessList @ 0x140659A48 (PspQuerySyscallProviderProcessList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspGetNextSyscallProviderProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // r15
  char v6; // di
  signed __int64 *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // r14

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (signed __int64 *)(a1 + 64);
  ExAcquirePushLockSharedEx(a1 + 64, 0LL);
  if ( a2 )
    v8 = (_QWORD *)a2[363];
  else
    v8 = *(_QWORD **)(a1 + 72);
  v9 = (_QWORD *)(a1 + 72);
  while ( v8 != v9 )
  {
    v5 = (unsigned __int64)(v8 - 363);
    if ( ObReferenceObjectSafeWithTag((__int64)(v8 - 363)) )
    {
      v6 = 1;
      break;
    }
    v8 = (_QWORD *)*v8;
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x63537350u);
  return v5 & -(__int64)(v6 != 0);
}
