/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140302AF0
 * Callers:
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4D18 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407C4070 (IoWMIDeviceObjectToInstanceName.c)
 *     PipSetDevNodeStateFlags @ 0x140959AC8 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x140971CC4 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140983344 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag((__int64)DeviceObject, 0x746C6644u);
}
