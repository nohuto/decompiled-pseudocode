/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140844CB0
 * Callers:
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x1405EA940 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140AC3CE8 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140AD6EA0 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140AD7148 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140844E98 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
