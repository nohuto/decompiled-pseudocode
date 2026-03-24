/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x14067FD40
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckKeyOwnerForPca @ 0x14067FCD8 (CmpCheckKeyOwnerForPca.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140731FF8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     IopGetSecurityDescriptorInformation @ 0x14073C6CC (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073EA0C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FB68 (CmpCheckExeOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x1408717C4 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140913940 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
