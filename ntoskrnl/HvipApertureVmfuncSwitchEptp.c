/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140422350
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B3844 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B38A4 (HviLeaveKernelAperture.c)
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
