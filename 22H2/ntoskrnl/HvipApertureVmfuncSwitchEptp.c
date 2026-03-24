/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140408D50
 * Callers:
 *     HviEnterKernelAperture @ 0x14059461C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594678 (HviLeaveKernelAperture.c)
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
