/*
 * XREFs of CmpInitCmPrivateAlloc @ 0x140A8EB7C
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140352460 (ExInitializeLookasideListExInternal.c)
 */

__int64 CmpInitCmPrivateAlloc()
{
  return ExInitializeLookasideListExInternal(
           &CmpKcbLookaside,
           CmpAllocateTransientPoolWithTag,
           (PSLIST_ENTRY (__fastcall *)(ULONG_PTR))CmSiFreeMemory,
           1,
           0,
           0x138uLL,
           1651199299,
           0,
           0);
}
