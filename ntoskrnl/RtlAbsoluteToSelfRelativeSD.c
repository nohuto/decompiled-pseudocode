/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x14074E600
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x1405B6898 (SepCheckAndCopySelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408592D8 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408808A8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B69148 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlMakeSelfRelativeSD @ 0x14074E624 (RtlMakeSelfRelativeSD.c)
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
