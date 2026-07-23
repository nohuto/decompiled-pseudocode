/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1405DA7E0
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckKeyOwnerForPca @ 0x1405DA778 (CmpCheckKeyOwnerForPca.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407321B8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     IopGetSecurityDescriptorInformation @ 0x14073C88C (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073EBCC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FD28 (CmpCheckExeOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x140871924 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140913AA0 (RtlReplaceSidInSd.c)
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
