/*
 * XREFs of KeStartIdealProcessorAssignmentBlock @ 0x1402969C4
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     KiSelectIdealProcessorSetsForProcess @ 0x140296A4C (KiSelectIdealProcessorSetsForProcess.c)
 *     KiInitializeProcessConcurrencyCount @ 0x140574574 (KiInitializeProcessConcurrencyCount.c)
 */

__int64 __fastcall KeStartIdealProcessorAssignmentBlock(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r10

  v3 = a2;
  if ( a3 )
  {
    KiInitializeProcessConcurrencyCount(a1, *a3);
    *(_DWORD *)(a1 + 12) |= 1u;
  }
  return KiSelectIdealProcessorSetsForProcess(v3, a1, a1 + 16, a1 + 4);
}
