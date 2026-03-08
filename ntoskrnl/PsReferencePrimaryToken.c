/*
 * XREFs of PsReferencePrimaryToken @ 0x1406EA370
 * Callers:
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
}
