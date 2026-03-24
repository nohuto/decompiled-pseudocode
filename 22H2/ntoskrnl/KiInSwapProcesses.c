/*
 * XREFs of KiInSwapProcesses @ 0x140249EA8
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B3A30 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReturnWsToExpansionList @ 0x140352978 (MiReturnWsToExpansionList.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1403558E0 (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x140356708 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x1403570E4 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C2A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x14052C920 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1405A7800 (EtwTraceInswapProcess.c)
 */

char __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, int a3, _DWORD *a4)
{
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  char result; // al
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // r12d
  unsigned __int64 v19; // rbx
  unsigned __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  _DWORD *v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  int v44; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v46; // [rsp+A0h] [rbp+48h]
  char v47; // [rsp+A8h] [rbp+50h] BYREF
  __int64 OutswappedPageResident; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+60h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    v46 = a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    OutswappedPageResident = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v47 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)v5,
                               (_DWORD)a2,
                               a3,
                               (_DWORD)a4,
                               *((unsigned __int16 *)v5 + 418));
    v11 = OutswappedPageResident;
    v12 = OutswappedPageResident;
    if ( (unsigned int)MiPteInShadowRange(&OutswappedPageResident, v13)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&OutswappedPageResident >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else
      {
        v11 = OutswappedPageResident;
      }
    }
    v17 = (v11 >> 12) & 0xFFFFFFFFFLL;
    v49 = MiMapPageInHyperSpaceWorker(v17, &v47, 0x80000000LL, v14);
    v18 = 0;
    v19 = v12;
    v20 = (unsigned __int64 *)(v49 + 3944);
    if ( (unsigned int)MiPteInShadowRange(v49 + 3944, v21) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v22, v24, v25) )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v26 = (v12 & 1) == 0;
          goto LABEL_33;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v26 = (v12 & 1) == 0;
LABEL_33:
        if ( !v26 )
          v19 = v12 | 0x8000000000000000uLL;
      }
    }
    *v20 = v19;
    if ( v18 )
      MiWritePteShadow(v20, v19);
    LOBYTE(v22) = v47;
    MiUnmapPageInHyperSpaceWorker(v49, v22, 0x80000000LL);
    v27 = 48 * v17 - 0x58000000000LL;
    v30 = (unsigned __int8)MiLockPageInline(v27, v28, v29);
    v31 = v17 | *(_QWORD *)(v27 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v27 + 24) ^= ((*(_QWORD *)(v27 + 24) + 1LL) ^ *(_QWORD *)(v27 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v27 + 40) = v31;
    MiSetPageTablePfnBuddy(v27, v5, 1LL);
    *(_QWORD *)(v27 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v27 & 1) == 0 )
      MiMarkPfnTradable(48 * v17 - 0x58000000000LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
          v26 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v30);
    v5[225] = 1LL;
    v5[226] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v17 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*((_DWORD *)v5 + 281) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList(v5 + 208, 0LL);
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
    a1 = v46;
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1851) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit(v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      v41 = KeGetCurrentPrcb()->SchedulerAssist;
      v41[5] |= (-1 << (v7 + 1)) & 4;
    }
    KiAcquireKobjectLockSafe(v5);
    v8 = v5 + 43;
    v9 = (_QWORD *)v5[43];
    if ( v9 == v5 + 43 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[44];
      if ( (_QWORD *)v9[1] != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      v9[1] = a2;
      v5[44] = v5 + 43;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      result = KiReadyOutSwappedThreads(v9, v7);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && v7 <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v43->SchedulerAssist;
            v44 = ~(unsigned __int16)a2;
            v26 = (v44 & a4[5]) == 0;
            a3 = v44 & a4[5];
            a4[5] = a3;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  while ( a1 );
  return result;
}
