/*
 * XREFs of RtlLengthRequiredSid @ 0x14066A560
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x140202D70 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406375D0 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140B02560 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B1F3C0 (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x140B2940C (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B2DB68 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B2DE24 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
