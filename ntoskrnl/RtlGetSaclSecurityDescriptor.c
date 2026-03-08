/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x14071C1D0
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14066E690 (AdtpBuildContextFromSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071C08C (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     NtSetSecurityObject @ 0x14076A550 (NtSetSecurityObject.c)
 *     IopGetSecurityDescriptorInformation @ 0x14083BD24 (IopGetSecurityDescriptorInformation.c)
 *     RtlReplaceSidInSd @ 0x1409B94C0 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1409CE498 (SepSDContainsAttributeACE.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A18BC8 (CmpExamineSaclForAuditEvent.c)
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
