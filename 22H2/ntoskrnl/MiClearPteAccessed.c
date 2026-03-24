/*
 * XREFs of MiClearPteAccessed @ 0x1402BA490
 * Callers:
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x1403674C4 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14039B0F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053B9C0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14028CECC (MiUnlockNestedPageTableWritePte.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // r8
  int v12; // r13d
  int v13; // ebp
  int v14; // r15d
  unsigned __int64 Flink; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 Process; // rcx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  volatile __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rbp
  unsigned __int64 v36; // r15
  int v37; // r12d
  unsigned int v38; // r8d
  __int64 v39; // r10
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r8
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // r8
  __int64 v53; // rdx
  unsigned __int64 v54; // r8
  struct _LIST_ENTRY *v55; // rax
  __int64 v56; // rax
  char v57; // r8^7
  int v58; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v61; // [rsp+90h] [rbp+18h]

  v61 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a3 << 25;
  v10 = 0xFFFFF68000000000uLL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  Process = *(unsigned __int8 *)(a1 + 184);
  Flink = 0xFFFFF6FFFFFFFFFFuLL;
  v16 = v7 >> 16;
  LOBYTE(Process) = Process & 7;
  if ( (_BYTE)Process && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v18 = 0x3FFFFFFFFFFFFFFFLL;
  v19 = 0x7FFFFFFFF8LL;
  if ( !(_BYTE)Process )
    goto LABEL_12;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2)
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( !a4 )
    goto LABEL_19;
  if ( v16 >= v10 && v16 <= Flink )
  {
    Process = v10 + (v19 & (a3 >> 9));
    LOBYTE(v12) = Process == 0xFFFFF6FB7DBEDF68uLL;
  }
LABEL_12:
  if ( a4 && v16 >= v10 && v16 <= Flink )
  {
    v14 = 1;
    MiLockPageTableInternal(a1, a3, 0LL);
  }
  if ( !v13 )
    goto LABEL_38;
  if ( v12 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
LABEL_19:
  v58 = 0;
  v61 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v58, v18, v10, Flink);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  Process = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2)
    || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    if ( v14 )
      MiUnlockPageTableInternal(a1, a3);
    return 0LL;
  }
LABEL_38:
  v27 = 0xFFFFF6FB7DBED000uLL;
  if ( !a4 )
  {
    v37 = a6;
    goto LABEL_86;
  }
  if ( v14 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(a3);
    MiUnlockNestedPageTableWritePte(a1, (volatile __int64 *)a3, v28 & 0xCFFFFFFFFFFFFFDFuLL, v12);
    goto LABEL_74;
  }
  v29 = *(_QWORD *)a3;
  v30 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v29, v30, Flink)
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    Flink = *(_QWORD *)(Process + 1928);
    if ( Flink )
    {
      v30 |= 0x20uLL;
      v31 = *(_QWORD *)(Flink + 8 * ((a3 >> 3) & 0x1FF));
      Process = (unsigned __int8)v31;
      LOBYTE(Process) = v31 & 0x20;
      if ( (v31 & 0x20) == 0 )
        v30 = v29;
      if ( (v31 & 0x42) != 0 )
        v30 |= 0x42uLL;
    }
  }
  if ( a3 >= v27
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v29, v30, Flink)
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v32 = *(_QWORD *)(Flink + 8 * ((a3 >> 3) & 0x1FF));
      Flink = v29 | 0x20;
      if ( (v32 & 0x20) == 0 )
        Flink = v29;
      v29 = Flink;
      if ( (v32 & 0x42) != 0 )
        v29 = Flink | 0x42;
    }
  }
  v33 = v30 & 0xF0FFFFFFFFFFFFDFuLL;
  Process = 0x7000000000000000LL;
  v34 = (v33 | v29 & 0xF00000000000000LL) ^ ((v33 | v29 & 0xF00000000000000LL) ^ v29) & 0x7000000000000000LL;
  if ( a3 < v27 || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_73:
    *(_QWORD *)a3 = v34;
    goto LABEL_74;
  }
  if ( !(unsigned int)MiPteHasShadow(0x7000000000000000LL, v34, v33, Flink) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v34 & 1) != 0 )
      v34 |= 0x8000000000000000uLL;
    goto LABEL_73;
  }
  if ( !HIBYTE(word_140C4E008) && (v34 & 1) != 0 )
    v34 |= 0x8000000000000000uLL;
  *(_QWORD *)a3 = v34;
  MiWritePteShadow(a3, v34);
LABEL_74:
  v35 = 1LL;
  v36 = v16;
  v37 = 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    Process = *(unsigned __int8 *)(a4 + 4);
    if ( (Process & 8) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(Process) = Process | 8;
      *(_BYTE *)(a4 + 4) = Process;
    }
  }
  v38 = *(_DWORD *)(a4 + 12);
  if ( !v38 )
    goto LABEL_106;
  if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
  {
    v39 = a4 + 8LL * (v38 - 1);
    v40 = *(_QWORD *)(v39 + 24);
    if ( (v40 & 0xC00) == 0 )
    {
      Flink = *(_QWORD *)(v39 + 24) & 0x3FFLL;
      Process = v40 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v40 & 0xFFFFFFFFFFFFF000uLL) + ((Flink + 1) << 12) == v16 )
      {
        Process = Flink + 1;
        if ( Flink + 1 >= Flink && Process <= 0x3FF )
        {
          Process = ((unsigned __int16)v40 ^ (unsigned __int16)(v40 + 1)) & 0x3FF;
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v39 + 24) = Process ^ v40;
          goto LABEL_86;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 4) & 4) != 0
    || (Flink = a4 + 8LL * (v38 - 1), v47 = *(_QWORD *)(Flink + 24), (v47 & 0xC00) != 0)
    || (Process = v16 + 4096, (v47 & 0xFFFFFFFFFFFFF000uLL) != v16 + 4096)
    || (Process = *(_QWORD *)(Flink + 24) & 0x3FFLL, Process + 1 < Process)
    || Process + 1 > 0x3FF )
  {
LABEL_106:
    if ( v38 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v49 = 1024LL;
        if ( (unsigned __int64)(v35 - 1) <= 0x3FF )
          v49 = v35;
        v35 -= v49;
        v50 = v36 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v49 - 1) & 0x3FF;
        v36 += v49 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v50;
        Process = *(unsigned int *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v49;
        if ( (_DWORD)Process == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), (unsigned int)Process, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v51 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v51 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v35 )
          goto LABEL_86;
      }
      if ( v35 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v51;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
    goto LABEL_86;
  }
  v48 = v47 - 4096;
  Process = ((unsigned __int16)v48 ^ (unsigned __int16)(v48 + 1)) & 0x3FF;
  ++*(_QWORD *)(a4 + 16);
  *(_QWORD *)(Flink + 24) = Process ^ v48;
LABEL_86:
  if ( v61 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v41 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && LockHandle.OldIrql <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            Process = (unsigned int)LockHandle.OldIrql + 1;
            Flink = -1LL << (LockHandle.OldIrql + 1);
            v45 = ~(unsigned __int16)Flink;
            v25 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
      }
      __writecr8(v41);
    }
  }
  if ( v37 )
  {
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v52 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v53 = *v52;
      if ( (unsigned __int64)v52 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v52 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v53, v52, Flink)
        && (v53 & 1) != 0
        && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
      {
        v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v55 )
        {
          v56 = *((_QWORD *)&v55->Flink + ((v54 >> 3) & 0x1FF));
          v57 = HIBYTE(v53);
          if ( (v56 & 0x20) == 0 )
            v57 = HIBYTE(v53);
          HIBYTE(v53) = v57;
          if ( (v56 & 0x42) != 0 )
            HIBYTE(v53) = v57;
        }
      }
      v46 = HIBYTE(v53) & 0xF;
    }
    else
    {
      v46 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v46 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v46 )
      MiSetVaAgeList(a1, v16, 1u, 1u);
  }
  return 1LL;
}
