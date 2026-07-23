/*
 * XREFs of ZwSetSecurityObject @ 0x1403FCF40
 * Callers:
 *     BiZwSetSecurityObject @ 0x14039AEAC (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1403EFD88 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405CD898 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14076931C (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x14088222C (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C4DC (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C4B0 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
