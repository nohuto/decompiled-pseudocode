/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x1409E0588
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D50 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140A6FD8C (ViInitSystemPhase1.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x1409E05B4 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x800) != 0 && (MmVerifierData & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
