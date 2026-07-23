/*
 * XREFs of ZwQuerySecurityObject @ 0x1403FC5A0
 * Callers:
 *     RtlIsUntrustedObject @ 0x1402FA190 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406EADF0 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140738828 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C4B0 (_RegRtlCopyTreeInternal.c)
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
