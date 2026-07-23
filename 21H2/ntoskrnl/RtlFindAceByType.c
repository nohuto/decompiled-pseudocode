/*
 * XREFs of RtlFindAceByType @ 0x14035CF60
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201574 (SepVerifyDesktopAppxPackageName.c)
 *     RtlIsUntrustedObject @ 0x1402A42E0 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x1402F5FEC (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140360C70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x1405962F8 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C34F0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x140651680 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1406521F0 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x1406694C4 (SeQueryMandatoryLabel.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140914EF4 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x140924EE4 (SepSDContainsAttributeACE.c)
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
