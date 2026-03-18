/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x14042A6E0
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B5CF4 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B5D54 (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
