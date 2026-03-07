NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlOplockBreakH2(
           (__int64 *)Oplock,
           Irp,
           Flags,
           (__int64)Context,
           (__int64)CompletionRoutine,
           (void (__fastcall *)(__int64, __int64))PostIrpRoutine,
           0LL,
           0LL);
}
