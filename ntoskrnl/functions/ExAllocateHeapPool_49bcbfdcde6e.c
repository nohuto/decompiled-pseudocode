__int64 __fastcall ExAllocateHeapPool(unsigned int PoolType, unsigned __int64 a2, int a3, unsigned int a4, __int16 a5)
{
  struct _SLIST_ENTRY *v5; // r11
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int32 v10; // r8d
  __int64 v11; // r10
  int v12; // r15d
  POOL_TYPE v13; // r14d
  __int16 v14; // r9
  unsigned int v15; // r13d
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  unsigned __int64 v26; // rsi
  unsigned int v27; // r9d
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  __int64 v32; // rdi
  int v33; // r9d
  unsigned int v34; // r8d
  int v35; // r12d
  __int64 v36; // rax
  unsigned int v37; // r12d
  int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // esi
  unsigned int v41; // r10d
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // r13
  ULONG_PTR v45; // rdi
  __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned __int16 *v50; // rsi
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rdi
  unsigned __int64 Heap; // rax
  int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // r11
  __int64 v59; // r9
  int v60; // edx
  unsigned int v61; // ebx
  unsigned int v62; // r8d
  __int64 v63; // rsi
  int v64; // eax
  __int64 v65; // r12
  BOOL updated; // eax
  __int64 v67; // rcx
  unsigned int v68; // r8d
  unsigned int v69; // eax
  unsigned int v70; // r8d
  int v71; // eax
  struct _SLIST_ENTRY *v72; // rdx
  ULONG v73; // eax
  int v74; // r11d
  __int64 v75; // rcx
  _QWORD *v76; // rax
  unsigned __int64 v77; // rbx
  int v78; // r10d
  __int64 v79; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v82; // r8
  __int64 HeapSpecialPool; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v87; // eax
  bool v88; // zf
  __int64 v89; // r9
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  int v97; // [rsp+40h] [rbp-81h]
  unsigned int v98; // [rsp+40h] [rbp-81h]
  __int64 *v99; // [rsp+48h] [rbp-79h]
  __int64 v100; // [rsp+48h] [rbp-79h]
  __int64 v101; // [rsp+48h] [rbp-79h]
  ULONG_PTR v102; // [rsp+50h] [rbp-71h]
  int v103; // [rsp+58h] [rbp-69h] BYREF
  struct _SLIST_ENTRY **p_Next; // [rsp+60h] [rbp-61h] BYREF
  struct _SLIST_ENTRY *v105; // [rsp+68h] [rbp-59h] BYREF
  __int64 v106; // [rsp+70h] [rbp-51h]
  __int64 v107; // [rsp+78h] [rbp-49h]
  __int64 v108; // [rsp+80h] [rbp-41h]
  PSLIST_ENTRY ListEnd; // [rsp+88h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v110; // [rsp+90h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v112; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v113; // [rsp+D0h] [rbp+Fh]
  __int64 retaddr; // [rsp+118h] [rbp+57h]
  unsigned int v115; // [rsp+120h] [rbp+5Fh]
  unsigned int v116; // [rsp+130h] [rbp+6Fh]

  v5 = 0LL;
  v6 = a4;
  v7 = (PoolType >> 9) & 2;
  v9 = a2;
  v10 = PoolType;
  v11 = 0LL;
  if ( (PoolType & 0x44) == 0x44 )
    v10 = PoolType & 0xFFFFFFFB;
  v12 = 1;
  v13 = v10 | 0x200;
  if ( (v10 & 0x201) != 0 || (ExpPoolFlags & 0x400) == 0 )
    v13 = v10;
  if ( (ExpPoolFlags & 8) == 0 )
    goto LABEL_6;
  if ( (v13 & 0x80000080) == 0 )
    return VfHandlePoolAlloc(v13, HighPoolPriority, 0LL, 0, retaddr);
  v13 &= ~0x80u;
  if ( v13 < NonPagedPool )
  {
    v14 = a5;
    if ( (MmVerifierData & 1) != 0 )
      v14 = 1;
  }
  else
  {
LABEL_6:
    v14 = a5;
  }
  v15 = a3 & 0x7FFFFFFF;
  v116 = v15;
  if ( !v15 )
  {
    v15 = 811884866;
    v116 = 811884866;
  }
  if ( a2 <= 0xFE0
    && (MmSpecialPoolTag
     && a2
     && ((unsigned int)ExCheckSingleFilter(v15, (unsigned int)MmSpecialPoolTag) || v82 >= v9 + 16 && v82 < v9 + 32)
     || (v14 & 1) != 0) )
  {
    HeapSpecialPool = ExAllocateHeapSpecialPool((unsigned int)v13, v9, v15);
    v11 = HeapSpecialPool;
    if ( HeapSpecialPool )
    {
      _InterlockedIncrement(&ExpSpecialAllocations);
      return HeapSpecialPool;
    }
    v5 = 0LL;
  }
  if ( !v9 )
    v9 = 1LL;
  if ( (_DWORD)v6 == 0x80000000 )
    goto LABEL_156;
  if ( (unsigned int)v6 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v6, (int)v13 & 0xFFFFFFFFFFFFFF7FuLL, v15);
  if ( (_DWORD)v6 == 0x80000000 )
LABEL_156:
    LODWORD(v6) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (unsigned int)v6 >= dword_140C74660 )
    LODWORD(v6) = (_DWORD)v5;
  v16 = &qword_140C74680[1048 * (unsigned int)v6];
  if ( v13 < NonPagedPool )
  {
    v18 = v16[3];
  }
  else
  {
    if ( (v13 & 1) != 0 )
    {
      v17 = 2LL;
    }
    else
    {
      v17 = (__int64)v5;
      if ( (v13 & 0x200) != 0 )
        v17 = 1LL;
    }
    v18 = v16[v17];
  }
  if ( v9 > 0xFE0 )
  {
    v54 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v54 >= 0x10000 || (((_WORD)v9 + 15) & 0xFF0u) > 0xFC0 )
      v54 = (v54 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v54 < v9 )
    {
LABEL_190:
      v45 = (ULONG_PTR)v5;
      if ( !v11 )
        goto LABEL_192;
LABEL_191:
      RtlpHpFreeHeap(v18, v11, 0, 0, (__int64)v5);
      goto LABEL_192;
    }
    if ( (v54 & 0xFFF) != 0 || v54 > *(unsigned int *)(v18 + 528) )
    {
      Heap = RtlpHpAllocateHeap(v18, v54, v7, v14);
    }
    else
    {
      v67 = v18 + 320;
      if ( v54 > *(unsigned int *)(v18 + 336) )
        v67 = v18 + 512;
      Heap = RtlpHpSegAlloc(v67, v54, v54, v54, ((unsigned int)v13 >> 9) & 2);
    }
    v56 = Heap;
    v102 = Heap;
    if ( !Heap )
    {
      v45 = 0LL;
      goto LABEL_192;
    }
    if ( !(unsigned int)ExpAddTagForBigPages(Heap, v15, v54, v13, 0, 0) )
    {
      LODWORD(v11) = v102;
      v5 = 0LL;
      v45 = 0LL;
      goto LABEL_191;
    }
    memset(&v110, 0, sizeof(v110));
    if ( v15 == PoolHitTag )
      __debugbreak();
    v57 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v57 = EtwTracePool(3616, v13, v15, v56, v54);
    LODWORD(v57) = KeGetPcr()->Prcb.Number;
    v58 = PoolTrackTableSize;
    v101 = PoolTrackTableSize;
    v59 = (__int64)*(&ExPoolTagTables + v57);
    v60 = PoolTrackTableMask;
    v108 = v59;
    v107 = PoolTrackTableMask;
    v61 = PoolTrackTableMask & ((40543 * v15) ^ ((40543 * (unsigned __int64)v15) >> 32));
    v62 = v61;
    v98 = v61;
    while ( 1 )
    {
      v63 = 80LL * v61;
      v64 = *(_DWORD *)(v63 + v59);
      v65 = v63 + v59;
      if ( v64 == v15 )
      {
        v12 = ExpPoolTrackerChargeEntry((v13 & 1) == 0, v54, v63 + v59);
        goto LABEL_102;
      }
      if ( v64 )
      {
LABEL_99:
        v61 = v60 & (v61 + 1);
        if ( v61 == v62 )
        {
          ExpInsertPoolTrackerExpansion(v15, v54, v13 & 0xFFFFFFDF);
LABEL_102:
          v45 = v102;
          goto LABEL_61;
        }
      }
      else
      {
        v78 = *(_DWORD *)(v63 + PoolTrackTable);
        if ( v78 )
        {
          *(_DWORD *)v65 = v78;
          v79 = *(_QWORD *)(v63 + PoolTrackTable + 72);
          if ( v79 )
            *(_QWORD *)(v65 + 72) = v79;
        }
        else
        {
          if ( v61 == v58 - 1 )
            goto LABEL_99;
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v110);
          v106 = v63 + PoolTrackTable;
          if ( !*(_DWORD *)(v63 + PoolTrackTable) )
          {
            LimitEntry = ExpPlFindLimitEntry(v15);
            *(_QWORD *)(v106 + 72) = LimitEntry;
            *(_QWORD *)(v65 + 72) = LimitEntry;
            *(_DWORD *)(v63 + PoolTrackTable) = v15;
            *(_DWORD *)v65 = v15;
          }
          KxReleaseQueuedSpinLock(&v110);
          OldIrql = v110.OldIrql;
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v110.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v87 = ~(unsigned __int16)(-1LL << (v110.OldIrql + 1));
              v88 = (v87 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v87;
              if ( v88 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
          v60 = v107;
          v62 = v98;
          v59 = v108;
          v58 = v101;
        }
      }
    }
  }
  v19 = v9 + 16;
  if ( (v13 & 4) != 0 )
  {
    v19 += *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 1);
    if ( v19 > 0xFE0 )
    {
      v19 = v9 + 16;
      LOWORD(v13) = v13 & 0xFFFB;
    }
  }
  v20 = (v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v20 >= 0x201 && v20 <= 0xF80 )
  {
    v47 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)v20 >> 4));
    v20 = (unsigned __int16)RtlpBucketBlockSizes[v47];
    v48 = v47 - 33;
    v49 = *(_QWORD *)(v18 + 40);
    if ( v49 )
    {
      v50 = (unsigned __int16 *)(v49 + ((v48 + 1LL) << 6));
      ++*((_DWORD *)v50 + 5);
      if ( *v50 )
      {
        v32 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v49 + ((v48 + 1LL) << 6)));
        if ( v32 )
          goto LABEL_74;
        v5 = 0LL;
      }
      ++*((_DWORD *)v50 + 6);
      v68 = v50[8];
      v69 = *v50;
      p_Next = &v5->Next;
      ListEnd = v5;
      if ( v69 < v68 && (v70 = (v68 - v69) >> 1) != 0 )
      {
        v71 = RtlpHpVsContextMultiAlloc(v18 + 704, v20, v70 + 1, 0, &p_Next, &ListEnd);
        if ( v71 )
        {
          v32 = (__int64)p_Next;
          v72 = *p_Next;
          p_Next = (struct _SLIST_ENTRY **)*p_Next;
          v73 = v71 - 1;
          if ( v73 )
            InterlockedPushListSList((PSLIST_HEADER)v50, v72, ListEnd, v73);
        }
        else
        {
          v32 = 0LL;
        }
      }
      else
      {
        v32 = (__int64)v5;
      }
LABEL_74:
      if ( (v13 & 0x400) != 0 )
      {
        if ( !v32 )
        {
LABEL_118:
          v5 = 0LL;
          goto LABEL_26;
        }
        RtlHeapZero(v32 + 16, v20 - 16);
      }
      if ( v32 )
        goto LABEL_50;
      goto LABEL_118;
    }
  }
LABEL_26:
  v21 = *(_QWORD *)(v18 + 48);
  v22 = (*(_DWORD *)(v18 + 20) | v7) & 0x93000F0B;
  v23 = v21;
  if ( (v21 || (v23 = qword_140C6AF68) != 0) && v20 > v23 )
  {
    v89 = *(_QWORD *)(v18 + 56);
    if ( !v89 )
    {
LABEL_136:
      v11 = 0LL;
      goto LABEL_190;
    }
    RtlpLogHeapFailure(20, v18, 0, v89, v20, v21);
    goto LABEL_169;
  }
  v97 = (int)v5;
  v24 = (__int64)v5;
  v105 = v5;
  if ( (v22 & 0x1000000) == 0 )
  {
    v25 = *(_DWORD *)(v18 + 24);
    v97 = v25;
    if ( v25 )
    {
      v22 |= 8u;
      if ( (_WORD)v25 != 1 )
        goto LABEL_136;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, struct _SLIST_ENTRY **))CLFS_LSN_NULL_EXT)(
                  v18,
                  0LL,
                  1LL,
                  &v105) < 0 )
        goto LABEL_169;
      v24 = (__int64)v105;
      v5 = 0LL;
    }
  }
  v26 = v24 + v20;
  if ( (v22 & 0x10000000) != 0 )
    v26 += 16LL;
  if ( (v22 & 0x20000F08) != 0 )
    v26 = ((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v26 )
    v26 = 1LL;
  if ( v26 < v20 || v20 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_136;
  v27 = v22 & 0x13000003;
  if ( v26 > (unsigned int)*(unsigned __int16 *)(v18 + 956) - 16 )
    goto LABEL_105;
  v28 = v26;
  if ( (_DWORD)v20 != (_DWORD)v26 )
    v28 = v26 + 2;
  v99 = (__int64 *)(v18
                  + 896
                  + 8 * (*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v28 + 15) >> 4)) + 16LL));
  if ( (*v99 & 1) != 0 )
  {
    updated = RtlpHpLfhBucketUpdateStats(v18 + 896, v28, 1);
    v27 = v22 & 0x13000003;
    if ( !updated )
    {
      LODWORD(v5) = 0;
LABEL_105:
      v34 = v26;
      goto LABEL_106;
    }
  }
  v29 = 128LL;
  v30 = *v99;
  if ( (RtlpHpLfhPerfFlags & 0x400) != 0 )
    v29 = 192LL;
  if ( *(_BYTE *)(v30 + 2) == 1 )
    v31 = 0;
  else
    v31 = *(_BYTE *)(BYTE5(KeGetCurrentThread()[1].Spare18) + v30 + v29);
  v32 = RtlpHpLfhSlotAllocate(
          (int)v18 + 896,
          v30,
          *(_QWORD *)(v29
                    + *(unsigned __int8 *)(v18 + 952)
                    - (unsigned __int64)((*(_BYTE *)(v18 + 952) - 1) & 7)
                    + 7
                    + v30
                    + 8LL * v31),
          v20,
          v27);
  v34 = v26;
  if ( v32 == -1 )
  {
    v27 = v22 & 0x13000003;
    LODWORD(v5) = 0;
LABEL_106:
    if ( v26 > 0x20000 )
    {
      if ( v26 > *(unsigned int *)(v18 + 528) )
      {
        v91 = RtlpHpLargeAlloc(v18, v20, v26, v27);
      }
      else
      {
        v90 = v18 + 320;
        if ( v26 > *(unsigned int *)(v18 + 336) )
          v90 = v18 + 512;
        v91 = RtlpHpSegAlloc(v90, v20, v26, v26, v27);
      }
      v32 = v91;
    }
    else
    {
      v103 = (int)v5;
      v113 = 0LL;
      v112 = 0LL;
      v32 = (__int64)RtlpHpVsContextAllocateInternal(v18 + 704, v20, v34, v27, (__int64)&v112, &v103);
      if ( v103 && (v22 & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v18 + 712), (__int64)&v112);
    }
  }
  if ( v32 )
  {
    if ( (v22 & 0x30000F08) != 0 )
    {
      v92 = RtlpHpExtrasAppend(v18, v32, v20, v33, (__int64)v105, v22, 0);
      if ( v97 )
      {
        *(_BYTE *)(v92 + 2) ^= (*(_BYTE *)(v92 + 2) ^ v97) & 0xF;
        if ( (_WORD)v97 != 1
          || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                    v18,
                    v32,
                    2LL,
                    v92 + 16) < 0 )
        {
          RtlpHpFreeHeap(v18, v32, v22, 0, 0LL);
          goto LABEL_169;
        }
      }
    }
  }
  if ( !v32 )
  {
LABEL_169:
    v5 = 0LL;
    goto LABEL_136;
  }
LABEL_50:
  *(_DWORD *)(v32 + 4) = v15;
  *(_BYTE *)(v32 + 2) = v20 >> 4;
  *(_BYTE *)v32 = 0;
  v35 = v13 & 0x6D | 2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_BYTE *)(v32 + 3) = v35;
  LockHandle.LockQueue = 0LL;
  if ( v15 == PoolHitTag )
    __debugbreak();
  v36 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v36 = EtwTracePool(3616, v13 & 0x6D | 2u, v15, (int)v32 + 16, v20);
  LODWORD(v36) = KeGetPcr()->Prcb.Number;
  v37 = v35 & 0xFFFFFFDF;
  v38 = PoolTrackTableMask;
  v106 = PoolTrackTableMask;
  v39 = (__int64)*(&ExPoolTagTables + v36);
  v100 = PoolTrackTableSize;
  v107 = v39;
  v40 = PoolTrackTableMask & ((40543 * v15) ^ ((40543 * (unsigned __int64)v15) >> 32));
  v41 = v40;
  v115 = v40;
  do
  {
    while ( 1 )
    {
      v42 = 80LL * v40;
      v43 = *(_DWORD *)(v39 + v42);
      v44 = v39 + v42;
      if ( v43 == v116 )
      {
        v12 = ExpPoolTrackerChargeEntry((v37 & 1) == 0, v20, v39 + v42);
        goto LABEL_57;
      }
      if ( v43 )
        break;
      v74 = *(_DWORD *)(v42 + PoolTrackTable);
      if ( v74 )
      {
        *(_DWORD *)v44 = v74;
        v75 = *(_QWORD *)(v42 + PoolTrackTable + 72);
        if ( v75 )
          *(_QWORD *)(v44 + 72) = v75;
      }
      else
      {
        if ( v40 == v100 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v108 = v42 + PoolTrackTable;
        if ( !*(_DWORD *)(v42 + PoolTrackTable) )
        {
          v76 = ExpPlFindLimitEntry(v116);
          *(_QWORD *)(v108 + 72) = v76;
          *(_QWORD *)(v44 + 72) = v76;
          *(_DWORD *)(v42 + PoolTrackTable) = v116;
          *(_DWORD *)v44 = v116;
        }
        KxReleaseQueuedSpinLock(&LockHandle);
        v77 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v93 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v93 <= 0xFu && LockHandle.OldIrql <= 0xFu && v93 >= 2u )
          {
            v94 = KeGetCurrentPrcb();
            v95 = v94->SchedulerAssist;
            v96 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v88 = (v96 & v95[5]) == 0;
            v95[5] &= v96;
            if ( v88 )
              KiRemoveSystemWorkPriorityKick(v94);
          }
        }
        __writecr8(v77);
        v39 = v107;
        v38 = v106;
        v41 = v115;
      }
    }
    v40 = v38 & (v40 + 1);
  }
  while ( v40 != v41 );
  ExpInsertPoolTrackerExpansion(v116, v20, v37);
  v12 = 1;
LABEL_57:
  if ( (v13 & 4) != 0 )
  {
    *(_BYTE *)(v32 + 3) &= ~4u;
    v51 = (*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) - 1) & (-16 - v32);
    if ( v51 )
    {
      v52 = v32 + v51;
      v53 = (__int64)v51 >> 4;
      *(_BYTE *)v52 = v53;
      *(_BYTE *)(v52 + 2) = *(_BYTE *)(v32 + 2) - v53;
      *(_BYTE *)(v52 + 1) = *(_BYTE *)(v32 + 1);
      *(_BYTE *)(v52 + 3) = *(_BYTE *)(v32 + 3) | 4;
      *(_DWORD *)(v52 + 4) = *(_DWORD *)(v32 + 4);
      if ( (unsigned __int8)*(_WORD *)v52 > 1u )
        *(_QWORD *)(v32 + 16) = ExpPoolQuotaCookie ^ v52;
      v32 = v52;
    }
  }
  if ( (*(_BYTE *)(v32 + 3) & 8) != 0 )
    *(_QWORD *)(v32 + 8) = ExpPoolQuotaCookie ^ v32;
  v45 = v32 + 16;
LABEL_61:
  if ( v12 )
  {
    if ( v45 )
      return v45;
  }
  else
  {
    ExFreeHeapPool(v45);
    v45 = 0LL;
  }
LABEL_192:
  if ( (v13 & 0x10) != 0 )
    RtlRaiseStatus(-1073741670);
  return v45;
}
