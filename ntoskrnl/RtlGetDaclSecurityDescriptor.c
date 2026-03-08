/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140299320
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071C08C (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     SepHasCriticalAcesRemoved @ 0x14074E8C0 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     MiInitializeMemoryEvents @ 0x1408096D8 (MiInitializeMemoryEvents.c)
 *     IopGetSecurityDescriptorInformation @ 0x14083BD24 (IopGetSecurityDescriptorInformation.c)
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085B9E0 (ExpInitFullProcessSecurityInfo.c)
 *     ObCleanupSecurityDescriptor @ 0x14085FE80 (ObCleanupSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1409B94C0 (RtlReplaceSidInSd.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BB734 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
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
