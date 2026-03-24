/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140799990
 * Callers:
 *     VfFaultsSetParameters @ 0x1409DC9D8 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A6FD8C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140799B58 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
