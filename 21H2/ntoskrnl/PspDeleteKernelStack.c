/*
 * XREFs of PspDeleteKernelStack @ 0x1402C2B50
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, _QWORD *a2)
{
  return MmDeleteKernelStack(*a2, 2LL);
}
