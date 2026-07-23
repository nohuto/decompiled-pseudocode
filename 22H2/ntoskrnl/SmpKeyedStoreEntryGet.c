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
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  ULONG_PTR v22; // r15
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  char *v28; // r8
  _QWORD *i; // rdx
  char j; // cl
  unsigned __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // r10
  __int64 v34; // r15
  _QWORD *v35; // r9
  __int64 v36; // rdx
  struct _PRIVILEGE_SET *v37; // rcx
  __int64 v38; // [rsp+40h] [rbp-20h]
  __int64 v39; // [rsp+48h] [rbp-18h]
  __int64 v40; // [rsp+58h] [rbp-8h]
  int v41; // [rsp+B0h] [rbp+50h] BYREF
  int v42; // [rsp+B8h] [rbp+58h]

  v42 = a4;
  v41 = 0;
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
      v40 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v40)
                            + 37
                            * (BYTE5(v40)
                             + 37
                             * (BYTE4(v40)
                              + 37
                              * (BYTE3(v40)
                               + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                           + HIBYTE(v40)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
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
    v22 = BugCheckParameter2 + 8;
    v41 = 1414032755;
    v23 = *(_DWORD *)(BugCheckParameter2 + 12);
    v9 = (__int64)(a2 - 1);
    v24 = 2 * (v23 >> 5);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= v24 )
    {
      v27 = v24;
      if ( v24 < 4 )
        v27 = 4LL;
      v28 = (char *)SmAllocWrapper(8LL * (unsigned int)v27, &v41);
      if ( v28 )
      {
        if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
        {
          for ( j = -1; (_DWORD)v27; LODWORD(v27) = (unsigned int)v27 >> 1 )
            ++j;
          v27 = (unsigned int)(1 << j);
        }
        if ( (unsigned int)v27 > 0x4000000 )
          v27 = 0x4000000LL;
        v31 = (unsigned int)v27;
        if ( v28 > &v28[8 * v27] )
          v31 = 0LL;
        if ( v31 )
          memset64(v28, v22 | 1, v31);
        v32 = 0;
        v33 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = *(_QWORD *)(v22 + 8);
            while ( 1 )
            {
              v35 = *(_QWORD **)(v34 + 8LL * v32);
              if ( ((unsigned __int8)v35 & 1) != 0 )
                break;
              *(_QWORD *)(v34 + 8LL * v32) = *v35;
              v38 = v33 & v35[1];
              v36 = (37
                   * (BYTE6(v38)
                    + 37
                    * (BYTE5(v38)
                     + 37
                     * (BYTE4(v38)
                      + 37
                      * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
                   + HIBYTE(v38)) & (unsigned int)(v27 - 1);
              *v35 = *(_QWORD *)&v28[8 * v36];
              *(_QWORD *)&v28[8 * v36] = v35;
            }
            v22 = BugCheckParameter2 + 8;
            ++v32;
          }
          while ( v32 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v37 = *(struct _PRIVILEGE_SET **)(v22 + 8);
        v23 = *(_DWORD *)(v22 + 4) & 0x1F | (32 * v27);
        *(_QWORD *)(v22 + 8) = v28;
        *(_DWORD *)(v22 + 4) = v23;
        if ( v37 )
        {
          CmSiFreeMemory(v37);
          v23 = *(_DWORD *)(BugCheckParameter2 + 12);
        }
      }
      else
      {
        v23 = *(_DWORD *)(BugCheckParameter2 + 12);
        if ( v23 < 0x20 )
        {
          v9 = 0LL;
          SessionId = -1;
          goto LABEL_17;
        }
      }
    }
    v39 = *a2 & (-1LL << (v23 & 0x1F));
    v25 = *(_QWORD *)(v22 + 8);
    v26 = (37
         * (BYTE6(v39)
          + 37
          * (BYTE5(v39)
           + 37
           * (BYTE4(v39)
            + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
         + HIBYTE(v39)) & ((v23 >> 5) - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v9;
    ++*(_DWORD *)v22;
    SessionId = -1;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_17:
  if ( !v42 )
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
      v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        if ( v17 )
          break;
        v19 = (__int64)&v14->LockEntries[v18];
        v16 &= ~(1 << v18);
        if ( (*(_BYTE *)(v19 + 26) & 1) != 0
          && (*(_DWORD *)(v19 + 32) & 1) == 0
          && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v19 + 40) == SessionId )
        {
          *(_BYTE *)(v19 + 26) &= ~1u;
          if ( *(_QWORD *)(v19 + 32) )
          {
            if ( v19 )
            {
              *(_BYTE *)(v19 + 32) |= 2u;
              if ( *(__int64 *)(v19 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
              *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v19 + 25) &= ~1u;
              *(_QWORD *)(v19 + 32) = 0LL;
              v20 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
              if ( v15 == 1 )
                v14->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v20);
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
      v17 = v14->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v21);
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
