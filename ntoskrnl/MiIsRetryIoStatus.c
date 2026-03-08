/*
 * XREFs of MiIsRetryIoStatus @ 0x140212D58
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiZeroPageWrite @ 0x1403BB864 (MiZeroPageWrite.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1407F17D4 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140212E10 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
