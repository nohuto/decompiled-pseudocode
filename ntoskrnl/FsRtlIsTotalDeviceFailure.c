/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140212E10
 * Callers:
 *     MiIsRetryIoStatus @ 0x140212D58 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140212D9C (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
