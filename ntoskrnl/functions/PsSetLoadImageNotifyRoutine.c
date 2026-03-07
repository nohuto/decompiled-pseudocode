NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
