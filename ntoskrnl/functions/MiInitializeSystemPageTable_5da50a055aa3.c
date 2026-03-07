char __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rdx
  char v10; // bl
  int v11; // edi
  unsigned __int64 v12; // r13
  unsigned __int64 LeafVa; // rbx
  __int64 v14; // r12
  unsigned __int64 ContainingPageTable; // rbx
  unsigned int v16; // r8d
  unsigned __int64 ValidPte; // rdi
  char v18; // al
  unsigned __int64 v19; // rbx
  int v20; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v30; // edx
  char v31; // cl
  unsigned __int8 v32; // al
  unsigned int v33; // edx
  __int64 v35; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v38; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v39; // [rsp+98h] [rbp+20h]

  v39 = a4;
  a5 = *(_QWORD *)(a1 + 168);
  v35 = a5 + 144;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v38 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = v38;
  v11 = a2 != 0 ? 6 : 4;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x44000000000LL) >> 4);
  if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v12);
  if ( a2 )
  {
    if ( (v10 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v25 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000);
        KeCopyPage(v25, (__int64)(a3 << 25) >> 16);
        if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C6570F) != 0 )
        {
          v26 = (_QWORD *)v25;
          if ( v25 < v25 + 4096 )
          {
            do
            {
              v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
              v38 = v27;
              if ( (v27 & 1) != 0 && (v27 & 0x20) != 0 )
                *v26 &= ~0x20uLL;
              ++v26;
            }
            while ( (unsigned __int64)v26 < v25 + 4096 );
          }
        }
        MiUnmapPageInHyperSpaceWorker(v25, 0x11u);
        v11 = a2 != 0 ? 6 : 4;
      }
      else
      {
        MxCopyPage(v12);
      }
    }
  }
  else
  {
    if ( (v10 & 1) != 0 )
    {
      if ( (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL) == qword_140C693D8 )
        goto LABEL_4;
      v24 = *(_QWORD *)((__int64)(a3 << 25) >> 16);
    }
    else
    {
      v24 = *(_QWORD *)(a5 + 352);
    }
    MiFillPhysicalPages(v12, v9, v24);
  }
LABEL_4:
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa <= qword_140C66CF0 && LeafVa >= qword_140C6A1D8
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 4;
  }
  v14 = (__int64)v39;
  *v39 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v16 = v11 | 0x90000000;
  if ( a2 )
    v16 = v11 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v12, v16);
  v38 = ValidPte;
  if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C6570F) != 0 )
  {
    ValidPte &= ~0x20uLL;
    v38 = ValidPte;
  }
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      ContainingPageTable = v12;
      MiSetPageTablePfnBuddy(v14, KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25], 0);
      ValidPte = v38;
    }
    else if ( v8 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v12, a3, ContainingPageTable, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v18 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v18 & 1) == 0 )
  {
    v19 = ValidPte;
    v20 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(a3);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
        {
          LOBYTE(CurrentThread) = 0;
          v19 = ValidPte | 0x8000000000000000uLL;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          LOBYTE(CurrentThread) = 0;
          v19 = ValidPte | 0x8000000000000000uLL;
        }
        ValidPte = v38;
      }
    }
    *(_QWORD *)a3 = v19;
    if ( v20 )
      LOBYTE(CurrentThread) = MiWritePteShadow(a3, v19, v22);
    if ( a2 != 3 )
      goto LABEL_22;
LABEL_29:
    if ( *(_DWORD *)(a5 + 120) != 2 )
      MiReplicatePteChange(a3, ValidPte, 1);
    LOBYTE(CurrentThread) = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_32;
    LOBYTE(CurrentThread) = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0
      || (unsigned __int8)CurrentThread > 0xFu
      || LockHandle.OldIrql > 0xFu
      || (unsigned __int8)CurrentThread < 2u )
    {
      goto LABEL_32;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v30 = SchedulerAssist[5];
    v31 = LockHandle.OldIrql + 1;
    goto LABEL_82;
  }
  if ( (v18 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C6570F) != 0 )
    MiClearPteAccessedBitRange(a1, a2, a3);
  LOBYTE(CurrentThread) = MiTransformValidPteInPlace(a3, a3, ValidPte, a2);
  if ( a2 == 3 )
  {
    MiInsertRecursiveTbFlushEntries(v35, 3, a3);
    goto LABEL_29;
  }
LABEL_22:
  if ( !a2 )
  {
    LOBYTE(CurrentThread) = a5;
    if ( *(_DWORD *)(a5 + 120) == 4 )
    {
      v32 = MiLockPageInline(v14);
      OldIrql = v32;
      *(_WORD *)(v14 + 32) = 2;
      LOBYTE(CurrentThread) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags
        || (LOBYTE(CurrentThread) = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
        || (unsigned __int8)CurrentThread > 0xFu
        || (unsigned __int8)OldIrql > 0xFu
        || (unsigned __int8)CurrentThread < 2u )
      {
LABEL_32:
        __writecr8(OldIrql);
        return (char)CurrentThread;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = OldIrql + 1;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v30 = SchedulerAssist[5];
LABEL_82:
      LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << v31);
      v33 = (unsigned int)CurrentThread & v30;
      SchedulerAssist[5] = v33;
      if ( !v33 )
        LOBYTE(CurrentThread) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_32;
    }
  }
  return (char)CurrentThread;
}
