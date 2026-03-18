/*
 * XREFs of RtlFindAceByType @ 0x140349610
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402A4A60 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403763A8 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x1405F4288 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14064C418 (AdtpBuildContextFromSecurityDescriptor.c)
 *     SeQueryMandatoryLabel @ 0x1406C9990 (SeQueryMandatoryLabel.c)
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     RtlpCopyAces @ 0x140728450 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x140728DA0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1409BA380 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1409CE660 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
