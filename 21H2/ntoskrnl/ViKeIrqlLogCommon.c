/*
 * XREFs of ViKeIrqlLogCommon @ 0x140A7F7DA
 * Callers:
 *     VerifierKeLowerIrql @ 0x140A7F480 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140A7F4E0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140A7F570 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140A8EF40 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140A966F0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140A96730 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 *     VerifierExAcquireFastMutex @ 0x140A9C1E0 (VerifierExAcquireFastMutex.c)
 *     VerifierExReleaseFastMutex @ 0x140A9C2E0 (VerifierExReleaseFastMutex.c)
 *     VerifierExTryToAcquireFastMutex @ 0x140A9C3A0 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViKeIrqlLogCommon(__int64 a1, ULONG a2)
{
  PVOID *v2; // r8
  USHORT v4; // ax

  if ( a1 )
  {
    v2 = (PVOID *)(a1 + 16);
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *v2 = 0LL;
    }
    else
    {
      v4 = RtlCaptureStackBackTrace(a2, 5u, v2, 0LL);
      if ( v4 < 5u )
        *(_QWORD *)(a1 + 8LL * v4 + 16) = 0LL;
    }
  }
}
