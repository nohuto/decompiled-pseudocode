/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140B926E0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
