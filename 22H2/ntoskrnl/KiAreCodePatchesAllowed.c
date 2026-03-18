/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140B968F0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140B18B50 (KeCheckedKernelInitialize.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
