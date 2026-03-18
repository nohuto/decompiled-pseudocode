/*
 * XREFs of MmDeleteKernelStack @ 0x1403D5FE0
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x140871A70 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140884E70 (KeFreeCalloutStack.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026F7B0 (MmDeleteKernelStackEx.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(ULONG_PTR a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}
