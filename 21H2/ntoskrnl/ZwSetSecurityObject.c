/*
 * XREFs of ZwSetSecurityObject @ 0x1403FD8C0
 * Callers:
 *     BiZwSetSecurityObject @ 0x14039B5AC (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1403F0488 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405CD898 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140769CFC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1408821DC (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C48C (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C460 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
