/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x14071DEF0
 * Callers:
 *     PsQueryProcessAttributes @ 0x14071DE84 (PsQueryProcessAttributes.c)
 *     EtwpQueryTokenPackageInfo @ 0x140755314 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7204 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4FC8 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140297AC0 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, bool *a2, bool *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
