/*
 * XREFs of PsReferencePrimaryToken @ 0x1406EF4D0
 * Callers:
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
