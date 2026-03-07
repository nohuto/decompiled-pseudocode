void ViPtInitAvlTrees()
{
  ViUpdateStackInfo = 1;
  RtlInitializeGenericTableAvl(
    &ViPoolInfoAvl,
    (PRTL_AVL_COMPARE_ROUTINE)VfPtComparePoolInfoCallback,
    (PRTL_AVL_ALLOCATE_ROUTINE)ViPtAllocPoolInfoCallback,
    (PRTL_AVL_FREE_ROUTINE)ViPtFreePoolInfoEntryCallback,
    0LL);
  _InterlockedExchange(&ViPoolInfoAvlInitialized, 1);
  RtlInitializeGenericTableAvl(
    &ViPoolStackInfoAvl,
    (PRTL_AVL_COMPARE_ROUTINE)VfPtComparePoolStackInfoCallback,
    (PRTL_AVL_ALLOCATE_ROUTINE)ViPtAllocPoolInfoCallback,
    (PRTL_AVL_FREE_ROUTINE)ViPtFreeStackInfoEntryCallback,
    0LL);
  _InterlockedExchange(&ViPoolStackInfoAvlInitialized, 1);
}
