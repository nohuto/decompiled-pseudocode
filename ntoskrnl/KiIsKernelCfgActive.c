/*
 * XREFs of KiIsKernelCfgActive @ 0x140B729B8
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
