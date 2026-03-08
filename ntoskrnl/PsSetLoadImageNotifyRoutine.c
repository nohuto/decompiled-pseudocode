/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140819330
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x1405E86C0 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140819370 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
