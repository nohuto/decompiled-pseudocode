/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140832620
 * Callers:
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x14061A750 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140A96A04 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140A96CA8 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140832928 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
