/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14074A844
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14076B22C (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C7D80 (IoReportRootDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     PpDeviceRegistration @ 0x140748200 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
