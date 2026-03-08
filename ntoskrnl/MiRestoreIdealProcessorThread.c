/*
 * XREFs of MiRestoreIdealProcessorThread @ 0x140664A64
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x1403C9248 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall MiRestoreIdealProcessorThread(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 != -1 )
    return KeSetIdealProcessorThreadEx((__int64)KeGetCurrentThread(), a1, 0LL);
  return result;
}
