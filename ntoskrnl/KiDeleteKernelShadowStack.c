/*
 * XREFs of KiDeleteKernelShadowStack @ 0x14097141C
 * Callers:
 *     PspDeleteKernelStack @ 0x1402ED360 (PspDeleteKernelStack.c)
 *     KiFreeProcessorStacks @ 0x14056994C (KiFreeProcessorStacks.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
 * Callees:
 *     MmDeleteKernelShadowStack @ 0x140643030 (MmDeleteKernelShadowStack.c)
 */

PSLIST_ENTRY __fastcall KiDeleteKernelShadowStack(unsigned __int64 a1, int a2, char a3)
{
  return MmDeleteKernelShadowStack(a1, a2, a3);
}
