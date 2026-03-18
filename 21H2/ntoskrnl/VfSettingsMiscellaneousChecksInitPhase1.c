/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140A9B0C8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140B27E30 (ViInitSystemPhase1.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140A9B0FC (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 __fastcall VfSettingsMiscellaneousChecksInitPhase1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 && (VfRuleClasses & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL, a2);
  return result;
}
