/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x140744160
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x1405F4CC8 (SepCheckAndCopySelfRelativeSD.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14086240C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlMakeSelfRelativeSD @ 0x140744184 (RtlMakeSelfRelativeSD.c)
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) < 0 )
    return -1073741593;
  else
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
}
