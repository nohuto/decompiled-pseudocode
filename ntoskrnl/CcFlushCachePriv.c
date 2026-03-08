/*
 * XREFs of CcFlushCachePriv @ 0x140219F20
 * Callers:
 *     CcFlushCache @ 0x140216740 (CcFlushCache.c)
 *     CcWriteBehindInternal @ 0x140219990 (CcWriteBehindInternal.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcZeroData @ 0x140243410 (CcZeroData.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14029FE90 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroEndOfLastPage @ 0x140343FA8 (CcZeroEndOfLastPage.c)
 *     MiFlushDataSection @ 0x140368CA0 (MiFlushDataSection.c)
 *     CcFlushCacheToLsn @ 0x1403CE930 (CcFlushCacheToLsn.c)
 * Callees:
 *     CcFlushCacheAcquireRange @ 0x14021A0CC (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcess @ 0x14021AF2C (CcFlushCachePostProcess.c)
 *     CcFlushCacheOneRange @ 0x14021B070 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14021B410 (CcFlushCachePostProcessOneRange.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcFlushCachePriv(const void *a1, __int64 a2, int a3, _QWORD *a4, char a5, __int128 *a6, __int64 a7)
{
  __int128 *v7; // rdi
  __int64 v12; // r9
  void *PoolWithTagFromNode; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v7 = &v16;
  v16 = 0LL;
  if ( a6 )
    v7 = a6;
  if ( a7 )
  {
    v14 = a7;
  }
  else
  {
    v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v12) = v12 | 0x80000000;
    PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(512LL, 264LL, 1113023299LL, v12, 0);
    v14 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)v7 = -1073741670;
      return;
    }
    memset(PoolWithTagFromNode, 0, 0x108uLL);
  }
  *(_QWORD *)(v14 + 72) = 0LL;
  *(_QWORD *)(v14 + 96) = a2;
  *(_DWORD *)(v14 + 104) = a3;
  *(_BYTE *)(v14 + 108) = a5;
  *(_QWORD *)(v14 + 112) = v7;
  *(_QWORD *)(v14 + 24) = a1;
  if ( a4 )
  {
    *(_QWORD *)(v14 + 80) = *a4;
    *(_QWORD *)(v14 + 88) = v14 + 80;
  }
  if ( (unsigned __int8)CcFlushCachePreProcess(v14) )
  {
    if ( *(_BYTE *)(v14 + 132) )
      *(_QWORD *)(v14 + 96) = 0LL;
    v15 = *(_QWORD *)(v14 + 16);
    if ( v15 && (*(_DWORD *)(v15 + 152) & 0x4000000) == 0 )
    {
      do
      {
        if ( !(unsigned __int8)CcFlushCacheAcquireRange(v14) )
          break;
        CcFlushCacheOneRange(v14);
      }
      while ( (unsigned __int8)CcFlushCachePostProcessOneRange(v14) );
      if ( *(_QWORD *)(v14 + 224) && *(_DWORD *)(v14 + 240) )
        *(LARGE_INTEGER *)(v14 + 232) = KeQueryPerformanceCounter(0LL);
    }
    CcFlushCachePostProcess(v14);
  }
  else
  {
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcFlushCachePriv: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      a1,
      *(_DWORD *)v7);
  }
  if ( v14 != a7 )
    ExFreePoolWithTag((PVOID)v14, 0x42576343u);
}
