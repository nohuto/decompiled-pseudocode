/*
 * XREFs of RtlLengthRequiredSid @ 0x1405DC260
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402024F0 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A5550 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0CC8 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 *     PopNetInitialize @ 0x140A3EBF8 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140A48B6C (SepVariableInitialization.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7127C (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A7199C (CmpInitializeTrustedInstallerSid.c)
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
