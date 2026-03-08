/*
 * XREFs of VfPtProcessFreePoolInfo @ 0x140ADBAD0
 * Callers:
 *     ViPtLogStackCallout @ 0x140ADBF00 (ViPtLogStackCallout.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405CFF24 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405CFFC0 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405CFFD4 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

BOOLEAN __fastcall VfPtProcessFreePoolInfo(__int64 *a1)
{
  __int64 v1; // rax
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  Buffer[2] = 0LL;
  Buffer[0] = v1;
  Buffer[1] = a1[1];
  v4 = 0LL;
  if ( !ViPoolInfoAvlInitialized || !ViPoolStackInfoAvlInitialized )
    return 0;
  ViPtInitializeLockContext((__int64)&v4);
  ViPtRaiseIrqlSafe((__int64)&v4);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v4);
  v2 = RtlDeleteElementGenericTableAvl(&ViPoolInfoAvl, Buffer);
  if ( !v2 )
    ++ViPoolInfoAllocDeletionFailure;
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v4);
  ViPtCleanupLockContext((__int64)&v4);
  return v2;
}
