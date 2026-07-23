/*
 * XREFs of ExpWorkerThread @ 0x1402417F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x14022BB00 (KeSetKernelStackSwapEnable.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     ExpNewThreadNecessary @ 0x140242200 (ExpNewThreadNecessary.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x1403544E0 (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x1405A8300 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v2; // r12
  __int64 v3; // r15
  int v5; // eax
  __int64 v6; // rax
  _QWORD *BugCheckParameter4; // rdi
  void (__fastcall *v8)(const void *); // rbp
  const void *v9; // r14
  unsigned int Queue; // eax
  signed __int32 v11; // eax
  int v12; // edx
  signed __int32 v13; // r8d
  unsigned int v14; // edx
  bool v15; // di
  BOOLEAN result; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v18; // ecx
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+90h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  v3 = *(_QWORD *)(BugCheckParameter2 + 696);
  v23 = *(_QWORD *)(BugCheckParameter2 + 688);
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v22 = 0LL;
  PreviousAffinity = 0LL;
  if ( (v5 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v5 | 1;
  _InterlockedOr(v21, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_4:
    while ( 1 )
    {
      v6 = KeRemovePriQueue(BugCheckParameter2);
      BugCheckParameter4 = (_QWORD *)v6;
      if ( !v2 )
        break;
      v2 = 0;
      *(_DWORD *)(BugCheckParameter2 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 712), 0xFFFFBFFF);
      if ( v6 != 258 )
      {
LABEL_6:
        if ( v6 == 128 )
          goto LABEL_30;
        if ( (unsigned __int8)ExpNewThreadNecessary(BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 720)) )
          KeSetEvent(
            (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 8LL * *(unsigned __int16 *)(v3 + 146)) + 16LL),
            0,
            0);
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 704));
        v8 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
        v9 = (const void *)BugCheckParameter4[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
          v8(v9);
          EtwTraceThreadWorkItem(v8, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
        }
        if ( (KeGetPcr()->Prcb.BpbRetpolineState & 1) != 0 )
        {
          _disable();
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = v25 >> 9;
          CurrentPrcb->BpbRetpolineState &= ~1u;
          if ( (v18 & 1) != 0 )
            _enable();
        }
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v8, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v8, KeGetCurrentIrql(), (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v8, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v8, IoPriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v8, PagePriorityThread, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v8, (Queue >> 9) & 7, (ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter4);
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x800) != 0 )
          KeBugCheckEx(
            0x1D6u,
            (ULONG_PTR)v8,
            (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 11) & 1,
            (ULONG_PTR)v9,
            (ULONG_PTR)BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v8,
            v9,
            BugCheckParameter4);
          PreviousAffinity = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v3 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v3 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 146), &PreviousAffinity, 0LL);
          KeSetAffinityThread(CurrentThread, &PreviousAffinity);
        }
        if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v8,
            v9,
            BugCheckParameter4);
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
        }
      }
    }
    if ( v6 != 258 )
      goto LABEL_6;
LABEL_30:
    ;
  }
  while ( (*(_DWORD *)(BugCheckParameter2 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
        || *(_DWORD *)(BugCheckParameter2 + 4)) );
  _m_prefetchw((const void *)(BugCheckParameter2 + 712));
  v11 = *(_DWORD *)(BugCheckParameter2 + 712);
  do
  {
    v12 = (v11 & 0x3FFF) - 1;
    v13 = v11;
    if ( v12 < (2 * *(_DWORD *)(BugCheckParameter2 + 716)) >> 1 && (v11 & 0x8000) == 0 )
      goto LABEL_4;
    v14 = v11 & 0xFFFFC000 | v12;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 712), v14, v11);
  }
  while ( v11 != v13 );
  v15 = v14 == 0x8000;
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v15 )
    return KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 728), 0, 0);
  return result;
}
