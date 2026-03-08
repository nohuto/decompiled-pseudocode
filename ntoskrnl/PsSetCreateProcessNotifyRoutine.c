/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1408194B0
 * Callers:
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x1405E8490 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140AD2EA0 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140AD3148 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140819698 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
