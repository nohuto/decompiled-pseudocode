/*
 * XREFs of PspGetNextSyscallProviderProcess @ 0x1409B4CB4
 * Callers:
 *     PspQuerySyscallProviderProcessList @ 0x1409B4EF0 (PspQuerySyscallProviderProcessList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall PspGetNextSyscallProviderProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbp
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r15
  char v7; // si
  _QWORD *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 64);
  v5 = (_QWORD *)(a1 + 72);
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 64, 0LL);
  v8 = a2 + 363;
  if ( !a2 )
    v8 = v5;
  while ( 1 )
  {
    v8 = (_QWORD *)*v8;
    if ( v8 == v5 )
      break;
    v6 = (unsigned __int64)(v8 - 363);
    if ( ObReferenceObjectSafeWithTag((__int64)(v8 - 363)) )
    {
      v7 = 1;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x63537350u);
  return v6 & -(__int64)(v7 != 0);
}
