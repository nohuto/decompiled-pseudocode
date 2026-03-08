/*
 * XREFs of VfFaultsInitPhase1 @ 0x140AD2EA0
 * Callers:
 *     ViInitSystemPhase1 @ 0x140B483D4 (ViInitSystemPhase1.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1408194B0 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
