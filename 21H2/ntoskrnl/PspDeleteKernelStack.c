/*
 * XREFs of PspDeleteKernelStack @ 0x140241070
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, _QWORD *a2)
{
  return MmDeleteKernelStack(*a2, 2LL);
}
