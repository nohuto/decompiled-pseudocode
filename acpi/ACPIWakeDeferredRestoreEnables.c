/*
 * XREFs of ACPIWakeDeferredRestoreEnables @ 0x1C0044C38
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIBuildRunMethodRequest @ 0x1C0013564 (ACPIBuildRunMethodRequest.c)
 */

__int64 __fastcall ACPIWakeDeferredRestoreEnables(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v5; // di

  _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x2000uLL);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  LODWORD(a3) = ACPIBuildRunMethodRequest(
                  a1,
                  (void (__fastcall *)(__int64, __int64, _QWORD))ACPIDeferredWakeCompletion,
                  a3,
                  1465077855,
                  13,
                  1);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  return (unsigned int)a3;
}
