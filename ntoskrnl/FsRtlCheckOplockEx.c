/*
 * XREFs of FsRtlCheckOplockEx @ 0x14023ADF0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlCheckOplockEx2(Oplock, Irp, Flags, 0LL, Context, CompletionRoutine, PostIrpRoutine, 0LL, 0LL, 0LL);
}
