/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140297520
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14069AA88 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     SepHasCriticalAcesRemoved @ 0x14069C020 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071170C (ExpWnfSpecializeSecurityDescriptor.c)
 *     MiInitializeMemoryEvents @ 0x14081E318 (MiInitializeMemoryEvents.c)
 *     IopGetSecurityDescriptorInformation @ 0x14083D014 (IopGetSecurityDescriptorInformation.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408596D0 (ObpCreateDosDevicesDirectory.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F8E0 (ExpInitFullProcessSecurityInfo.c)
 *     ObCleanupSecurityDescriptor @ 0x1408643C0 (ObCleanupSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EFD0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1409BC3E0 (RtlReplaceSidInSd.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE764 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  ACL *v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v4 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v4;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
