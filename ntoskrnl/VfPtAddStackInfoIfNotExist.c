/*
 * XREFs of VfPtAddStackInfoIfNotExist @ 0x140ADB5A0
 * Callers:
 *     ViPtLogStackCallout @ 0x140ADBF00 (ViPtLogStackCallout.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1405CFF24 (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x1405CFFC0 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x1405CFFD4 (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     MmDeterminePoolType @ 0x14063F644 (MmDeterminePoolType.c)
 */

_QWORD *__fastcall VfPtAddStackInfoIfNotExist(
        void *Src,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // rdi
  _QWORD *inserted; // rax
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD Buffer[56]; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v13 = 0LL;
  memset(Buffer, 0, 0x1B8uLL);
  Buffer[4] = 0LL;
  Buffer[0] = __PAIR64__(a2, a4);
  v9 = a5;
  Buffer[3] = a5;
  memmove(&Buffer[5], Src, 0x190uLL);
  if ( !ViPoolStackInfoAvlInitialized )
    return 0LL;
  ViPtInitializeLockContext((__int64)&v13);
  ViPtRaiseIrqlSafe((__int64)&v13);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  inserted = RtlInsertElementGenericTableAvl(&ViPoolStackInfoAvl, Buffer, 0x1B8u, &NewElement);
  v12 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( !(unsigned int)MmDeterminePoolType(a3) )
        *((_DWORD *)v12 + 2) |= 0x10u;
      *((_DWORD *)v12 + 2) |= 1u;
      ++ViPoolStackInfoAllocCount;
      *((_DWORD *)v12 + 3) = 1;
    }
    else
    {
      inserted[3] += v9;
      ++*((_DWORD *)inserted + 3);
    }
  }
  else
  {
    ++ViPoolStackInfoFailureCount;
  }
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v13);
  ViPtCleanupLockContext((__int64)&v13);
  return v12;
}
