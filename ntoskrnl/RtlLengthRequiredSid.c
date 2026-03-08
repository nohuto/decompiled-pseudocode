/*
 * XREFs of RtlLengthRequiredSid @ 0x140782B90
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1403BE650 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140602018 (EtwpApplyPayloadFilterInternal.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B43F40 (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B4A3A0 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B50A80 (CmpInitializeTrustedInstallerSid.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6811C (PspInitializeCpuPartitionsDefaultSd.c)
 *     IopCreateUmdfDirectory @ 0x140B69C28 (IopCreateUmdfDirectory.c)
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
