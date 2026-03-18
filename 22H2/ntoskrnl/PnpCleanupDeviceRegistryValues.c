/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14088507C
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x14078EAF8 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     PpDeviceRegistration @ 0x1407CFAC4 (PpDeviceRegistration.c)
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
