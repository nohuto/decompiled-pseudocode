/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B939CC
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140B704B8 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitKernelModeSpecialMachineFrameEntries()
{
  RtlpInitMachineFrameEntries((unsigned __int64 *)&RtlpNoShadowStackUnwindMachineFrameEntries, 2u);
}
