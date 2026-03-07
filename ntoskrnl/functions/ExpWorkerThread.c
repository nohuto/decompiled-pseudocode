BOOLEAN __fastcall ExpWorkerThread(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rcx
  unsigned __int16 *v4; // rdi
  char v5; // r13
  int v6; // eax
  __int64 v7; // rax
  _QWORD *BugCheckParameter4; // r14
  _DWORD *v9; // rdx
  int v10; // ecx
  void (__fastcall *v11)(const void *); // r15
  const void *v12; // r12
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned int Queue; // eax
  __int64 v18; // rdi
  unsigned __int16 Count; // r8
  __int64 v20; // r11
  unsigned int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r10
  _KAFFINITY_EX *UserAffinity; // r9
  _KAFFINITY_EX *v28; // r10
  unsigned __int16 v29; // dx
  signed __int32 v30; // eax
  int v31; // r8d
  signed __int32 v32; // r9d
  unsigned int v33; // r8d
  bool v34; // di
  BOOLEAN result; // al
  int IoPriorityThread; // eax
  unsigned int PagePriorityThread; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 *v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+38h] [rbp-C8h]
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v42; // [rsp+48h] [rbp-B8h]
  __int128 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+78h] [rbp-88h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v49[34]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = a1;
  v46 = a1;
  PreviousAffinity = 0LL;
  memset(v49, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = &v41;
  v4 = *(unsigned __int16 **)(v1 + 696);
  v41 = 0LL;
  v5 = 1;
  v44 = *(_QWORD *)(v1 + 688);
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v45 = CurrentThread;
  v39 = &v41;
  v42 = v4;
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6 | 1;
  _InterlockedOr(v38, 0);
  if ( !ExpWorkersCanSwap )
  {
    KeSetKernelStackSwapEnable(0);
    v3 = &v41;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = KeRemovePriQueue(v1, 0LL, 0LL, v3);
        BugCheckParameter4 = (_QWORD *)v7;
        if ( !v5 )
          break;
        v5 = 0;
        *(_DWORD *)(v1 + 716) &= ~0x80000000;
        _InterlockedAnd((volatile signed __int32 *)(v1 + 712), 0xFFFFBFFF);
        v3 = 0LL;
        v39 = 0LL;
        if ( v7 != 258 )
          goto LABEL_6;
      }
      if ( v7 == 258 )
      {
        v9 = (_DWORD *)(v1 + 716);
        break;
      }
LABEL_6:
      v9 = (_DWORD *)(v1 + 716);
      if ( v7 == 128 )
        break;
      v10 = *(_DWORD *)(v1 + 712);
      if ( v10 < (2 * *v9) >> 1
        || v10 < *(_DWORD *)(v1 + 720)
        && *(_QWORD *)(v1 + 8) == v1 + 8
        && (*(_DWORD *)(v1 + 4) || *(int *)(v1 + 716) < 0) )
      {
        KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 8LL * *v4) + 16LL), 0, 0);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 704));
      v11 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
      v12 = (const void *)BugCheckParameter4[3];
      if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
        v11(v12);
        EtwTraceThreadWorkItem(v11, 1345LL);
      }
      else
      {
        ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
      }
      if ( (KeGetPcr()->Prcb.BpbRetpolineState & 1) != 0 )
        KxReenterRetpolinedCode();
      if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
        KeBugCheckEx(0x39u, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( CurrentThread->WaitBlock[3].SpareLong )
        KeBugCheckEx(1u, (ULONG_PTR)v11, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
      if ( KeGetCurrentIrql() )
        KeBugCheckEx(0xE1u, (ULONG_PTR)v11, KeGetCurrentIrql(), (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        KeBugCheckEx(0xDFu, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4, 0LL);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
        KeBugCheckEx(
          5u,
          (ULONG_PTR)CurrentThread->Process,
          (ULONG_PTR)CurrentThread->ApcState.Process,
          CurrentThread->ApcStateIndex,
          (ULONG_PTR)CurrentThread);
      if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        KeBugCheckEx(0x19Au, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4, 0LL);
      v13 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
      v14 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
      if ( v14 && v13 >= *(_DWORD *)(v14 + 1068) )
        v13 = *(_DWORD *)(v14 + 1068);
      if ( v13 < 2 )
      {
        if ( CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        {
LABEL_68:
          IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v11, IoPriorityThread, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4);
        }
      }
      else if ( v13 != 2 )
      {
        goto LABEL_68;
      }
      v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v16 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
      if ( v16 && v15 >= *(_DWORD *)(v16 + 1076) )
        v15 = *(_DWORD *)(v16 + 1076);
      if ( v15 != 5 )
      {
        PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
        KeBugCheckEx(0x129u, (ULONG_PTR)v11, PagePriorityThread, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4);
      }
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
        KeBugCheckEx(0x15Bu, (ULONG_PTR)v11, (Queue >> 9) & 7, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4);
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x800) != 0 )
        KeBugCheckEx(
          0x1D6u,
          (ULONG_PTR)v11,
          (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 11) & 1,
          (ULONG_PTR)v12,
          (ULONG_PTR)BugCheckParameter4);
      if ( (CurrentThread->MiscFlags & 8) != 0 )
      {
        DbgPrintEx(
          0,
          0,
          "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
          v11,
          v12,
          BugCheckParameter4);
        PreviousAffinity = 0LL;
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      }
      LODWORD(v49[0]) = 2097153;
      memset((char *)v49 + 4, 0, 0x104uLL);
      v18 = *v4;
      v43 = 0LL;
      v47 = 0LL;
      memset(&v49[1], 0, sizeof(_QWORD));
      Count = 1;
      if ( (unsigned __int16)v18 < (unsigned __int16)KeNumberNodes )
      {
        _mm_lfence();
        v20 = KeNodeBlock[v18];
        v43 = (unsigned __int64)v20;
        v21 = *(_DWORD *)(v20 + 16);
        DWORD2(v43) = v21;
LABEL_31:
        Count = v49[0];
        while ( v21 )
        {
          _BitScanForward((unsigned int *)&v22, v21);
          v47 = 0LL;
          v40 = v22;
          v23 = ~(1 << v22);
          v24 = *(_QWORD *)(v20 + 8 * v22 + 24);
          v21 &= v23;
          v25 = *(unsigned __int16 *)(v24 + 136);
          v26 = *(_QWORD *)(v24 + 128);
          *(_QWORD *)&v47 = v26;
          WORD4(v47) = v25;
          if ( LOWORD(v49[0]) > (unsigned __int16)v25 )
            goto LABEL_34;
          if ( WORD1(v49[0]) > (unsigned __int16)v25 )
          {
            LOWORD(v49[0]) = v25 + 1;
LABEL_34:
            v49[v25 + 1] |= v26;
            goto LABEL_31;
          }
        }
        CurrentThread = v45;
        v1 = v46;
        DWORD2(v43) = 0;
      }
      UserAffinity = CurrentThread->UserAffinity;
      if ( Count < UserAffinity->Count )
      {
        v28 = CurrentThread->UserAffinity;
      }
      else
      {
        v28 = (_KAFFINITY_EX *)v49;
        Count = UserAffinity->Count;
      }
      v29 = 0;
      if ( Count )
      {
        while ( v49[v29 + 1] == UserAffinity->Bitmap[v29] )
        {
          if ( ++v29 >= Count )
            goto LABEL_41;
        }
        goto LABEL_78;
      }
LABEL_41:
      if ( v29 < v28->Count )
      {
        while ( !v28->Bitmap[v29] )
        {
          if ( ++v29 >= v28->Count )
            goto LABEL_42;
        }
LABEL_78:
        KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)v49);
      }
LABEL_42:
      v3 = v39;
      v4 = v42;
      if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
      {
        DbgPrintEx(
          0,
          0,
          "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
          v11,
          v12,
          BugCheckParameter4);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
LABEL_79:
        v3 = v39;
      }
    }
    if ( (*(_DWORD *)(v1 + 712) & 0x8000) != 0 )
      break;
    v3 = v39;
  }
  while ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
       || *(_DWORD *)(v1 + 4) );
  _m_prefetchw((const void *)(v1 + 712));
  v30 = *(_DWORD *)(v1 + 712);
  do
  {
    v31 = (v30 & 0x3FFF) - 1;
    v32 = v30;
    if ( v31 < (2 * *v9) >> 1 && (v30 & 0x8000) == 0 )
      goto LABEL_79;
    v33 = v30 & 0xFFFFC000 | v31;
    v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 712), v33, v30);
  }
  while ( v30 != v32 );
  v34 = v33 == 0x8000;
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v34 )
    return KeSetEvent(*(PRKEVENT *)(v1 + 728), 0, 0);
  return result;
}
