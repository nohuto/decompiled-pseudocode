/*
 * XREFs of MiInsertLargePageInNodeList @ 0x14031C970
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiInsertLargePageChain @ 0x1402CADB0 (MiInsertLargePageChain.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     MiFinishLargePageFree @ 0x1403506BC (MiFinishLargePageFree.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MiEnableNewPfns @ 0x140618520 (MiEnableNewPfns.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064C4F4 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreeLargePageChain @ 0x14064CB6C (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x14064D244 (MiMoveLargeFreePage.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSearchChannelTable @ 0x14064319C (MiSearchChannelTable.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiAnyPagesRemovalPending @ 0x14064C4A4 (MiAnyPagesRemovalPending.c)
 *     MiWakeLargePageWaiters @ 0x14064DA54 (MiWakeLargePageWaiters.c)
 */

unsigned __int64 __fastcall MiInsertLargePageInNodeList(__int64 a1)
{
  int v1; // r8d
  ULONG_PTR v2; // rdi
  int v3; // eax
  int v4; // r12d
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  unsigned int v12; // edx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 i; // ecx
  unsigned int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rcx
  ULONG_PTR v19; // rdx
  __int64 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  volatile signed __int64 *v24; // rcx
  unsigned __int64 v25; // r11
  __int64 v26; // r8
  ULONG_PTR v27; // r9
  ULONG_PTR v28; // rdi
  ULONG_PTR v29; // r10
  int v30; // edi
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  struct _KEVENT *v33; // rbx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  int v36; // esi
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  struct _KEVENT *v39; // rdi
  int v40; // ebx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  _DWORD *v43; // rcx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r13
  KIRQL v46; // al
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v52; // eax
  bool v53; // zf
  unsigned __int64 v54; // rbx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  int v57; // eax
  _DWORD *v58; // r8
  unsigned __int64 v59; // rdi
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  int v62; // eax
  _DWORD *v63; // r8
  char v65; // [rsp+40h] [rbp-98h]
  unsigned int v66; // [rsp+44h] [rbp-94h]
  int v67; // [rsp+48h] [rbp-90h] BYREF
  __int64 v68; // [rsp+50h] [rbp-88h]
  unsigned __int64 v69; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-78h]
  __int64 v71; // [rsp+68h] [rbp-70h]
  unsigned __int64 v72; // [rsp+70h] [rbp-68h]
  __int64 v73; // [rsp+78h] [rbp-60h]
  unsigned __int64 v74; // [rsp+80h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-50h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v78; // [rsp+E8h] [rbp+10h]
  unsigned int v79; // [rsp+F0h] [rbp+18h]
  int v80; // [rsp+F8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 1;
  if ( v1 == 5 )
    v1 = 1;
  v69 = 0LL;
  v80 = v1;
  v65 = v3;
  v5 = 48 * v2 - 0x220000000000LL;
  v78 = 0;
  v68 = v5;
  v71 = 3LL;
  v6 = *(_QWORD *)(v5 + 40);
  v66 = *(unsigned __int8 *)(v5 + 34) >> 6;
  v7 = *(_QWORD *)(qword_140C67048 + 8 * ((v6 >> 43) & 0x3FF));
  if ( (v6 & 0x10000000000LL) != 0 )
  {
    v8 = 3 - (*(_BYTE *)(v5 + 36) & 3);
    if ( v8 == 3 )
      v8 = -1;
  }
  else
  {
    v8 = -1;
  }
  v79 = v8;
  v72 = MiLargePageSizes[v8];
  *(_QWORD *)(v5 + 40) = v6 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v1 != 1 && (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v2);
  v9 = *((unsigned int *)MiSearchNumaNodeTable(v2) + 2);
  if ( qword_140C65750 )
    v10 = *(unsigned __int16 *)(MiSearchChannelTable(v2) + 12);
  else
    v10 = 0LL;
  v11 = *(_QWORD *)(v7 + 16) + 25408 * v9;
  v12 = v2 / MiLargePageSizes[v79] % (unsigned int)dword_140C65800[v79];
  v74 = v11 + 1072LL * v79;
  v70 = v66 + 4 * (v10 + 4 * (v80 + (unsigned __int64)(v2 < 0x100000 ? 2 : 0)));
  v13 = *(_QWORD *)(v74 + 8 * v70 + 560) + 24LL * v12;
  v73 = v13;
  if ( (v65 & 2) == 0 )
  {
    v14 = (volatile signed __int32 *)(v11 + 23104);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v13) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11 + 23104, v13);
    }
    else
    {
      v67 = 0;
      if ( _interlockedbittestandset(v14, 0x1Fu) )
        v67 = ExpWaitForSpinLockExclusiveAndAcquire(v11 + 23104);
      for ( i = *v14; (*v14 & 0xBFFFFFFF) != 0x80000000; i = *v14 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v14, 0x40000000u);
        KeYieldProcessorEx(&v67);
      }
    }
  }
  v16 = v79;
  if ( *(_QWORD *)(v11 + 23136) && (unsigned int)MiAnyPagesRemovalPending(v2, v79) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiConvertEntireLargePageToSmall(48 * v2 - 0x220000000000LL, v79, 1, v80, 0LL, &v69, (_QWORD *)(a1 + 24));
    if ( (v65 & 4) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
      v17 = *(_QWORD *)(v11 + 23008);
      --*(_DWORD *)(v11 + 23004);
      *(_QWORD *)(v11 + 23008) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
    }
    else
    {
      v17 = 0LL;
    }
    v4 = 0;
    goto LABEL_90;
  }
  v18 = v73;
  v19 = (unsigned __int8)v80;
  LOBYTE(v19) = *(_BYTE *)(v5 + 34) ^ (*(_BYTE *)(v5 + 34) ^ v80) & 7;
  *(_BYTE *)(v5 + 34) = v19;
  v20 = *(__int64 **)(v18 + 8);
  if ( *v20 != v18 )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = v20;
  *(_QWORD *)v5 = v18;
  *v20 = v5;
  v21 = v70;
  *(_QWORD *)(v18 + 8) = v5;
  ++*(_QWORD *)(v18 + 16);
  v22 = v74;
  ++*(_QWORD *)(v74 + 8 * v21 + 48);
  ++*(_QWORD *)(v22 + 8LL * v80);
  v23 = v80 + (unsigned __int64)(v2 < 0x100000 ? 2 : 0);
  ++*(_QWORD *)(v22 + 8 * v23 + 16);
  v24 = (volatile signed __int64 *)(v7 + 2560);
  if ( v80 )
    v24 = (volatile signed __int64 *)(v7 + 2688);
  v25 = v72;
  _InterlockedExchangeAdd64(v24, v72);
  v26 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  if ( !*(_BYTE *)(v26 + 15782) )
    goto LABEL_49;
  if ( v16 != 2 )
  {
    if ( v16 == 1
      && _InterlockedIncrement16((volatile signed __int16 *)(*(_QWORD *)(v26 + 16072) + 2 * (v2 >> 18))) == 512
      && _bittest64(&KeFeatureBits, 0x25u) )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 16080), 1, 0);
      v78 = 1;
      goto LABEL_50;
    }
    goto LABEL_49;
  }
  v19 = v2 >> 9;
  if ( _InterlockedExchangeAdd8((volatile signed __int8 *)((v2 >> 9) + *(_QWORD *)(v26 + 16048)), 1u) != 31 )
  {
LABEL_49:
    v78 = 0;
    goto LABEL_50;
  }
  LOBYTE(v27) = 1;
  v28 = v2 >> 18;
  v29 = v28 & 0x1F;
  v26 = *(_QWORD *)(v26 + 16064) + 4 * (v28 >> 5);
  if ( v29 + 1 > 0x20 )
  {
    if ( (v28 & 0x1F) == 0 )
      goto LABEL_43;
    v30 = v28 & 0x1F;
    v19 = (unsigned int)(32 - v30);
    _InterlockedOr((volatile signed __int32 *)v26, ((1 << (32 - v30)) - 1) << v29);
    v26 += 4LL;
    v27 = 1 - v19;
    if ( 1 - v19 >= 0x20 )
    {
      v19 = v27 >> 5;
      v27 += -32LL * (v27 >> 5);
      do
      {
        *(_DWORD *)v26 = -1;
        v26 += 4LL;
        --v19;
      }
      while ( v19 );
    }
    if ( v27 )
LABEL_43:
      _InterlockedOr((volatile signed __int32 *)v26, (1 << v27) - 1);
    v78 = 1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)v26, 1 << v29);
    v78 = 1;
  }
LABEL_50:
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v25 != 1 )
  {
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 17216), v25);
    v36 = 0;
    v37 = v25 + v35;
    v70 = v35;
    if ( v25 + v35 < 0xA0 )
    {
      if ( v37 < 0x22 )
      {
LABEL_77:
        v41 = *(_QWORD *)(v7 + 16160);
        if ( v37 > v41 && v35 <= v41 || (v42 = *(_QWORD *)(v7 + 16152), v37 > v42) && v35 <= v42 )
          MiUpdateAvailableEvents(v7, v19, v26);
        v5 = v68;
        goto LABEL_83;
      }
    }
    else if ( v35 < 0xA0 )
    {
      v36 = 2;
    }
    if ( v35 < 0x22 )
      v36 |= 1u;
    if ( v37 >= 0x420 && v35 < 0x420 )
      v36 |= 4u;
    if ( v36 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 15872), &LockHandle);
      v38 = 3LL;
      v39 = (struct _KEVENT *)(v7 + 15904);
      v40 = 1;
      do
      {
        if ( (v40 & v36) != 0 )
        {
          KeSetEvent(v39 - 1, 0, 0);
          ++v39->Header.LockNV;
          v38 = v71;
        }
        v40 = __ROL4__(v40, 1);
        v39 = (struct _KEVENT *)((char *)v39 + 32);
        v71 = --v38;
      }
      while ( v38 );
      KxReleaseQueuedSpinLock(&LockHandle);
      v35 = v70;
    }
    goto LABEL_77;
  }
  v31 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 17216));
  if ( v31 <= 0x420 )
  {
    switch ( v31 )
    {
      case 0xA0uLL:
        v32 = 15912LL;
LABEL_58:
        v33 = (struct _KEVENT *)(v7 + v32);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 15872), &LockHandle);
        KeSetEvent(v33, 0, 0);
        ++v33[1].Header.LockNV;
        KxReleaseQueuedSpinLock(&LockHandle);
        break;
      case 0x420uLL:
        v32 = 15944LL;
        goto LABEL_58;
      case 0x22uLL:
        v32 = 15880LL;
        goto LABEL_58;
    }
  }
  v34 = v31 - 1;
  if ( v34 == *(_QWORD *)(v7 + 16152) || v34 == *(_QWORD *)(v7 + 16160) )
    MiUpdateAvailableEvents(v7, v19, v26);
LABEL_83:
  v69 = v72;
  if ( (v65 & 4) != 0 )
  {
    v17 = *(_QWORD *)(v11 + 23008);
    --*(_DWORD *)(v11 + 23004);
    *(_QWORD *)(v11 + 23008) = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( (v65 & 2) == 0 )
  {
    v43 = (_DWORD *)(v11 + 23104);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43, retaddr);
    else
      *v43 = 0;
  }
LABEL_90:
  if ( v17 )
    MiWakeLargePageWaiters(v17);
  if ( v4 )
  {
    if ( v80 == 1
      && (*(_DWORD *)(v7 + 4) & 0x20) == 0
      && !*(_DWORD *)(v7 + 16480)
      && (*(_DWORD *)(v7 + 4) & 0x20) == 0
      && v11 < v11 + 25408 )
    {
      v44 = v11 + 2152;
      v45 = v11 + 25408;
      do
      {
        if ( !*(_BYTE *)(v44 + 21024)
          && (unsigned __int64)(16LL * *(_QWORD *)v44 + (*(_QWORD *)(v44 - 1072) << 9) + (*(_QWORD *)(v44 - 2144) << 18)) >= 0x400
          && (unsigned __int64)(16LL * *(_QWORD *)(v44 - 8)
                              + (*(_QWORD *)(v44 - 1080) << 9)
                              + (*(_QWORD *)(v44 - 2152) << 18)) < 0x100000 )
        {
          v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v44 + 21008));
          v47 = *(_QWORD *)(v44 + 21000);
          v48 = v46;
          if ( v47 && !*(_BYTE *)(v44 + 21024) )
          {
            *(_BYTE *)(v44 + 21024) = 1;
            MiWakeZeroingThreads(v47, 0);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v44 + 21008));
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v48 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
              v53 = (v52 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v52;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v48);
        }
        v44 += 25408LL;
      }
      while ( v44 - 2152 < v45 );
    }
    if ( v78 && (v65 & 1) == 0 && (MiFlags & 0x30) != 0 && (v79 || _bittest64(&KeFeatureBits, 0x25u)) )
      KeSetEvent((PRKEVENT)(v7 + 16112), 0, 0);
    v54 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v54 != 17 )
    {
      if ( *(_BYTE *)(a1 + 17) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v65 & 2) == 0 )
        {
          if ( KiIrqlFlags )
          {
            v55 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
              v58 = v56->SchedulerAssist;
              v53 = (v57 & v58[5]) == 0;
              v58[5] &= v57;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
          __writecr8(v54);
        }
      }
    }
  }
  else
  {
    v59 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v59 != 17 )
    {
      if ( KiIrqlFlags )
      {
        v60 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v60 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
          v63 = v61->SchedulerAssist;
          v53 = (v62 & v63[5]) == 0;
          v63[5] &= v62;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v61);
        }
      }
      __writecr8(v59);
    }
  }
  return v69;
}
