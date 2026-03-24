/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1406C299C
 * Callers:
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
