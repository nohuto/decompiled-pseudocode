/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140844B30
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x1405EAB70 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140844B70 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
