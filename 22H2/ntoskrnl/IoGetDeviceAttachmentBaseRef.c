/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14034C520
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1403794A4 (HalpIommuGetDeviceId.c)
 *     FsRtlReleaseFile @ 0x140655100 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406552D0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406BFDE4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14078D0B0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x1408B911C (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E3000 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
