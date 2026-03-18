/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x14078EDC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407F8298 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BB4D8 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B1ED10 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B1EFA0 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140B2114C (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     WmipInitializeSecurity @ 0x140B22DD4 (WmipInitializeSecurity.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  v5 = 0LL;
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}
