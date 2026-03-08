/*
 * XREFs of ViPtDeleteAvlTrees @ 0x140ADBBF0
 * Callers:
 *     ViPtPluginUnload @ 0x140ADC1B0 (ViPtPluginUnload.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402EF150 (RtlEnumerateGenericTableAvl.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405CFF24 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405CFFC0 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405CFFD4 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

unsigned __int64 ViPtDeleteAvlTrees()
{
  PVOID v0; // rax
  unsigned __int64 result; // rax
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( (VfOptionFlags & 0x1000) != 0 )
    VfOptionFlags &= ~0x1000u;
  if ( ViPoolInfoAvlInitialized )
  {
    ViUpdateStackInfo = 0;
    ViPtInitializeLockContext((__int64)&v3);
    ViPtRaiseIrqlSafe((__int64)&v3);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v3);
    while ( 1 )
    {
      v0 = RtlEnumerateGenericTableAvl(&ViPoolInfoAvl, 1u);
      if ( !v0 )
        break;
      RtlDeleteElementGenericTableAvl(&ViPoolInfoAvl, v0);
    }
    ViPoolInfoAvlInitialized = 0;
    ViPoolInfoAllocInsertionFailure = 0;
    ViPoolInfoAllocDeletionFailure = 0;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    memset(&ViPoolInfoAvl, 0, 0xC0uLL);
  }
  result = (unsigned int)ViPoolStackInfoAvlInitialized;
  if ( ViPoolStackInfoAvlInitialized )
  {
    ViPtInitializeLockContext((__int64)&v3);
    ViPtRaiseIrqlSafe((__int64)&v3);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v3);
    while ( 1 )
    {
      v2 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 1u);
      if ( !v2 )
        break;
      RtlDeleteElementGenericTableAvl(&ViPoolStackInfoAvl, v2);
    }
    ViPoolStackInfoAllocCount = 0;
    ViPoolStackInfoAvlInitialized = 0;
    ViPoolStackInfoFailureCount = 0;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    return (unsigned __int64)memset(&ViPoolStackInfoAvl, 0, 0xC0uLL);
  }
  return result;
}
