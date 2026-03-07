void RtlInitKernelModeSpecialMachineFrameEntries()
{
  RtlpInitMachineFrameEntries((unsigned __int64 *)&RtlpNoShadowStackUnwindMachineFrameEntries, 2u);
}
