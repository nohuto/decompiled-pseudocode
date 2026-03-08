/*
 * XREFs of FsRtlOplockBreakToNone @ 0x14053B8C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlOplockBreakToNoneEx @ 0x14053B920 (FsRtlOplockBreakToNoneEx.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNone(
        POPLOCK Oplock,
        PIO_STACK_LOCATION IrpSp,
        PIRP Irp,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  ULONG v7; // r8d

  v7 = 0;
  if ( !*Oplock )
    return 0;
  if ( !IrpSp )
    IrpSp = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !IrpSp->MajorFunction && (IrpSp->Parameters.Create.Options & 0x100) != 0 )
    v7 = 1;
  return FsRtlOplockBreakToNoneEx(Oplock, Irp, v7, Context, CompletionRoutine, PostIrpRoutine);
}
