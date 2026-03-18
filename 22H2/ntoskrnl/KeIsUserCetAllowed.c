/*
 * XREFs of KeIsUserCetAllowed @ 0x140223CE4
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
