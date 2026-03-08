/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x1407E844C
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(signed __int64 *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 135;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 135), 0LL);
  a2[2] = a1[290];
  a2[3] = a1[278];
  do
  {
    v6 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v6 != MEMORY[0xFFFFF780000003B0] );
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v7 = a2[3];
  result = *a2 - v6;
  a2[1] = result;
  if ( v7 )
  {
    result -= v7;
    a2[2] += result;
  }
  return result;
}
