/*
 * XREFs of VfPtAddStackInfoIfNotExist @ 0x140A9D4F0
 * Callers:
 *     ViPtLogStackCallout @ 0x140A9DE70 (ViPtLogStackCallout.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     MmDeterminePoolType @ 0x140367A44 (MmDeterminePoolType.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140601F88 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x140601FCC (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140602068 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14060207C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406020E8 (ViPtReleaseTreeLockFromDpcLevel.c)
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
  int v13; // r8d
  __int128 v14; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD Buffer[56]; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN NewElement; // [rsp+218h] [rbp+118h] BYREF

  NewElement = 0;
  v14 = 0LL;
  memset(Buffer, 0, 0x1B8uLL);
  Buffer[4] = 0LL;
  Buffer[0] = __PAIR64__(a2, a4);
  v9 = a5;
  Buffer[3] = a5;
  memmove(&Buffer[5], Src, 0x190uLL);
  if ( !ViPoolStackInfoAvlInitialized )
    return 0LL;
  ViPtInitializeLockContext((__int64)&v14);
  ViPtRaiseIrqlSafe((__int64)&v14);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v14);
  inserted = RtlInsertElementGenericTableAvl(&ViPoolStackInfoAvl, Buffer, 0x1B8u, &NewElement);
  v12 = inserted;
  if ( inserted )
  {
    if ( NewElement )
    {
      if ( !(unsigned int)MmDeterminePoolType(a3) )
        v13 |= 0x10u;
      *((_DWORD *)v12 + 3) = 1;
      LODWORD(ViPoolStackInfoAllocCount) = ViPoolStackInfoAllocCount + 1;
      *((_DWORD *)v12 + 2) = v13 | 1;
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
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v14);
  ViPtCleanupLockContext((__int64)&v14);
  return v12;
}
