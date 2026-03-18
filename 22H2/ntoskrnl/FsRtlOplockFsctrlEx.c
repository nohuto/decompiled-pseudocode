/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x140766800
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x140766820 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
