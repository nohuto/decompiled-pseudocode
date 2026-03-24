/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140255200
 * Callers:
 *     MiIsRetryIoStatus @ 0x140255144 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140255188 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
