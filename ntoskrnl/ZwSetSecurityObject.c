/*
 * XREFs of ZwSetSecurityObject @ 0x1404159D0
 * Callers:
 *     CmpApplyAdminSdOnHiveFiles @ 0x14038BE1C (CmpApplyAdminSdOnHiveFiles.c)
 *     BiZwSetSecurityObject @ 0x14039040C (BiZwSetSecurityObject.c)
 *     DifZwSetSecurityObjectWrapper @ 0x1405F52C0 (DifZwSetSecurityObjectWrapper.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x14067DC08 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140877924 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D6D88 (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A27E50 (CmpDoReDoSetSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
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
