/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x14069BD60
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x1405B8D48 (SepCheckAndCopySelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085A568 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CF98 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F758 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EFD0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140881244 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140885688 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095BA04 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BC4C (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01BFC (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B43A10 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B43DC0 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6D174 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlMakeSelfRelativeSD @ 0x14069BD84 (RtlMakeSelfRelativeSD.c)
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
