/*
 * XREFs of PsReferencePrimaryToken @ 0x1407AFED0
 * Callers:
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
