/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x14066FE80
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14064C418 (AdtpBuildContextFromSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14066FDE8 (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     IopGetSecurityDescriptorInformation @ 0x1406796E8 (IopGetSecurityDescriptorInformation.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406BCE90 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140918574 (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1409CE660 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  ACL *v4; // rax
  __int16 v6; // dx
  __int64 v7; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    *SaclPresent = 1;
    v6 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v6 & 0x10) != 0 )
    {
      if ( v6 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v7 )
          v4 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    *Sacl = v4;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  else
  {
    *SaclPresent = 0;
  }
  return 0;
}
