/*
 * XREFs of ViPtDeleteAvlTrees @ 0x140ADFBF0
 * Callers:
 *     ViPtPluginUnload @ 0x140AE01B0 (ViPtPluginUnload.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1403710D0 (RtlEnumerateGenericTableAvl.c)
 *     memset @ 0x140435400 (memset.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405D2390 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405D23D4 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405D2470 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405D2484 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D24F4 (ViPtReleaseTreeLockFromDpcLevel.c)
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
