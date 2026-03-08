/*
 * XREFs of MiZeroPage @ 0x140275060
 * Callers:
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1402D99E0 (KiAbThreadRemoveBoostsSlow.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiLargePageFreeToZero @ 0x1403341E0 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     MiSetZeroPageThreadPriority @ 0x140357538 (MiSetZeroPageThreadPriority.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiFreeUltraMapping @ 0x1403C0688 (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugeRangeFreeToZero @ 0x14061E83C (MiHugeRangeFreeToZero.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 *     MiFreeListPageContentsChanged @ 0x14064B138 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14064B2AC (MiFreeZeroPageSlistSufficient.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 *     MiZeroPageMakeHot @ 0x140653630 (MiZeroPageMakeHot.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroPage(_BYTE *a1, _QWORD *a2)
{
  _QWORD *v3; // r12
  __int64 v4; // r8
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned int *v7; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rdi
  unsigned __int8 CurrentIrql; // r15
  _BYTE *v16; // r15
  char v17; // al
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r15
  unsigned __int64 i; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r15d
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // r14
  int v32; // ecx
  __int64 v33; // r8
  ULONG_PTR v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  ULONG_PTR v37; // r14
  __int64 v38; // r15
  _DWORD *v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 OldIrql; // rbx
  int v44; // eax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdi
  struct _KTHREAD *v50; // r9
  unsigned int AbEntrySummary; // eax
  __int64 v52; // rcx
  unsigned int v53; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  int SessionId; // eax
  volatile LONG *v59; // rbx
  __int64 *v60; // r14
  int v61; // ebx
  int v62; // r14d
  unsigned int v63; // r14d
  _QWORD *v64; // rax
  _QWORD *v65; // r15
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  bool v70; // zf
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  struct _KTHREAD *v79; // rcx
  char v80; // [rsp+48h] [rbp-1E8h]
  __int64 v81; // [rsp+50h] [rbp-1E0h]
  int v82; // [rsp+58h] [rbp-1D8h]
  BOOL v83; // [rsp+5Ch] [rbp-1D4h]
  int v84; // [rsp+60h] [rbp-1D0h]
  unsigned __int64 v85; // [rsp+60h] [rbp-1D0h]
  __int64 v86; // [rsp+68h] [rbp-1C8h]
  __int64 v87; // [rsp+68h] [rbp-1C8h]
  unsigned int v88; // [rsp+70h] [rbp-1C0h]
  int v89; // [rsp+74h] [rbp-1BCh]
  unsigned int v90; // [rsp+78h] [rbp-1B8h]
  _BYTE *v91; // [rsp+80h] [rbp-1B0h]
  unsigned __int8 v92; // [rsp+88h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1A0h]
  int v95; // [rsp+A0h] [rbp-190h]
  struct _KTHREAD *v96; // [rsp+A0h] [rbp-190h]
  PVOID P; // [rsp+A8h] [rbp-188h]
  unsigned int v98; // [rsp+B0h] [rbp-180h]
  int v99; // [rsp+B4h] [rbp-17Ch]
  unsigned int v100; // [rsp+B8h] [rbp-178h]
  __int64 v101; // [rsp+C0h] [rbp-170h]
  __int64 v102; // [rsp+C8h] [rbp-168h]
  unsigned __int64 v103; // [rsp+D0h] [rbp-160h]
  __int64 v104; // [rsp+D8h] [rbp-158h]
  __int64 v105; // [rsp+E0h] [rbp-150h]
  int v106[3]; // [rsp+ECh] [rbp-144h] BYREF
  _QWORD *v107; // [rsp+F8h] [rbp-138h]
  __int64 v108; // [rsp+108h] [rbp-128h]
  struct _KTHREAD *v109; // [rsp+110h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp-118h] BYREF
  _QWORD v111[24]; // [rsp+138h] [rbp-F8h] BYREF

  v3 = a1;
  v107 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v81 = 0LL;
  v5 = *((_QWORD *)a1 + 25);
  v102 = v5;
  v91 = a1;
  v6 = *((_QWORD *)a1 + 5);
  v7 = (unsigned int *)(a1 + 64);
  v8 = *((unsigned int *)a1 + 16);
  v88 = v8;
  v9 = (unsigned int)v8;
  v101 = (unsigned int)v8;
  if ( (unsigned int)v8 < 3 )
  {
    v10 = MiLargePageSizes[v8];
    if ( !(_DWORD)v8 )
    {
      v4 = *((_QWORD *)a1 + 43);
      v81 = v4;
      v6 = *(_QWORD *)(v4 + 312) + ((unsigned __int64)*((unsigned __int16 *)a1 + 168) << 21);
      a1 = (_BYTE *)v4;
      v91 = (_BYTE *)v4;
      v10 = 512LL;
    }
    if ( (HvlEnlightenments & 0x200000) != 0 && a1[72] )
    {
      MiZeroPageMakeHot(v5, (unsigned int)v8, v3, a2);
      a1 = v91;
      v9 = v101;
      v4 = v81;
    }
    ++dword_140C12FD0[v9];
  }
  else
  {
    v10 = 1LL;
    ++dword_140C12FDC;
    v101 = (unsigned int)v8;
  }
  v11 = v4;
  if ( a1 == (_BYTE *)v3 )
    ++dword_140C13000[v9];
  v100 = MiZeroEngineMemory(v3[11], 1LL, v6, v10 << 12);
  v82 = 1;
  v12 = 1;
  v99 = 1;
  v84 = 0;
  v83 = 0;
  v89 = 0;
  BugCheckParameter2 = 0LL;
  v90 = 0;
  CurrentThread = KeGetCurrentThread();
  v109 = CurrentThread;
  if ( (HvlEnlightenments & 0x8400000) != 0
    && (v88 <= 1 || (HvlEnlightenments & 0x8000000) == 0)
    && !CurrentThread->Priority
    && !v91[68]
    && !v91[71]
    && !v91[70] )
  {
    v89 = 1;
    v90 = MiSetZeroPageThreadPriority(v3, 1LL);
    --CurrentThread->SpecialApcDisable;
    v49 = (__int64)(a2 + 27);
    v108 = 0LL;
    v50 = KeGetCurrentThread();
    v96 = v50;
    v87 = 0LL;
    _disable();
    AbEntrySummary = v50->AbEntrySummary;
    if ( v50->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a2 + 27, v50), v50 = v96, AbEntrySummary) )
    {
      _BitScanForward(&v53, AbEntrySummary);
      v98 = v53;
      v50->AbEntrySummary = AbEntrySummary & ~(1 << v53);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v56 = *SchedulerAssist;
        do
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange(SchedulerAssist, v56 & 0xFFDFFFFF, v56);
        }
        while ( v57 != v56 );
        if ( (v56 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v50 = v96;
        }
      }
      _enable();
      v52 = (__int64)(&v50[1].Process + 12 * v98);
      v87 = v52;
      if ( (unsigned __int64)(v49 - qword_140C65668) >= 0x8000000000LL )
      {
        SessionId = -1;
      }
      else
      {
        SessionId = MmGetSessionIdEx(v50->ApcState.Process);
        v52 = v87;
        v50 = v96;
      }
      *(_DWORD *)(v52 + 8) = SessionId;
      *(_QWORD *)v52 = v49 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      v52 = 0LL;
    }
    if ( (_DWORD)v108 )
    {
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v50);
      v52 = v87;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v49, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)v49, 0, v52, v49);
      v52 = v87;
    }
    if ( v52 )
      *(_BYTE *)(v52 + 18) = 1;
  }
  v86 = 0LL;
  v14 = 0x3FFFFFLL;
  v104 = 0x3FFFFFLL;
  P = 0LL;
  if ( v81 )
  {
    v84 = 1;
    if ( *(_BYTE *)(v81 + 68) )
    {
      v14 = *(_QWORD *)(v11 + 176);
      v104 = v14;
      v86 = qword_140C67A70 + 8 * (v14 & 0x3FFFFF);
      v5 = 0LL;
    }
    else
    {
      v5 = 48LL * *(_QWORD *)(v11 + 176) - 0x220000000000LL;
    }
    v102 = v5;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2[2] + 25408LL * *(unsigned int *)(v81 + 320) + 23024), &LockHandle);
  }
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v92 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v40 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v41) = 4;
      else
        v41 = (-1LL << (CurrentIrql + 1)) & 4;
      v40[5] |= v41;
    }
    v106[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v106);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
  }
  else
  {
    v92 = MiLockHugePfn(v86);
  }
  v16 = v91;
  if ( v81 )
  {
    v82 = 0;
    v12 = 0;
    if ( !v91[70] )
    {
      if ( ++*(_DWORD *)(v81 + 328) != 512 )
      {
        v99 = 0;
        goto LABEL_11;
      }
      v12 = 1;
    }
    v82 = v12;
    v44 = *(_DWORD *)(v81 + 324);
    if ( v44 == 1 )
    {
      v45 = *(_QWORD *)(v81 + 80);
      v46 = *(_QWORD **)(v81 + 88);
      if ( *(_QWORD *)(v45 + 8) != v81 + 80 || *v46 != v81 + 80 )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v45 + 8) = v46;
      v12 = 1;
      P = (PVOID)v81;
    }
    else
    {
      *(_DWORD *)(v81 + 324) = v44 - 1;
      v82 = v12;
    }
  }
LABEL_11:
  v17 = v91[70];
  v80 = v17;
  if ( v12 )
  {
    if ( v84 )
    {
      v47 = v3[43];
      v48 = *(_QWORD *)(v47 + 312);
      *(_QWORD *)(v47 + 312) = 0LL;
      MiFreeUltraMapping(v48);
      MiDeleteUltraThreadContext(v47 + 184);
    }
    else
    {
      v18 = *v7;
      v95 = *v7;
      v19 = v3[4];
      v105 = v19;
      memset(v111, 0, 0xB8uLL);
      for ( i = v19; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      v21 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v103 = v21;
      if ( v18 <= 1 )
      {
        v42 = 2 - v18;
        do
        {
          v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v42;
        }
        while ( v42 );
        v103 = v21;
      }
      if ( (unsigned int)v18 <= 2 )
        v22 = MiPtesToSupportLargePageSizes[v18];
      else
        v22 = 1LL;
      v85 = v22;
      v23 = 0;
      if ( v22 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          v25 = ZeroPte;
          v26 = (unsigned __int64 *)(v21 + 8 * v24);
          if ( (unsigned int)MiPteInShadowRange(v26) )
          {
            if ( (unsigned int)MiPteHasShadow(v28, v27, v29) )
            {
              v30 = 1;
              if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                v25 = ZeroPte | 0x8000000000000000uLL;
              goto LABEL_23;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v30 = 0;
              if ( (ZeroPte & 1) != 0 )
                v25 = ZeroPte | 0x8000000000000000uLL;
              goto LABEL_23;
            }
          }
          v30 = 0;
LABEL_23:
          *v26 = v25;
          if ( v30 )
            MiWritePteShadow(v26, v25);
          v24 = ++v23;
          v21 = v103;
          if ( v23 >= v85 )
          {
            v14 = v104;
            v5 = v102;
            v3 = v107;
            LODWORD(v18) = v95;
            break;
          }
        }
      }
      if ( (!qword_140C68178 || i < qword_140C68178 || i >= qword_140C68178 + (qword_140C68188 << 30))
        && (unsigned int)v18 <= 1 )
      {
        LODWORD(v111[1]) = 20;
        v111[3] = 0LL;
        MiInsertLargeTbFlushEntry((__int64)v111, 2 - v18, v105);
        MiFlushTbList(v111);
      }
      v16 = v91;
    }
    v17 = v80;
  }
  v31 = v81;
  if ( v81 && v99 )
    v3[43] = 0LL;
  v32 = v82;
  if ( v82 || P )
  {
    if ( v16[73] )
    {
      v59 = &dword_140C66EE0;
      v60 = &qword_140C66EE8;
    }
    else
    {
      if ( !v16[68] )
      {
        v16[69] = 0;
        goto LABEL_37;
      }
      v59 = &dword_140C66EF0;
      v60 = &qword_140C66EF8;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(v59);
    RtlAvlRemoveNode(v60, v16);
    v16[69] = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel(v59);
    v31 = v81;
    v17 = v80;
    v32 = v82;
  }
LABEL_37:
  if ( v17 )
  {
    ++dword_140C12FF0[v101];
    ++dword_140C12FCC;
    goto LABEL_78;
  }
  ++dword_140C12FE0[v101];
  ++dword_140C12FC0;
  if ( !v32 )
  {
LABEL_78:
    v37 = 0LL;
    goto LABEL_48;
  }
  v33 = v5 + 0x220000000000LL;
  if ( v5 )
  {
    v34 = 0xAAAAAAAAAAAAAAABuLL * (v33 >> 4);
    BugCheckParameter2 = v34;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v88 == 3 )
  {
    ++dword_140C12FC4;
    v3[3] = 0LL;
    *(_BYTE *)(v5 + 34) &= ~8u;
    v35 = 128LL;
    v36 = qword_140C657C0;
    if ( qword_140C657C0 )
    {
      if ( (qword_140C657C0 & 0x80) != 0 )
        v35 = 144LL;
      else
        v35 = qword_140C657C0 | 0x80;
    }
    *(_QWORD *)(v5 + 16) = v35;
    if ( v16[71] )
    {
      v37 = BugCheckParameter2;
      MiFreeListPageContentsChanged(BugCheckParameter2, v36, v33, 0xAAAAAAAAAAAAAAABuLL);
      goto LABEL_48;
    }
    if ( !v89 )
      goto LABEL_47;
    v61 = *(unsigned __int8 *)(v5 + 34) >> 6;
    v62 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v33 >> 4)) + 8);
    v63 = ((unsigned int)MiGetPfnChannel(v5) << byte_140C6570E) | dword_140C65778 & BugCheckParameter2 | (v62 << byte_140C6570D);
    v64 = a2;
    v65 = (_QWORD *)(a2[312] + 88 * (v63 + (unsigned __int64)(unsigned int)(dword_140C6577C * v61)));
    if ( v61 == 1 )
    {
      if ( !(unsigned int)MiFreeZeroPageSlistSufficient(a2, v63, 0LL) )
      {
LABEL_47:
        v37 = BugCheckParameter2;
        MiUnlinkFreeOrZeroedPage(BugCheckParameter2);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
LABEL_48:
        v38 = v81;
        goto LABEL_49;
      }
      v64 = a2;
    }
    if ( *v65 >= (unsigned __int64)(unsigned int)(4 * *((_DWORD *)v64 + 4128)) )
      v83 = 1;
    goto LABEL_47;
  }
  if ( v89 )
    v83 = v16[71] == 0;
  if ( !v31 || !*(_BYTE *)(v31 + 68) )
  {
    MiLargePageFreeToZero(v34);
    v37 = BugCheckParameter2;
    goto LABEL_48;
  }
  v38 = v81;
  *(_BYTE *)(v81 + 70) = 1;
  *(_QWORD *)(v81 + 24) = 0LL;
  MiHugeRangeFreeToZero(a2, v14, v33, 0xAAAAAAAAAAAAAAABuLL);
  v37 = BugCheckParameter2;
LABEL_49:
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v66 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && v92 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)(-1LL << (v92 + 1));
        v70 = (v69 & v68[5]) == 0;
        v68[5] &= v69;
        if ( v70 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
    __writecr8(v92);
  }
  if ( v38 )
  {
    if ( *(_BYTE *)(v38 + 68) )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v86 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v86 - qword_140C67A70) >> 3) & 0x1F)));
      if ( KiIrqlFlags )
      {
        v71 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v71 <= 0xFu && v92 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v74 = ~(unsigned __int16)(-1LL << (v92 + 1));
          v70 = (v74 & v73[5]) == 0;
          v73[5] &= v74;
          if ( v70 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
      __writecr8(v92);
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v75 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && LockHandle.OldIrql <= 0xFu && v75 >= 2u )
      {
        v76 = KeGetCurrentPrcb();
        v77 = v76->SchedulerAssist;
        v78 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v70 = (v78 & v77[5]) == 0;
        v77[5] &= v78;
        if ( v70 )
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v83 )
    MiChangePageHeatImmediate(v37, v88, 0LL);
  if ( v89 )
  {
    if ( _InterlockedCompareExchange64(a2 + 27, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a2 + 27);
    KeAbPostRelease((ULONG_PTR)(a2 + 27));
    v79 = v109;
    v70 = v109->SpecialApcDisable++ == -1;
    if ( v70 && ($C71981A45BEB2B45F82C232A7085991E *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
      KiCheckForKernelApcDelivery();
    MiSetZeroPageThreadPriority(v3, v90);
  }
  return v100;
}
