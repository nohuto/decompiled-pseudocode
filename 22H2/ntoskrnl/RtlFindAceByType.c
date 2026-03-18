/*
 * XREFs of RtlFindAceByType @ 0x1402AD1C0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200EE0 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x140225BD0 (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402B3540 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepGetScopedPolicySid @ 0x1405B7C84 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B81D4 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140670CE0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x1406C3B40 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1406C4630 (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BDE0 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x1407DD960 (SeQueryMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x1409D1338 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v3; // r9
  unsigned int v4; // r10d

  if ( !a1 )
    return 0LL;
  v3 = (unsigned __int8 *)(a1 + 8);
  v4 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v3 == a2 )
      return v3;
LABEL_6:
    ++v4;
    v3 += *((unsigned __int16 *)v3 + 1);
    if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v4 < *a3 || *v3 != a2 )
    goto LABEL_6;
  *a3 = v4;
  return v3;
}
