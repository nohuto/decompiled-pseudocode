/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x140844C90
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140844E98 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
