/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140285CC0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     SepHasCriticalAcesRemoved @ 0x14066CDA0 (SepHasCriticalAcesRemoved.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1406A0788 (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407321B8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C540 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x14073C88C (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073EBCC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     MiInitializeMemoryEvents @ 0x1407A08D4 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x1407A0E68 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A0FF8 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x140871924 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140913AA0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v7; // cx
  __int64 v8; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v8 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v8 )
          v6 = (ACL *)((char *)SecurityDescriptor + v8);
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
