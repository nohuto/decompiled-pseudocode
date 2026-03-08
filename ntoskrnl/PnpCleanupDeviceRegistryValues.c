/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14088039C
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x1407830E8 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140802F20 (IoReportRootDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PpDeviceRegistration @ 0x140680F5C (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
