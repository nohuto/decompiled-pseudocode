/*
 * XREFs of PsQueryRuntimeProcess @ 0x140720A5C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PspSetJobTimeLimitCallback @ 0x1409B0010 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v3; // rdi
  unsigned int v6; // esi
  int v7; // ebp
  _QWORD **v8; // rbx
  _QWORD *i; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 2144);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_DWORD *)(a1 + 892);
  v7 = *(_DWORD *)(a1 + 896);
  v8 = (_QWORD **)(a1 + 1504);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v6 += *((_DWORD *)i - 171);
    v7 += *((_DWORD *)i - 151);
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = v6;
  *a2 = v7;
  return result;
}
