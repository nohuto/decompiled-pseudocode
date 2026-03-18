/*
 * XREFs of ZwSetSecurityObject @ 0x14041EDA0
 * Callers:
 *     BiZwSetSecurityObject @ 0x1403A7848 (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1404172B8 (CmpApplyAdminSdOnHiveFiles.c)
 *     DifZwSetSecurityObjectWrapper @ 0x140627A50 (DifZwSetSecurityObjectWrapper.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1406580FC (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140679ADC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140925DFC (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D69A8 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140A2D248 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
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
