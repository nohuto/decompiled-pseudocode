/*
 * XREFs of ZwQuerySecurityObject @ 0x1403FD100
 * Callers:
 *     RtlIsUntrustedObject @ 0x1402A42E0 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14066AB70 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C540 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
