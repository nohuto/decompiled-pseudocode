/*
 * XREFs of RtlLengthRequiredSid @ 0x1406CB9E0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402A6E80 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A5840 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0FB8 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140A49B6C (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x140A5E080 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7227C (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A7299C (CmpInitializeTrustedInstallerSid.c)
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
