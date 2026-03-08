/*
 * XREFs of FsRtlOplockFsctrl @ 0x1406B3A40
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal((__int64 *)Oplock, Irp, OpenCount, 0, 0x7000u);
}
