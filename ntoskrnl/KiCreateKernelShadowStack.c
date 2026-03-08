/*
 * XREFs of KiCreateKernelShadowStack @ 0x1409713F0
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1403723C0 (KiAllocateProcessorStacks.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
 * Callees:
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 */

__int64 __fastcall KiCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6)
{
  return MmCreateKernelShadowStack(a1, a2, a3, a4, a5, a6);
}
