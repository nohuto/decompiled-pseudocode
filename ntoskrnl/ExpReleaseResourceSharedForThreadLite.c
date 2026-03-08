/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x14025D990
 * Callers:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeAbPreWakeupHandle @ 0x1402390DC (KeAbPreWakeupHandle.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KeCaptureWaitChainHeadEx @ 0x1402D3E54 (KeCaptureWaitChainHeadEx.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405FE480 (PerfLogExecutiveResourceRelease.c)
 */

char __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
  bool v5; // r15
  unsigned int v6; // ecx
  ULONG_PTR v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbp
  struct _PROCESSOR_NUMBER v11; // ebp
  _DWORD *v12; // rsi
  int v13; // ecx
  bool v14; // zf
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // eax
  char v19; // si
  unsigned int v20; // r12d
  unsigned int v21; // esi
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  ULONG_PTR v24; // rsi
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // rcx
  ULONG_PTR v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  struct _KPRCB *v32; // r12
  int v33; // edx
  unsigned int Priority; // r9d
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // r8
  _DWORD *v42; // r9
  __int64 v43; // rdx
  char v44; // cl
  char v45; // al
  __int64 v46; // rcx
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  _QWORD *v50; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  unsigned __int8 v55; // cl
  _DWORD *v56; // r10
  __int64 v57; // r8
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v60; // rdx
  __int64 v61; // r9
  _QWORD *v62; // r10
  __int64 v63; // rcx
  char v64; // al
  int v65; // r9d
  _QWORD *v66; // r8
  _QWORD *v67; // rax
  signed __int32 v69[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+30h] [rbp-98h]
  __int64 v71; // [rsp+38h] [rbp-90h]
  _QWORD *v72; // [rsp+40h] [rbp-88h]
  _QWORD *v73; // [rsp+48h] [rbp-80h] BYREF
  __int64 v74; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v75; // [rsp+58h] [rbp-70h]
  struct _KPRCB *v76; // [rsp+60h] [rbp-68h]
  _KTHREAD *v77; // [rsp+68h] [rbp-60h]
  _QWORD *v78; // [rsp+70h] [rbp-58h]
  _QWORD *v79; // [rsp+78h] [rbp-50h]
  __int64 v80; // [rsp+80h] [rbp-48h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int i; // [rsp+D8h] [rbp+10h]
  unsigned int v83; // [rsp+E8h] [rbp+20h]

  v73 = 0LL;
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 1120);
  v7 = BugCheckParameter1 + 48;
  if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    v22 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( !v6
      || (v23 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v23 + 8)
      || (v7 = v23 + 16LL * v6, *(_QWORD *)v7 != BugCheckParameter2) )
    {
      v24 = *(_QWORD *)(BugCheckParameter1 + 16);
      v25 = v24;
      v26 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v24 || (v27 = v24 + 16LL * *(unsigned int *)(v24 + 8), v7 = v24 + 16, v22 >= v26) )
LABEL_85:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v25, 2uLL);
      while ( *(_QWORD *)v7 != BugCheckParameter2 )
      {
        if ( !*(_QWORD *)v7 || (++v22, v22 != v26) )
        {
          v7 += 16LL;
          if ( v7 != v27 )
            continue;
        }
        goto LABEL_85;
      }
      KeGetCurrentThread()->ResourceIndex = (__int64)(v7 - v25) >> 4;
    }
  }
  v8 = *(_DWORD *)(v7 + 8) & 7 | (8 * (*(_DWORD *)(v7 + 8) >> 3) - 8);
  *(_DWORD *)(v7 + 8) = v8;
  v9 = v8 >> 3;
  if ( !(v8 >> 3) )
  {
    v10 = *(_QWORD *)v7;
    if ( (v8 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
      goto LABEL_14;
    }
    if ( v10 )
    {
      if ( (v8 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIoEx(v10, BugCheckParameter2, 0LL, 0LL);
        *(_DWORD *)(v7 + 8) &= ~1u;
        v8 = *(_DWORD *)(v7 + 8);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1444));
        *(_DWORD *)(v7 + 8) &= ~4u;
        v8 = *(_DWORD *)(v7 + 8);
      }
      if ( (v8 & 2) != 0 )
      {
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v10, 0x746C6644u);
        *(_DWORD *)(v7 + 8) &= ~2u;
      }
    }
LABEL_14:
    *(_QWORD *)v7 = 0LL;
    v11 = (struct _PROCESSOR_NUMBER)1;
    v12 = (_DWORD *)(BugCheckParameter1 + 76);
    v83 = *(_DWORD *)(BugCheckParameter1 + 68);
    v74 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) <= 1u )
    {
      if ( *v12 )
      {
        KeCaptureWaitChainHeadEx(BugCheckParameter1 + 40, &v73, &v74);
        --*v12;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
        v13 = 1;
      }
      else
      {
        v13 = *(_DWORD *)(BugCheckParameter1 + 72);
        if ( !v13 )
          goto LABEL_17;
        v50 = *(_QWORD **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        v73 = v50;
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      }
LABEL_18:
      v14 = v13 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v13 - 1;
      if ( v14 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*v12 && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v15 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v74 )
      {
        *(_QWORD *)(BugCheckParameter1 + 48) = v74;
        *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
        goto LABEL_28;
      }
      _m_prefetchw(a3);
      v16 = *a3;
      if ( !*a3 )
      {
        if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
          goto LABEL_28;
        v16 = KxWaitForLockChainValid(a3);
      }
      *a3 = 0LL;
      v28 = a3[1];
      if ( (((unsigned __int8)v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), v28)) & 4) != 0 )
      {
        _InterlockedOr(v69, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v16 + 8) >> 5) & 0x7F], 0LL));
      }
LABEL_28:
      v17 = *((unsigned __int8 *)a3 + 16);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v14 = (v54 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v54;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v17);
      LOBYTE(v18) = 3;
      v19 = 1;
      if ( v74 )
        v19 = 3;
      if ( !v73 )
        goto LABEL_32;
      v31 = KeGetCurrentIrql();
      v80 = v31;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
      {
        v42 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v31 == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << ((unsigned __int8)v31 + 1)) & 4;
        v42[5] |= v43;
      }
      v32 = KeGetCurrentPrcb();
      v33 = v19 & 4;
      Priority = v32->CurrentThread->Priority;
      v35 = v73;
      for ( i = Priority; ; Priority = i )
      {
        v72 = v35;
        v36 = v35;
        v79 = (_QWORD *)*v35;
        if ( v33 && v35[6] )
        {
          KeAbPreWakeupHandle(v35[6], Priority);
          v36 = v72;
        }
        v71 = (__int64)(v36 + 3);
        KiAcquireKobjectLockSafe(v36 + 3);
        *((_DWORD *)v72 + 7) = 1;
        v37 = v71;
        v38 = *(_QWORD **)(v71 + 8);
        if ( v38 != (_QWORD *)(v71 + 8) )
          break;
LABEL_71:
        _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
        v35 = v79;
        if ( v79 == v73 )
        {
          v45 = KiRemoveBoostThread((__int64)v32, (__int64)v32->CurrentThread);
          if ( v15 )
          {
            v11 = (struct _PROCESSOR_NUMBER)2;
            if ( v45 > (char)v15 )
              v15 = v45;
          }
          if ( (v19 & 2) != 0 && v11 == 1 )
            v15 = 1;
          LOBYTE(v18) = KiExitDispatcher((__int64)v32, 0, v11, v15, v80);
LABEL_32:
          v20 = v83;
          v21 = 65602;
          v9 = 0;
          goto LABEL_33;
        }
        v33 = v19 & 4;
      }
      while ( 1 )
      {
        v39 = (__int64)v38;
        v72 = v38;
        v40 = (_QWORD *)*v38;
        v78 = v40;
        v41 = *(_QWORD **)(v39 + 8);
        if ( v40[1] != v39 || *v41 != v39 )
LABEL_61:
          __fastfail(3u);
        *v41 = v40;
        v40[1] = v41;
        v44 = *(_BYTE *)(v39 + 16);
        if ( v44 == 1 )
        {
          v14 = (unsigned __int8)KiTryUnwaitThread((__int64)v32, v39, *(unsigned __int16 *)(v39 + 18), 0LL) == 0;
          v37 = v71;
          if ( !v14 )
          {
            v14 = (*(_DWORD *)(v71 + 4))-- == 1;
            if ( v14 )
              goto LABEL_71;
          }
        }
        else
        {
          if ( v44 == 2 )
          {
            *(_BYTE *)(v39 + 17) = 5;
            v70 = *(_QWORD *)(v39 + 24);
            v75 = (_QWORD *)(v70 + 8);
            *(_QWORD *)v39 = 0LL;
            v55 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
            {
              v56 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v55 == 2 )
                LODWORD(v57) = 4;
              else
                v57 = (-1LL << (v55 + 1)) & 4;
              v56[5] |= v57;
            }
            v76 = KeGetCurrentPrcb();
            CurrentThread = v76->CurrentThread;
            v77 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v61, v60, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v70);
            v62 = v75;
            v63 = v70;
            if ( (_QWORD *)*v62 != v62
              && *(_DWORD *)(v70 + 40) < *(_DWORD *)(v70 + 44)
              && (v77->Queue != (_DISPATCHER_HEADER *volatile)v70 || v77->WaitReason != 15) )
            {
              v64 = KiWakeQueueWaiter(v76, v70, v72);
              v63 = v70;
              if ( v64 )
              {
                *v72 = 0LL;
                goto LABEL_125;
              }
              v62 = v75;
            }
            v65 = *(_DWORD *)(v63 + 4);
            *(_DWORD *)(v63 + 4) = v65 + 1;
            v66 = *(_QWORD **)(v63 + 32);
            if ( *v66 != v63 + 24 )
              goto LABEL_61;
            v67 = v72;
            *v72 = v63 + 24;
            v67[1] = v66;
            *v66 = v67;
            *(_QWORD *)(v63 + 32) = v67;
            if ( !v65 && (_QWORD *)*v62 != v62 )
            {
              KiWakeOtherQueueWaiters(v76, v63);
              v63 = v70;
            }
LABEL_125:
            _InterlockedAnd((volatile signed __int32 *)v63, 0xFFFFFF7F);
            v37 = v71;
            v14 = (*(_DWORD *)(v71 + 4))-- == 1;
            if ( v14 )
              goto LABEL_71;
            goto LABEL_131;
          }
          if ( v44 == 4 )
          {
            *(_BYTE *)(v39 + 17) = 5;
            *(_DWORD *)(v37 + 4) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v39 + 24), v37, v39, 0LL, 0);
          }
          else
          {
            KiTryUnwaitThread((__int64)v32, v39, 256LL, 0LL);
          }
          v37 = v71;
        }
LABEL_131:
        v38 = v78;
        if ( v78 == (_QWORD *)(v37 + 8) )
          goto LABEL_71;
      }
    }
LABEL_17:
    v13 = 0;
    goto LABEL_18;
  }
  v21 = 65618;
  v20 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(a3);
    v29 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_53;
      v29 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    v46 = a3[1];
    if ( (((unsigned __int8)v46 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v29 + 8), v46)) & 4) != 0 )
    {
      _InterlockedOr(v69, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v29 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_53;
  }
  KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
LABEL_53:
  LOBYTE(v18) = KiIrqlFlags;
  v30 = *((unsigned __int8 *)a3 + 16);
  if ( KiIrqlFlags )
  {
    v47 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v47 >= 2u )
    {
      v48 = KeGetCurrentPrcb();
      v49 = v48->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
      v14 = (v18 & v49[5]) == 0;
      v49[5] &= v18;
      if ( v14 )
        LOBYTE(v18) = KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  __writecr8(v30);
LABEL_33:
  __incgsdword(0x8A70u);
  if ( v5 )
    LOBYTE(v18) = PerfLogExecutiveResourceRelease(v21, BugCheckParameter1, v9, v20);
  return v18;
}
