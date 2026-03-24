/*
 * XREFs of MiAgePte @ 0x1402B9AD0
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeWorkingSetTail @ 0x14022DDD0 (MiAgeWorkingSetTail.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiIsPageTableLocked @ 0x1403161D8 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x14053B340 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // r14d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  volatile signed __int64 *v14; // rbp
  char v15; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 Flink; // rdx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  struct _LIST_ENTRY *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  unsigned __int64 i; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  int v41; // r8d
  __int64 v42; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int64 *v43; // [rsp+38h] [rbp-60h]
  __int64 v44; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v49; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a1;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v3 + 6) == 1 )
  {
    *(_BYTE *)(v3 + 6) = 0;
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(_QWORD *)(v5 + 136);
    v9 = *(_QWORD *)(v7 + 32);
    if ( v8 <= v9 )
      return 3LL;
    v10 = *(_DWORD *)v3;
    v11 = v8 - v9;
    v12 = *(unsigned int *)(v3 + 12);
    v13 = 0LL;
    if ( (*(_DWORD *)v3 & 4) != 0 )
    {
LABEL_30:
      v26 = v12 * (v13 + v11) / 0x3E8;
      if ( v26 > v11 )
        v26 = v11 * v12 / 0x3E8;
      *(_QWORD *)(v3 + 48) = v26;
      if ( *(_QWORD *)(v3 + 40) < v26 )
      {
        v4 = a2;
        v6 = a1;
        goto LABEL_34;
      }
      return 3LL;
    }
    v14 = (volatile signed __int64 *)&unk_140C4F7C0;
    v15 = *(_BYTE *)(v5 + 184) & 7;
    v44 = 0LL;
    if ( v15 != 2 )
      v14 = (volatile signed __int64 *)(v5 + 256);
    v43 = v14;
    v42 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[6];
        SchedulerAssist[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v42, v14);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64(v14, (__int64)&v42);
      if ( v19 )
        KxWaitForLockOwnerShip((__int64)&v42, v19);
    }
    if ( (v10 & 2) != 0 )
    {
      v20 = *(unsigned int *)(v7 + 24);
      v21 = v20 + v11;
      *(_DWORD *)(v7 + 24) = (v20 + v11) % v12;
    }
    else
    {
      v20 = *(unsigned int *)(v7 + 28);
      v21 = v20 + v11;
      *(_DWORD *)(v7 + 28) = (v20 + v11) % v12;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v42);
    v22 = v42;
    if ( !v42 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) == &v42 )
        goto LABEL_23;
      v22 = KxWaitForLockChainValid(&v42);
    }
    v42 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
LABEL_23:
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v25 = v24[6] - 1;
        v24[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    if ( v21 < v11 )
      v20 = 0LL;
    v13 = v20;
    goto LABEL_30;
  }
LABEL_34:
  Flink = 0xFFFFF68000000000uLL;
  v28 = v4 << 25 >> 16;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = *(_QWORD *)v29;
  if ( v29 >= 0xFFFFF6FB7DBED000uLL
    && v29 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v31 = *(_QWORD *)(Flink + 8 * ((v29 >> 3) & 0x1FF));
      Flink = v30 | 0x20;
      if ( (v31 & 0x20) == 0 )
        Flink = *(_QWORD *)v29;
      v30 = Flink;
      if ( (v31 & 0x42) != 0 )
        v30 = Flink | 0x42;
    }
  }
  v49 = v30;
  if ( (unsigned int)MiPteInShadowRange(&v49, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v32 )
    {
      v33 = *((_QWORD *)&v32->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF));
      v34 = v30 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v34 = v30;
      v30 = v34;
      if ( (v33 & 0x42) != 0 )
        v30 = v34 | 0x42;
    }
  }
  v35 = (_QWORD *)(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 )
  {
    v36 = (__int64)((v29 << 25) + 0x10000000) >> 16;
    for ( i = v36 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v36 = i;
    }
  }
  else
  {
    v36 = v29 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v7 + 16) = v36;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v7 + 8) = v36;
  }
  if ( !a3 || (v35[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && !(unsigned int)MiIsPageTableLocked(v5) )
  {
    if ( (v35[5] & 0x1000000000LL) == 0 )
    {
      v38 = v35[1];
      if ( v38 > 0
        && (unsigned int)MiDemoteCombinedPte(
                           v5,
                           ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                           v38 | 0x8000000000000000uLL) == 1 )
      {
        v49 = MI_READ_PTE_LOCK_FREE(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    if ( ((v49 >> 5) & 1) != 0 && (v39 = *(_QWORD *)(v3 + 248)) != 0 && v28 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v39, v28) )
        return MiAgeWorkingSetTail(v6);
    }
    else
    {
      v41 = (v49 >> 5) & 1 | 2;
      if ( (*(_DWORD *)v3 & 3) == 0 )
        v41 = (v49 >> 5) & 1;
      MiAgePteWorker(v5, (v28 >> 9) & 0xFFFFFFF8, v28, (_DWORD)v35, v3, v41);
    }
    if ( ++*(_QWORD *)(v3 + 40) >= *(_QWORD *)(v3 + 48) )
      return 3LL;
  }
  return 0LL;
}
