/*
 * XREFs of VfFaultsInitPhase1 @ 0x140A96A04
 * Callers:
 *     ViInitSystemPhase1 @ 0x140B27E30 (ViInitSystemPhase1.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
