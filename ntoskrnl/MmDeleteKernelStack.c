/*
 * XREFs of MmDeleteKernelStack @ 0x1403D0A50
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x14086F550 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140880190 (KeFreeCalloutStack.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(ULONG_PTR a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}
