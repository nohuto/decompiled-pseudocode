/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x14068E3D0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x14068E428 (PiUEventInitClientRegistrationContext.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408808A8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BB734 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BBBD8 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B48710 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B489A0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B48C50 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B4C2CC (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140B54220 (WmipInitializeSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6811C (PspInitializeCpuPartitionsDefaultSd.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B69148 (PiAuGetDriverDataDirectorySecurityObject.c)
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
