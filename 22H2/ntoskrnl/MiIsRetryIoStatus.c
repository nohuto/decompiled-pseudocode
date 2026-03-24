/*
 * XREFs of MiIsRetryIoStatus @ 0x140255144
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiZeroPageWrite @ 0x1403193E8 (MiZeroPageWrite.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406FF22C (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x1408C7DF0 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140255200 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741801 || a1 == -1073741670 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
