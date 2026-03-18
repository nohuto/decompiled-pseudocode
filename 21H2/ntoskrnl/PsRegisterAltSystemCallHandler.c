/*
 * XREFs of PsRegisterAltSystemCallHandler @ 0x1409B2180
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PsRegisterAltSystemCallHandler(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  v2 = (int)a2;
  if ( !a1 || a2 >= 2 )
    KeBugCheckEx(0x1E0u, 2uLL, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeBugCheckEx(0x1E0u, 3uLL, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  if ( PsAltSystemCallHandlers[v2] )
  {
    ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
    KeLeaveCriticalRegion();
    KeBugCheckEx(0x1E0u, 1uLL, PsAltSystemCallHandlers[v2], 0LL, 0LL);
  }
  PsAltSystemCallHandlers[v2] = a1;
  ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
