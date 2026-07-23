/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1406F07B0
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406F1B5C (EtwpQueryTokenPackageInfo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140933B34 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1402F3310 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim);
}
