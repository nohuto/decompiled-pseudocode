/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x1407EF640
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085A568 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F758 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140881244 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140885688 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14095B7C0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095BA04 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BC4C (PiAuGetStateDirectorySecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA74 (DrvDbGetSecurityDescriptor.c)
 *     WmipInitializeSecurity @ 0x140B3C860 (WmipInitializeSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B43A10 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B43DC0 (PiAuCreateStandardSecurityObject.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B5719C (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B5742C (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B576DC (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B59E44 (SepInitSystemDacls.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6BFAC (PspInitializeCpuPartitionsDefaultSd.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6D174 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Group,
        BOOLEAN GroupDefaulted)
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
  if ( Group )
    v5 = Group;
  *((_QWORD *)SecurityDescriptor + 2) = v5;
  v6 = v4 & 0xFFFD;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( GroupDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 2;
  return 0;
}
