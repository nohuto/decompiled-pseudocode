/*
 * XREFs of MiSetVaAgeList @ 0x1402ADD40
 * Callers:
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402BA490 (MiClearPteAccessed.c)
 *     MiUpdateWsleAge @ 0x140317BA8 (MiUpdateWsleAge.c)
 *     MiTrimWorkingSetBuildup @ 0x1403302C8 (MiTrimWorkingSetBuildup.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     MiLockWsle @ 0x140339EC0 (MiLockWsle.c)
 *     MiResetAccessBitPte @ 0x14039B0F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053B9C0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVolunteerForTrimFirst @ 0x1402B78C0 (MiVolunteerForTrimFirst.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCountWslesInPageTable @ 0x1402DAFF0 (MiCountWslesInPageTable.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  char v7; // r14
  unsigned __int64 v8; // r9
  char v9; // al
  int v10; // edi
  unsigned __int64 *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  _BYTE *v16; // r12
  unsigned __int8 v17; // bl
  BOOL v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int8 v24; // bl
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int8 v31; // al
  bool v32; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v39; // rbx
  char v41; // cl
  int v42; // r8d
  unsigned __int64 v43; // rbx
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  struct _LIST_ENTRY *v51; // rax
  __int64 v52; // rax
  struct _LIST_ENTRY *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  struct _LIST_ENTRY *v56; // rax
  __int64 v57; // rax
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  struct _LIST_ENTRY *v62; // rax
  __int64 v63; // rax
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  int v67; // [rsp+20h] [rbp-49h]
  unsigned int v69; // [rsp+28h] [rbp-41h]
  BOOL v70; // [rsp+2Ch] [rbp-3Dh]
  unsigned __int64 v71; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v75; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v76[8]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v69 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v70 = 0;
  v71 = v8;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
    v67 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
    v67 = 0;
    v70 = (v9 & 7) != 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140C4F7C0;
  else
    v11 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v11;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v47 = SchedulerAssist[6];
      SchedulerAssist[6] = v47 + 1;
      if ( v47 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = v71;
        a3 = v69;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    goto LABEL_83;
  }
  v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
  if ( v14 )
  {
    KxWaitForLockOwnerShip((__int64)&LockHandle, v14);
LABEL_83:
    a3 = v69;
    v8 = v71;
  }
  if ( a4 == 8 && *(_QWORD *)(a1 + 112) < *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + (unsigned __int64)a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 0LL;
  }
  if ( a3 )
  {
    do
    {
      if ( v10 )
      {
        v15 = *(_QWORD *)v8;
        v16 = 0LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v49 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
            v50 = v15 | 0x20;
            if ( (v49 & 0x20) == 0 )
              v50 = *(_QWORD *)v8;
            v15 = v50;
            if ( (v49 & 0x42) != 0 )
              v15 = v50 | 0x42;
          }
        }
        v7 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        v17 = HIBYTE(v15) & 0xF;
        v18 = (HIBYTE(v15) & 0xF) == 8;
        v70 = v18;
      }
      else
      {
        v43 = *(_QWORD *)v8;
        if ( (unsigned int)MiPteInShadowRange(v8, 0xFFFFF6FB7DBED7F8uLL)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v44 )
          {
            v45 = *((_QWORD *)&v44->Flink + ((v71 >> 3) & 0x1FF));
            v46 = v43 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = v43;
            v43 = v46;
            if ( (v45 & 0x42) != 0 )
              v43 = v46 | 0x42;
          }
        }
        v18 = v70;
        v16 = (_BYTE *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v17 = (*v16 >> 1) & 7;
      }
      if ( v17 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( !v18 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v19 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v20 = *(_QWORD *)v19;
          if ( v19 >= 0xFFFFF6FB7DBED000uLL
            && v19 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v51 )
            {
              v52 = *((_QWORD *)&v51->Flink + ((v19 >> 3) & 0x1FF));
              v19 = v20 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v19 = v20;
              v20 = v19;
              if ( (v52 & 0x42) != 0 )
                v20 = v19 | 0x42;
            }
          }
          v73 = v20;
          if ( (unsigned int)MiPteInShadowRange(&v73, v19)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v53 )
            {
              v54 = *((_QWORD *)&v53->Flink + (((unsigned __int64)&v73 >> 3) & 0x1FF));
              v55 = v20 | 0x20;
              if ( (v54 & 0x20) == 0 )
                v55 = v20;
              v20 = v55;
              if ( (v54 & 0x42) != 0 )
                v20 = v55 | 0x42;
            }
          }
          v21 = (__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v22 = *v21;
          v23 = ((unsigned __int64)*v21 >> 14) & 7;
          if ( (((unsigned __int64)*v21 >> 4) & 0x3FF) != 0 )
          {
            if ( v17 == v23 )
            {
              *v21 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v21 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v17 > v23 )
            {
              *v21 = v22 ^ ((unsigned int)v22 ^ (v17 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
          v10 = v67;
        }
        --*(_QWORD *)(a1 + 8LL * v17 + 40);
        if ( v17 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v24 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v71) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v24 = 0;
      }
      if ( v16 )
      {
        *(_QWORD *)v16 ^= ((unsigned __int8)*(_QWORD *)v16 ^ (unsigned __int8)(2 * v24)) & 0xE;
      }
      else
      {
        v7 ^= (v24 ^ v7) & 0xF;
        v25 = *(_QWORD *)v71;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v71,
                  ((unsigned __int64)(v7 & 0x7F) << 56) | v25 & 0x80FFFFFFFFFFFFFFuLL,
                  v25);
        }
        while ( v26 != v25 );
      }
      if ( v24 >= 8u )
      {
        if ( v24 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v10 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v27 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v28 = *(_QWORD *)v27;
          if ( v27 >= 0xFFFFF6FB7DBED000uLL
            && v27 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v56 )
            {
              v57 = *((_QWORD *)&v56->Flink + ((v27 >> 3) & 0x1FF));
              v27 = v28 | 0x20;
              if ( (v57 & 0x20) == 0 )
                v27 = v28;
              v28 = v27;
              if ( (v57 & 0x42) != 0 )
                v28 = v27 | 0x42;
            }
          }
          v74 = v28;
          if ( (unsigned int)MiPteInShadowRange(&v74, v27)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v58 )
            {
              v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v74 >> 3) & 0x1FF));
              v60 = v28 | 0x20;
              if ( (v59 & 0x20) == 0 )
                v60 = v28;
              v28 = v60;
              if ( (v59 & 0x42) != 0 )
                v28 = v60 | 0x42;
            }
          }
          v29 = (unsigned __int64 *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v30 = *v29;
          v31 = (*v29 >> 14) & 7;
          if ( ((*v29 >> 4) & 0x3FF) != 0 )
          {
            if ( v24 == v31 )
            {
              *v29 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(16 * (((*v29 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v24 > v31 )
            {
              *v29 = v30 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            }
          }
          v10 = v67;
        }
        ++*(_QWORD *)(a1 + 8LL * v24 + 40);
        if ( v24 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      v32 = v69-- == 1;
      v8 = v71;
    }
    while ( !v32 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_47;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_47:
  v34 = KeGetCurrentPrcb();
  v35 = v34->SchedulerAssist;
  if ( v35 )
  {
    if ( v34->NestingLevel <= 1u )
    {
      v61 = v35[6] - 1;
      v35[6] = v61;
      if ( !v61 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  if ( v10 )
  {
    v36 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v37 = *(_QWORD *)v36;
    if ( v36 >= 0xFFFFF6FB7DBED000uLL
      && v36 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v37 & 1) != 0
      && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
    {
      v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v62 )
      {
        v63 = *((_QWORD *)&v62->Flink + ((v36 >> 3) & 0x1FF));
        v36 = v37 | 0x20;
        if ( (v63 & 0x20) == 0 )
          v36 = v37;
        v37 = v36;
        if ( (v63 & 0x42) != 0 )
          v37 = v36 | 0x42;
      }
    }
    v75 = v37;
    if ( (unsigned int)MiPteInShadowRange(&v75, v36) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v37 & 1) != 0 && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v64 = Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
            v66 = v37 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v65;
            LOBYTE(Process) = v65 & 0x20;
            if ( (v65 & 0x20) == 0 )
              v66 = v37;
            v37 = v66;
            if ( (v65 & 0x42) != 0 )
              v37 = v66 | 0x42;
          }
        }
      }
    }
    v39 = (unsigned __int64 *)(48 * ((v37 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v39 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(Process, a2, v76);
      v41 = 8;
      while ( 1 )
      {
        v42 = v76[(unsigned __int8)--v41];
        if ( v42 )
          break;
        if ( !v41 )
          return 1LL;
      }
      *v39 = *v39 & 0xFFFFFFFFFFFE000FuLL | (16 * (v42 & 0x3FF | ((unsigned __int64)(v41 & 7) << 10)));
    }
  }
  return 1LL;
}
