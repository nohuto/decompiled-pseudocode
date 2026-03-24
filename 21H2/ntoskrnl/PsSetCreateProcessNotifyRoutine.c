/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x14078FDB0
 * Callers:
 *     VfFaultsSetParameters @ 0x1409DC9C8 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A6FD8C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x14078FF78 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
