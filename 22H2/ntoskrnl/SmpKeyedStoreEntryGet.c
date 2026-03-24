/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140264198
 * Callers:
 *     SmpKeyedStoreReference @ 0x140263FC0 (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x140264160 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140351A08 (SmpKeyedStoreSetVaRanges.c)
 *     SmpProcessQueryStoreStats @ 0x14059CF98 (SmpProcessQueryStoreStats.c)
 *     SmStoreCompressionStop @ 0x14068999C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140689A80 (SmStoreCompressionStart.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406A13E4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1406FB13C (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x1406FB6E4 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x140929AE4 (SmProcessDeleteNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14032D0C0 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r15d
  __int64 v9; // r14
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdi
  struct _KTHREAD *v14; // rdi
  unsigned __int8 v15; // r12
  ULONG_PTR v16; // r8
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // r15
  unsigned int v24; // esi
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  char *v29; // r8
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r10
  __int64 v35; // r15
  _QWORD *v36; // r9
  __int64 v37; // rdx
  struct _PRIVILEGE_SET *v38; // rcx
  __int64 v39; // [rsp+40h] [rbp-20h]
  __int64 v40; // [rsp+48h] [rbp-18h]
  __int64 v41; // [rsp+58h] [rbp-8h]
  int v42; // [rsp+B0h] [rbp+50h] BYREF
  int v43; // [rsp+B8h] [rbp+58h]

  v43 = a4;
  v42 = 0;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  }
  SessionId = -1;
  if ( !a3 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *a2 )
      goto LABEL_17;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v9 = 0LL;
      goto LABEL_17;
    }
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  v11 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v12 = v11 & *a2;
  if ( !v10 )
    goto LABEL_15;
  v9 = *(_QWORD *)(BugCheckParameter2 + 16)
     + 8LL
     * ((37
       * (BYTE6(v12)
        + 37
        * (BYTE5(v12)
         + 37
         * (BYTE4(v12)
          + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
       + HIBYTE(v12)) & (unsigned int)(v10 - 1));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v12 == (v11 & *(_QWORD *)(v9 + 8)) )
      goto LABEL_14;
  }
  v9 = 0LL;
LABEL_14:
  if ( v9 )
  {
    if ( a3 == 2 )
    {
      v41 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v41)
                            + 37
                            * (BYTE5(v41)
                             + 37
                             * (BYTE4(v41)
                              + 37
                              * (BYTE3(v41)
                               + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                           + HIBYTE(v41)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v9 )
        {
          *i = *(_QWORD *)v9;
          --*(_DWORD *)(BugCheckParameter2 + 8);
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          break;
        }
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 24) = v9;
    }
  }
  else
  {
LABEL_15:
    if ( a3 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = *a2;
      v9 = 0LL;
      goto LABEL_17;
    }
    v23 = BugCheckParameter2 + 8;
    v42 = 1414032755;
    v24 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v25 = 2 * (v24 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v25 )
    {
      v28 = v25;
      if ( v25 < 4 )
        v28 = 4LL;
      v29 = (char *)SmAllocWrapper(8LL * (unsigned int)v28, &v42);
      if ( v29 )
      {
        if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
        {
          for ( j = -1; (_DWORD)v28; LODWORD(v28) = (unsigned int)v28 >> 1 )
            ++j;
          v28 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v28 > 0x4000000 )
          v28 = 0x4000000LL;
        v32 = (unsigned int)v28;
        if ( v29 > &v29[8 * v28] )
          v32 = 0LL;
        if ( v32 )
          memset64(v29, v23 | 1, v32);
        v33 = 0;
        v34 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v35 = *(_QWORD *)(v23 + 8);
            while ( 1 )
            {
              v36 = *(_QWORD **)(v35 + 8LL * v33);
              if ( ((unsigned __int8)v36 & 1) != 0 )
                break;
              *(_QWORD *)(v35 + 8LL * v33) = *v36;
              v39 = v34 & v36[1];
              v37 = (37
                   * (BYTE6(v39)
                    + 37
                    * (BYTE5(v39)
                     + 37
                     * (BYTE4(v39)
                      + 37
                      * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                   + HIBYTE(v39)) & (unsigned int)(v28 - 1);
              *v36 = *(_QWORD *)&v29[8 * v37];
              *(_QWORD *)&v29[8 * v37] = v36;
            }
            v23 = BugCheckParameter2 + 8;
            ++v33;
          }
          while ( v33 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v38 = *(struct _PRIVILEGE_SET **)(v23 + 8);
        v24 = *(_DWORD *)(v23 + 4) & 0x1F | (32 * v28);
        *(_QWORD *)(v23 + 8) = v29;
        *(_DWORD *)(v23 + 4) = v24;
        if ( v38 )
        {
          CmSiFreeMemory(v38);
          v24 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v24 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v24 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v40 = *a2 & (-1LL << (v24 & 0x1F));
    v26 = *(_QWORD *)(v23 + 8);
    v27 = (37
         * (BYTE6(v40)
          + 37
          * (BYTE5(v40)
           + 37
           * (BYTE4(v40)
            + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
         + HIBYTE(v40)) & ((v24 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v9;
    ++*(_DWORD *)v23;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v43 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v14 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v14->ApcState.Process);
      --v14->SpecialApcDisable;
      v15 = ++v14->AbAllocationRegionCount;
      v16 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v17) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        if ( v18 )
          break;
        v20 = (__int64)&v14->LockEntries[v19];
        v17 = ~(1 << v19) & (unsigned int)v17;
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v16
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree(v20, v17, v16);
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (signed __int64)(v20 - (unsigned __int64)v14->LockEntries) / 96;
              if ( v15 == 1 )
                v14->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v21);
              goto LABEL_45;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v14, BugCheckParameter2, SessionId, 0LL);
LABEL_45:
      --v14->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v14);
      v18 = v14->SpecialApcDisable++ == -1;
      if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v22);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v9;
}
