__int64 __fastcall MiPerformVadSplitting(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // r8d
  __int64 *v3; // r13
  _KPROCESS *Process; // r12
  __int64 v5; // rsi
  __int64 *v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  struct _KTHREAD *v14; // r9
  ULONG_PTR v15; // r12
  __int64 v16; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v22; // eax
  __int64 v23; // rbx
  KIRQL v24; // al
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned int v29; // edx
  unsigned __int64 v30; // rax
  int v31; // edx
  struct _KPROCESS *v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rdx
  bool v40; // zf
  __int64 result; // rax
  unsigned __int32 v42; // eax
  unsigned __int32 v43; // ett
  __int64 SharedVm; // rbx
  int v45; // r9d
  char v46; // si
  unsigned int v47; // edx
  unsigned __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rdx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbp
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // rbx
  KIRQL v61; // al
  __int64 v62; // rax
  unsigned __int64 v63; // [rsp+40h] [rbp-98h]
  unsigned __int64 *v64; // [rsp+48h] [rbp-90h]
  struct _KPROCESS *v65; // [rsp+50h] [rbp-88h]
  __int64 v66; // [rsp+58h] [rbp-80h]
  unsigned __int64 v67; // [rsp+68h] [rbp-70h]
  unsigned __int64 v68; // [rsp+70h] [rbp-68h]
  __int64 v69; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v70; // [rsp+88h] [rbp-50h]
  struct _KTHREAD *v71; // [rsp+E0h] [rbp+8h]
  unsigned __int8 v72; // [rsp+E0h] [rbp+8h]
  unsigned int v73; // [rsp+E8h] [rbp+10h]
  int v74; // [rsp+F0h] [rbp+18h]
  __int64 *v75; // [rsp+F8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = *((_DWORD *)a1 + 4);
  v3 = a1[1];
  Process = CurrentThread->ApcState.Process;
  v70 = CurrentThread;
  v65 = Process;
  v66 = 0LL;
  v64 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v68 = (unsigned __int64)a1[3];
  v67 = (unsigned __int64)a1[4];
  v74 = v2;
  v5 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = *a1;
  v69 = ((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v2 == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = *a1;
    if ( v2 == 2 )
      v6 = 0LL;
    else
      v6 = (__int64 *)*v6;
  }
  v8 = *((unsigned int *)v3 + 13);
  v9 = 0x7FFFFFFFDLL;
  LODWORD(v8) = v8 & 0x7FFFFFFF;
  v10 = 0LL;
  v11 = ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 31) | v8;
  v12 = 0LL;
  v13 = 0x7FFFFFFFDLL;
  if ( v11 != 0x7FFFFFFFDLL )
  {
    v13 = 0LL;
    v10 = v11;
  }
  v63 = v13;
  if ( v2 == 3 )
  {
    v53 = v7;
    if ( (*((unsigned int *)v7 + 7) | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32))
       - (*((unsigned int *)v7 + 6) | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
       + 1 > (*((unsigned int *)v6 + 7) | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32))
           - (*((unsigned int *)v6 + 6) | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32))
           + 1 )
      v53 = v6;
    v75 = v53;
    MiLockNestedVad(v53);
  }
  else
  {
    v75 = 0LL;
  }
  --CurrentThread->SpecialApcDisable;
  v14 = KeGetCurrentThread();
  v15 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  v71 = v14;
  v16 = 0LL;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( !v14->AbEntrySummary )
  {
    AbEntrySummary = KiAbTryReclaimOrphanedEntries(v15, v14);
    if ( !AbEntrySummary )
      goto LABEL_12;
    v14 = v71;
  }
  _BitScanForward(&v18, AbEntrySummary);
  v73 = v18;
  v14->AbEntrySummary = AbEntrySummary & ~(1 << v18);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v42 = *SchedulerAssist;
    do
    {
      v9 = v42;
      LODWORD(v9) = v42 & 0xFFDFFFFF;
      v43 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v42 & 0xFFDFFFFF, v42);
    }
    while ( v43 != v42 );
    if ( (v42 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v14 = v71;
    }
  }
  _enable();
  v16 = (__int64)(&v14[1].Process + 12 * v73);
  if ( v15 - qword_140C65668 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v16 + 8) = SessionId;
  *(_QWORD *)v16 = v15 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v15, v16, v15);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  v22 = *((_DWORD *)v3 + 12);
  if ( v10 )
  {
    if ( (v22 & 0x200000) != 0 )
    {
      SharedVm = MiGetSharedVm(v64, v9, SchedulerAssist, v14);
      LOBYTE(v45) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      v46 = v45;
      *(_DWORD *)(SharedVm + 4) = 0;
      v72 = v45;
      v12 = MiComputePageCommitment(v68, v67, (_DWORD)v3, v45, 4, 0LL, 0LL);
    }
    else
    {
      v54 = MiCountSharedPages(v3, v5, v69);
      v55 = v69 - v5;
      v46 = 17;
      v72 = 17;
      v12 = (v55 >> 3) - v54 + 1;
    }
    if ( v74 == 1 )
    {
      v56 = v10;
      v25 = v63;
      v26 = v56 - v12;
    }
    else if ( v74 == 2 )
    {
      v26 = v63;
      v25 = v10 - v12;
    }
    else
    {
      if ( (v3[6] & 0x200000) != 0 )
      {
        LOBYTE(v14) = v46;
        v26 = MiComputePageCommitment(
                *((_DWORD *)v75 + 6) << 12,
                (*((_DWORD *)v75 + 7) << 12) | 0xFFFu,
                (_DWORD)v75,
                (_DWORD)v14,
                4,
                0LL,
                0LL);
      }
      else
      {
        v57 = 8
            * ((*((unsigned int *)v75 + 6) | ((unsigned __int64)*((unsigned __int8 *)v75 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v58 = 8
            * ((*((unsigned int *)v75 + 7) | ((unsigned __int64)*((unsigned __int8 *)v75 + 33) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v26 = ((__int64)(v58 - v57) >> 3) - MiCountSharedPages(v75, v57, v58) + 1;
      }
      v25 = v10 - v12 - v26;
      v59 = v25;
      if ( v75 == v7 )
      {
        v25 = v26;
        v26 = v59;
      }
    }
  }
  else
  {
    if ( (v22 & 0x200000) != 0 )
    {
      v23 = MiGetSharedVm(v64, v9, SchedulerAssist, v14);
      v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v23);
      *(_DWORD *)(v23 + 4) = 0;
      v72 = v24;
    }
    else
    {
      v72 = 17;
    }
    v25 = v63;
    v26 = v63;
  }
  if ( v72 == 17 )
  {
    v60 = MiGetSharedVm(v64, v9, SchedulerAssist, v14);
    v61 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v60);
    *(_DWORD *)(v60 + 4) = 0;
    v72 = v61;
  }
  MiLockVadTree(3LL);
  LOBYTE(v27) = 15;
  if ( v7 )
  {
    v47 = *((_DWORD *)v7 + 13) & 0x80000000;
    if ( (*((_DWORD *)v7 + 13) & 0x7FFFFFFF | ((unsigned __int64)*((unsigned __int8 *)v7 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v48) = 15;
      v49 = v47 | 0x7FFFFFFD;
    }
    else
    {
      v48 = v25 >> 31;
      v49 = v25 & 0x7FFFFFFF | v47;
    }
    *((_DWORD *)v7 + 13) = v49;
    *((_BYTE *)v7 + 34) = v48;
    v50 = *((unsigned int *)v7 + 7);
    v51 = (v50 | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) + 1;
    v52 = (v50 | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32))
        - (*((unsigned int *)v7 + 6) | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32));
    *((_DWORD *)v3 + 6) = v50 + 1;
    *((_BYTE *)v3 + 32) = BYTE4(v51);
    v28 = 8 * v52 + 8;
    MiInsertVad(v7, v65, 3LL);
  }
  else
  {
    v28 = 0LL;
  }
  if ( v6 )
  {
    v29 = *((_DWORD *)v6 + 13) & 0x80000000;
    if ( (*((_DWORD *)v6 + 13) & 0x7FFFFFFF | ((unsigned __int64)*((unsigned __int8 *)v6 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v30) = 15;
      v31 = v29 | 0x7FFFFFFD;
    }
    else
    {
      v30 = v26 >> 31;
      v31 = v26 & 0x7FFFFFFF | v29;
    }
    v32 = v65;
    *((_DWORD *)v6 + 13) = v31;
    *((_BYTE *)v6 + 34) = v30;
    v33 = *((unsigned int *)v6 + 6) | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32);
    v34 = (*((unsigned int *)v6 + 7) | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32)) - v33;
    *((_DWORD *)v3 + 7) = *((_DWORD *)v6 + 6) - 1;
    v28 += 8 * v34 + 8;
    *((_BYTE *)v3 + 33) = (v33 - 1) >> 32;
    MiInsertVad(v6, v65, 3LL);
  }
  else
  {
    v32 = v65;
  }
  v35 = *((_DWORD *)v3 + 13);
  v36 = v35 & 0x7FFFFFFF | ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 31);
  if ( v36 == 0x7FFFFFFFDLL )
  {
    v37 = v35 & 0x80000000 | 0x7FFFFFFD;
  }
  else
  {
    if ( (v3[6] & 0x200000) == 0 && v36 < 0x7FFFFFFFDLL )
    {
      v62 = 0LL;
      if ( v28 )
        v62 = v28;
      v66 = v62;
    }
    v27 = v12 >> 31;
    v37 = (v35 ^ v12) & 0x7FFFFFFF ^ v35;
  }
  *((_DWORD *)v3 + 13) = v37;
  *((_BYTE *)v3 + 34) = v27;
  MiAdvanceVadView(v3, 0LL);
  LOBYTE(v38) = 17;
  MiUnlockVadTree(3LL, v38);
  MiUnlockWorkingSetExclusive((__int64)&v32[1].ActiveProcessors.StaticBitmap[26], v72);
  if ( v7 )
    MiPostInsertVad(v7, v39, 0LL);
  if ( v6 )
    MiPostInsertVad(v6, v39, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease(v15);
  v40 = v70->SpecialApcDisable++ == -1;
  if ( v40 && ($C71981A45BEB2B45F82C232A7085991E *)v70->ApcState.ApcListHead[0].Flink != &v70->152 )
    KiCheckForKernelApcDelivery();
  if ( v75 )
    MiUnlockNestedVad(v75);
  result = v66;
  if ( v66 )
    return PsReturnProcessPagedPoolQuota(v32, v66);
  return result;
}
