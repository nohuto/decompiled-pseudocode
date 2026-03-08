/*
 * XREFs of RtlFindAceByType @ 0x1403100D0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200E40 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14030FBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepGetScopedPolicySid @ 0x1405B57D4 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B5D24 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14066E690 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x140699DD0 (RtlpGenerateInheritAcl.c)
 *     SeQueryMandatoryLabel @ 0x140743AE8 (SeQueryMandatoryLabel.c)
 *     RtlpCopyAces @ 0x1407BBF30 (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     SepSDContainsAttributeACE @ 0x1409CE498 (SepSDContainsAttributeACE.c)
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
