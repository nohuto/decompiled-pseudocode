/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x14078FC40
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x14094718C (EtwpCoverageSamplerStart.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x14078FC90 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
