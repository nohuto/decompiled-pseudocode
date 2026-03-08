/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1407994E8
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
