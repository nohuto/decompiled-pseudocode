/*
 * XREFs of RtlFindAceByType @ 0x1402D29C0
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201574 (SepVerifyDesktopAppxPackageName.c)
 *     SepMandatorySubProcessToken @ 0x14025103C (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402D66D0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     RtlIsUntrustedObject @ 0x1402FA190 (RtlIsUntrustedObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x140596008 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C3200 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     RtlpGenerateInheritAcl @ 0x1406D5620 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1406D6190 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1406D7180 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x1406ED084 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140914DE4 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x140924DD4 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
