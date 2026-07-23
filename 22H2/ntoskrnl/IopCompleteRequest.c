/*
 * XREFs of IopCompleteRequest @ 0x1402C31B0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140890E50 (IopAbortRequest.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402D3F10 (IopDequeueIrpFromThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     IopFreeIrpExtension @ 0x1402E5F78 (IopFreeIrpExtension.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x14031DCAC (IopInterlockedAdd.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     IopDequeueIrpFromFileObject @ 0x14035AA98 (IopDequeueIrpFromFileObject.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0594 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F065C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F0790 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F08A0 (IopUpdateIrpTransferCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1405006E0 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1405007A4 (IopFreeReserveIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C51E0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  _SLIST_ENTRY *v6; // r14
  ULONG_PTR v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 *v11; // r15
  __int16 v12; // ax
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _DMA_ADAPTER *v16; // rcx
  __int64 v17; // rcx
  struct _KEVENT *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  volatile signed __int32 *v22; // r15
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v25; // rdi
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  unsigned __int8 v36; // al
  bool v37; // cf
  struct _KTHREAD *v38; // r10
  volatile signed __int32 *v39; // r15
  struct _KPRCB *v40; // rdi
  _DWORD *v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  volatile signed __int64 *p_Thread; // rcx
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  int v54; // eax
  bool v55; // zf
  int v56; // ecx
  __int64 v57; // rdx
  int v58; // r8d
  __int64 v59; // r8
  int v60; // ecx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r8
  __int64 v63; // r9
  ULONG_PTR v64; // rcx
  __int64 v65; // rdx
  char v66; // al
  __int64 v67; // rcx
  struct _KPRCB *v68; // rdx
  char v69; // al
  __int16 v70; // r9
  __int64 v71; // r9
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // rdi
  char v75; // al
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  __int64 v77; // [rsp+50h] [rbp-68h]
  _SLIST_ENTRY *v78; // [rsp+58h] [rbp-60h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v80; // [rsp+C0h] [rbp+8h]
  struct _DMA_ADAPTER *Object; // [rsp+D8h] [rbp+20h]

  v6 = (_SLIST_ENTRY *)(a1 - 120);
  v78 = (_SLIST_ENTRY *)(a1 - 120);
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  if ( !a3 || (v80 = 1, *a3 != 1LL) )
    v80 = 0;
  v8 = *(_DWORD *)(a1 - 104);
  if ( (v8 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(a1 - 72);
    *(_QWORD *)(a1 + 40) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v8 & 0x2000) != 0 )
    v9 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v9 = 0LL;
  IopProcessBufferedIoCompletion(a1 - 120);
  v10 = *(__int64 **)(a1 - 112);
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      v12 = *((_WORD *)v10 + 5);
      if ( (v12 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v10[3], (PMDL)v10);
        v12 = *((_WORD *)v10 + 5);
      }
      if ( (v12 & 8) != 0 )
      {
        v13 = *((unsigned __int16 *)v10 + 6);
        if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v13];
        }
        if ( !CurrentPrcb )
          CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[3].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v10);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(__int64 *))P->FreeEx)(v10);
        }
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
      }
      v10 = v11;
    }
    while ( v11 );
    v6 = v78;
  }
  *(_QWORD *)(a1 - 112) = 0LL;
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(a1 - 55) )
  {
    v16 = *(struct _DMA_ADAPTER **)(a1 - 40);
    if ( v16 && v7 && (*(_DWORD *)(a1 - 104) & 4) == 0 )
      HalPutDmaAdapter(v16);
    goto LABEL_45;
  }
  v17 = *(_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(a1 - 64);
  else
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(a1 - 64);
  *(_DWORD *)v17 = *(_DWORD *)(a1 - 72);
  v18 = *(struct _KEVENT **)(a1 - 40);
  if ( !v18 )
  {
    if ( !v7 )
      goto LABEL_45;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
    {
LABEL_44:
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(a1 - 72);
      goto LABEL_45;
    }
LABEL_43:
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    goto LABEL_44;
  }
  KeSetEvent(v18, 0, 0);
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 - 104) & 4) == 0 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 - 40));
    if ( (*(_DWORD *)(v7 + 80) & 2) != 0 && (*(_DWORD *)(a1 - 104) & 0x1000) == 0 )
      goto LABEL_43;
  }
LABEL_45:
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) != 0xC0000000
    || *(_BYTE *)(a1 - 55) && (*(_DWORD *)(a1 - 104) & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
    Object = 0LL;
    v77 = 0LL;
    if ( v7 )
    {
      v19 = *(_QWORD *)(v7 + 176);
      if ( v19 )
      {
        if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
        {
          Object = *(struct _DMA_ADAPTER **)v19;
          v77 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v7);
        }
        if ( Object )
          ObfReferenceObject(Object);
      }
    }
    IopUpdateIrpTransferCount(v6, v9);
    if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
    {
      v22 = (volatile signed __int32 *)(v7 + 184);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v7 + 184);
      }
      else
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v27 = v26[6];
            v26[6] = v27 + 1;
            if ( v27 == -1 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        if ( _interlockedbittestandset64(v22, 0LL) )
        {
          v28 = v25->SchedulerAssist;
          if ( v28 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v29 = v28[6] - 1;
              v28[6] = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
          KxWaitForSpinLockAndAcquire(v7 + 184);
        }
      }
      v30 = (_QWORD *)(a1 - 88);
      v31 = *(_QWORD *)(a1 - 88);
      v32 = *(_QWORD **)(a1 - 88 + 8);
      if ( *(_QWORD *)(v31 + 8) == a1 - 88 && (_QWORD *)*v32 == v30 )
      {
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        v30[1] = v30;
        *v30 = v30;
        ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
        *(_DWORD *)(a1 - 104) = *(_DWORD *)(a1 - 104) & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v35 = v34[6] - 1;
            v34[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        if ( !KiIrqlFlags )
          goto LABEL_133;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_133;
        v36 = KeGetCurrentIrql();
        if ( v36 > 0xFu || CurrentIrql > 0xFu )
          goto LABEL_133;
        v37 = v36 < 2u;
        goto LABEL_130;
      }
    }
    else
    {
      v38 = CurrentThread;
      *(_QWORD *)(a1 + 32) = CurrentThread;
      CurrentIrql = 0;
      if ( CurrentThread )
      {
        v39 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[24];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v21 = KeGetCurrentPrcb()->SchedulerAssist;
          v20 = (-1 << (CurrentIrql + 1)) & 4u | v21[5];
          v21[5] = v20;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[24]);
        }
        else
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          if ( v41 )
          {
            if ( v40->NestingLevel <= 1u )
            {
              v42 = v41[6];
              v41[6] = v42 + 1;
              if ( v42 == -1 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
          if ( _interlockedbittestandset64(v39, 0LL) )
          {
            v43 = v40->SchedulerAssist;
            if ( v43 )
            {
              if ( v40->NestingLevel <= 1u )
              {
                v44 = v43[6] - 1;
                v43[6] = v44;
                if ( !v44 )
                  KiRemoveSystemWorkPriorityKick(v40);
              }
            }
            KxWaitForSpinLockAndAcquire(v39);
          }
        }
        v38 = CurrentThread;
      }
      v45 = (_QWORD *)(a1 - 88);
      v46 = *(_QWORD *)(a1 - 88);
      v47 = *(_QWORD **)(a1 - 88 + 8);
      if ( *(_QWORD *)(v46 + 8) == a1 - 88 && (_QWORD *)*v47 == v45 )
      {
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
        v45[1] = v45;
        *v45 = v45;
        if ( !v38 )
        {
LABEL_134:
          v56 = *(_DWORD *)(a1 - 104) & 0x8000;
          if ( !v56 )
          {
            *(_QWORD *)(a1 - 32) &= ~1uLL;
            v57 = *(_QWORD *)(a1 - 32);
            if ( v57 )
            {
              if ( v80 )
                v58 = *(char *)(a1 - 50);
              else
                v58 = 2;
              KeInitializeApc(
                a1,
                (_DWORD)v38,
                v58,
                (unsigned int)IopUserRundown,
                (__int64)IopUserRundown,
                v57,
                *(_BYTE *)(a1 - 56),
                *(_QWORD *)(a1 - 24));
              KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2);
              goto LABEL_185;
            }
          }
          if ( Object
            && *(_QWORD *)(a1 - 24)
            && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
             || *(_BYTE *)(a1 - 55)
             || (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0x80000000) )
          {
            v59 = 0LL;
            v60 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v60 == 8 || v60 == 20 )
              v59 = 1LL;
            *(_QWORD *)a1 = v77;
            *(_DWORD *)(a1 + 64) = 0;
            KeInsertQueueEx(Object, a1 + 48, v59, 0LL);
            goto LABEL_185;
          }
          if ( v56 )
          {
            v61 = *(_QWORD *)(a1 - 32);
            do
            {
              v62 = v61;
              v63 = ((v61 >> 1) & 3) - 1;
              v61 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(a1 - 32),
                      v61 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v63),
                      v61);
            }
            while ( v62 != v61 );
            if ( (_DWORD)v63 )
              goto LABEL_185;
            v64 = (ULONG_PTR)v6;
            if ( !IopDispatchFreeIrp )
            {
              IopFreeIrp((ULONG_PTR)v6);
              goto LABEL_185;
            }
          }
          else
          {
            if ( !IopDispatchFreeIrp )
            {
              v65 = 0LL;
              if ( LOWORD(v6->Next) != 6 )
                KeBugCheckEx(IopDispatchFreeIrp + 68, (ULONG_PTR)v6, 0x2636uLL, 0LL, 0LL);
              LOWORD(v6->Next) = 0;
              v66 = *(_BYTE *)(a1 - 49);
              if ( (v66 & 0x40) != 0 )
              {
                LOBYTE(v20) = 1;
                IopFreeIrpExtension(v6, 0xFFFFFFFFLL, v20, v21);
                v66 = *(_BYTE *)(a1 - 49);
              }
              if ( (v66 & 0x21) == 0x21 )
              {
                IopFreeReserveIrp(v6, v65);
              }
              else
              {
                v67 = *(unsigned __int16 *)(a1 - 116);
                if ( (unsigned int)v67 >= (unsigned int)KeNumberProcessors_0 )
                {
                  v68 = KeGetCurrentPrcb();
                }
                else
                {
                  _mm_lfence();
                  v68 = (struct _KPRCB *)KiProcessorBlock[v67];
                }
                v69 = *(_BYTE *)(a1 - 49);
                if ( (v69 & 8) != 0 )
                {
                  *(_BYTE *)(a1 - 49) = v69 ^ 8;
                  _InterlockedIncrement(&v68->LookasideIrpFloat);
                  v69 = *(_BYTE *)(a1 - 49);
                }
                if ( (v69 & 4) != 0 )
                {
                  if ( (IopIrpStackProfilerFlags & 3) == 0
                    || (v70 = *(_WORD *)(a1 - 118), v70 == 72 * (char)IopLargeIrpStackLocations + 208)
                    || v70 == 72 * (char)IopMediumIrpStackLocations + 208
                    || v70 == 280 )
                  {
                    v71 = *(unsigned __int16 *)(a1 - 118);
                    if ( (unsigned __int16)v71 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                    {
                      if ( (unsigned __int16)v71 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                      {
                        v72 = 2048LL;
                        v73 = 2056LL;
                      }
                      else
                      {
                        v72 = 2064LL;
                        v73 = 2072LL;
                      }
                    }
                    else
                    {
                      v72 = 2080LL;
                      v73 = 2088LL;
                    }
                    *(_QWORD *)(a1 - 64) = v71;
                    v74 = *(_QWORD *)((char *)&v68->MxCsr + v72);
                    ++*(_DWORD *)(v74 + 28);
                    if ( *(_WORD *)v74 < *(_WORD *)(v74 + 16)
                      || (++*(_DWORD *)(v74 + 32),
                          v74 = *(_QWORD *)((char *)&v68->MxCsr + v73),
                          ++*(_DWORD *)(v74 + 28),
                          *(_WORD *)v74 < *(_WORD *)(v74 + 16)) )
                    {
                      v75 = *(_BYTE *)(a1 - 49);
                      if ( (v75 & 1) != 0 )
                      {
                        *(_BYTE *)(a1 - 49) = v75 ^ 1;
                        ExReturnPoolQuota(v6, v68, 208LL);
                      }
                      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v74, v6);
                      goto LABEL_185;
                    }
                    ++*(_DWORD *)(v74 + 32);
                  }
                }
                ExFreePoolWithTag(v6, 0);
              }
LABEL_185:
              if ( Object )
                HalPutDmaAdapter(Object);
              if ( v7 )
                ObDereferenceObjectDeferDelete((PVOID)v7);
              return;
            }
            v64 = (ULONG_PTR)v6;
          }
          IovFreeIrpPrivate(v64);
          goto LABEL_185;
        }
        p_Thread = (volatile signed __int64 *)&v38[1].WaitBlock[0].Thread;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(p_Thread, retaddr);
        else
          _InterlockedAnd64(p_Thread, 0LL);
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        if ( v50 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v49);
          }
        }
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v52 = KeGetCurrentIrql(), v52 > 0xFu) || CurrentIrql > 0xFu )
        {
LABEL_133:
          LODWORD(v38) = (_DWORD)CurrentThread;
          __writecr8(CurrentIrql);
          goto LABEL_134;
        }
        v37 = v52 < 2u;
LABEL_130:
        if ( !v37 )
        {
          v53 = KeGetCurrentPrcb();
          v21 = v53->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v55 = (v54 & v21[5]) == 0;
          v20 = (unsigned int)v54 & v21[5];
          v21[5] = v20;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
        goto LABEL_133;
      }
    }
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v6, v7);
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
  if ( (*(_DWORD *)(a1 - 104) & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd(a1 - 32, 0xFFFFFFFFLL) )
      return;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = CurrentThread;
    IopDequeueIrpFromThread(v6);
  }
  IoFreeIrp((PIRP)v6);
}
