/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1406111D0
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C3200 (AdtpBuildContextFromSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140611138 (ExpWnfSpecializeSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x14067B860 (NtSetSecurityObject.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20 (LocalConvertSDToStringSD_Rev1.c)
 *     IopGetSecurityDescriptorInformation @ 0x140738B6C (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073AEAC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x140871814 (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871CD0 (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x140913990 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x140924DD4 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v8; // cx
  __int64 v9; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 0x10;
  *SaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v8 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v8 & 0x10) != 0 )
    {
      if ( v8 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v9 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v9 )
          v6 = (ACL *)((char *)SecurityDescriptor + v9);
      }
    }
    *Sacl = v6;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
