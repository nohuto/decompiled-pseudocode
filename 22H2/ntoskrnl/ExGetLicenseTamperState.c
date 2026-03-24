/*
 * XREFs of ExGetLicenseTamperState @ 0x14094D260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ExpGetLicenseTamperState @ 0x1405B2C08 (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  bool v6; // bl
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 113);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(v3 + 46840);
  ExAcquirePushLockSharedEx(v3 + 46840, 0LL);
  ExpGetLicenseTamperState(v3, &v8);
  v6 = v8 != 0;
  if ( a1 )
    *a1 = v8;
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
