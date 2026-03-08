/*
 * XREFs of ZwQuerySecurityObject @ 0x140414FD0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200E40 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x1405F3280 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406C1120 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
