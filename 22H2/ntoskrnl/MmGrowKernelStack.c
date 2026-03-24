/*
 * XREFs of MmGrowKernelStack @ 0x1405365F0
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x1403244F0 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MmGrowKernelStackEx(a1, 24576LL, a3, a4);
}
