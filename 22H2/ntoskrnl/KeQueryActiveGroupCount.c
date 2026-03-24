/*
 * XREFs of KeQueryActiveGroupCount @ 0x1403544B0
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PsCreateSystemThreadEx @ 0x1406FDA60 (PsCreateSystemThreadEx.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
