/*
 * XREFs of ExGetLicenseTamperState @ 0x1409F6890
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpGetLicenseTamperState @ 0x140606C7C (ExpGetLicenseTamperState.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *p_Blink; // rdi
  bool v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  CurrentThread = KeGetCurrentThread();
  p_Blink = (signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
  ExpGetLicenseTamperState((__int64)Blink, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
