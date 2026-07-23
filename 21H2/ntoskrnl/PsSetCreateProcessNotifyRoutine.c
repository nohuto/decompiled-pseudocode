/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140791360
 * Callers:
 *     VfFaultsSetParameters @ 0x1409DD9C8 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A70D8C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140791528 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
