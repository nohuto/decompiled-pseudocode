/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140844B50
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x1405EAA60 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x140844DF4 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
