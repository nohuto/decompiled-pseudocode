/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140ADBE88
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC3CE8 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140B75DE4 (ViInitSystemPhase1.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140ADBEBC (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 && (VfRuleClasses & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
