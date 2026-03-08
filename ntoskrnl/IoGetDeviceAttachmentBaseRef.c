/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1402409C0
 * Callers:
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407744D0 (IoWMIDeviceObjectToInstanceName.c)
 *     FsRtlReleaseFile @ 0x1407D18E0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0 (FsRtlAcquireFileExclusiveCommon.c)
 *     PipSetDevNodeStateFlags @ 0x140956AA8 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x14096ECA4 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140980294 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag((__int64)DeviceObject, 0x746C6644u);
}
