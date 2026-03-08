/*
 * XREFs of KeIsUserCetAllowed @ 0x140296988
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
