/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x140907A20
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140513708 (KeUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, unsigned __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_QWORD *)(a1 + 864);
  v7 = (_QWORD **)(a1 + 1504);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = *(v8 - 148);
    v8 = (_QWORD *)*v8;
    v6 += v9;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  return v6;
}
