/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1406D44E0
 * Callers:
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14070364C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x14071DD5C (EtwpQueryTokenPackageInfo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1402464F0 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, bool *a2, bool *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim);
}
