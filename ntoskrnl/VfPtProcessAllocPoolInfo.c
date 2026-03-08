/*
 * XREFs of VfPtProcessAllocPoolInfo @ 0x140ADBA18
 * Callers:
 *     ViPtLogStackCallout @ 0x140ADBF00 (ViPtLogStackCallout.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405CFF24 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405CFFC0 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405CFFD4 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

BOOLEAN __fastcall VfPtProcessAllocPoolInfo(_QWORD *a1, __int64 a2)
{
  BOOLEAN result; // al
  BOOLEAN v3; // bl
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+60h] [rbp+10h] BYREF

  Buffer[0] = *a1;
  Buffer[1] = a1[1];
  result = ViPoolInfoAvlInitialized;
  NewElement = 0;
  Buffer[2] = a2;
  v4 = 0LL;
  if ( ViPoolInfoAvlInitialized )
  {
    ViPtInitializeLockContext((__int64)&v4);
    ViPtRaiseIrqlSafe((__int64)&v4);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v4);
    RtlInsertElementGenericTableAvl(&ViPoolInfoAvl, Buffer, 0x18u, &NewElement);
    v3 = NewElement;
    if ( !NewElement )
    {
      v3 = 0;
      ++ViPoolInfoAllocInsertionFailure;
    }
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v4);
    ViPtCleanupLockContext((__int64)&v4);
    return v3;
  }
  return result;
}
