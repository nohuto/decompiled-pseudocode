/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140819350
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x1405E85B0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1408195F4 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
