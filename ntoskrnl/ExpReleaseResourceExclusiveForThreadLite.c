char __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
  bool v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // esi
  int v8; // eax
  signed __int64 v9; // rsi
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // eax
  char v16; // si
  struct _PROCESSOR_NUMBER v17; // r12d
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // edx
  unsigned int Priority; // r9d
  volatile signed __int32 *v25; // rax
  volatile signed __int32 *v26; // rcx
  __int64 v27; // rax
  volatile signed __int32 *v28; // rcx
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rcx
  volatile signed __int32 **v31; // r8
  _DWORD *v32; // r9
  __int64 v33; // rdx
  char v34; // cl
  bool v35; // zf
  struct _KPRCB *v36; // r14
  char v37; // al
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int8 v42; // cl
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  unsigned __int8 v49; // cl
  _DWORD *v50; // r10
  __int64 v51; // r8
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v54; // rdx
  __int64 v55; // r9
  volatile signed __int32 *v56; // r10
  volatile signed __int32 *v57; // rcx
  char v58; // al
  int v59; // r9d
  volatile signed __int32 **v60; // r8
  volatile signed __int32 *v61; // rax
  signed __int32 v63[8]; // [rsp+0h] [rbp-D8h] BYREF
  volatile signed __int32 *v64; // [rsp+30h] [rbp-A8h]
  __int64 v65; // [rsp+38h] [rbp-A0h]
  volatile signed __int32 *v66; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v67; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v68; // [rsp+50h] [rbp-88h]
  __int64 v69; // [rsp+58h] [rbp-80h] BYREF
  struct _KPRCB *v70; // [rsp+60h] [rbp-78h]
  volatile signed __int32 *v71; // [rsp+68h] [rbp-70h]
  struct _KPRCB *v72; // [rsp+70h] [rbp-68h]
  _KTHREAD *v73; // [rsp+78h] [rbp-60h]
  volatile signed __int32 *v74; // [rsp+80h] [rbp-58h]
  volatile signed __int32 *v75; // [rsp+88h] [rbp-50h]
  __int64 v76; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int i; // [rsp+F8h] [rbp+20h]

  v67 = 0LL;
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v6 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v6;
  v7 = v6 >> 3;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 56);
    v9 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( (v8 & 2) != 0 )
    {
      v9 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v9 & 3) != 0 )
    {
      goto LABEL_13;
    }
    if ( v9 )
    {
      if ( (v8 & 1) != 0 )
      {
        PsBoostThreadIoEx(v9, 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 1444));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 2) != 0 )
      {
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v9, 0x746C6644u);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v10 = *(_DWORD *)(BugCheckParameter1 + 72);
    v68 = *(_DWORD *)(BugCheckParameter1 + 68);
    v69 = 0LL;
    if ( v10 )
    {
      v38 = *(_QWORD *)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v39 = *(_DWORD *)(BugCheckParameter1 + 64);
      v67 = (volatile signed __int32 *)v38;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v11 = v10 + v39 - 1;
    }
    else if ( *(_DWORD *)(BugCheckParameter1 + 76) )
    {
      KeCaptureWaitChainHeadEx((_QWORD **)(BugCheckParameter1 + 40), (__int64 *)&v67, &v69);
      v11 = *(_DWORD *)(BugCheckParameter1 + 64);
      --*(_DWORD *)(BugCheckParameter1 + 76);
    }
    else
    {
      *(_WORD *)(BugCheckParameter1 + 24) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v11 = 0;
    }
    *(_DWORD *)(BugCheckParameter1 + 64) = v11;
    if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
      *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
    v12 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
    if ( v69 )
    {
      *(_QWORD *)(BugCheckParameter1 + 48) = v69;
      *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(a3);
    v13 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_24;
      v13 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    v40 = a3[1];
    if ( (((unsigned __int8)v40 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v13 + 8), v40)) & 4) != 0 )
    {
      _InterlockedOr(v63, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v13 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_24:
    v14 = *((unsigned __int8 *)a3 + 16);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v35 = (v48 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v48;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v14);
    LOBYTE(v15) = 3;
    v16 = 1;
    v17 = (struct _PROCESSOR_NUMBER)1;
    if ( v69 )
      v16 = 3;
    if ( !v67 )
      goto LABEL_28;
    v22 = KeGetCurrentIrql();
    v76 = v22;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v22 <= 0xFu )
    {
      v32 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)v22 == 2 )
        LODWORD(v33) = 4;
      else
        v33 = (-1LL << ((unsigned __int8)v22 + 1)) & 4;
      v32[5] |= v33;
    }
    v70 = KeGetCurrentPrcb();
    v23 = v16 & 4;
    Priority = v70->CurrentThread->Priority;
    v25 = v67;
    for ( i = Priority; ; Priority = i )
    {
      v66 = v25;
      v26 = v25;
      v75 = *(volatile signed __int32 **)v25;
      if ( v23 && *((_QWORD *)v25 + 6) )
      {
        KeAbPreWakeupHandle(*((_QWORD *)v25 + 6), Priority);
        v26 = v66;
      }
      v65 = (__int64)(v26 + 6);
      KiAcquireKobjectLockSafe(v26 + 6);
      *((_DWORD *)v66 + 7) = 1;
      v27 = v65;
      v28 = *(volatile signed __int32 **)(v65 + 8);
      if ( v28 != (volatile signed __int32 *)(v65 + 8) )
        break;
LABEL_51:
      _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
      v25 = v75;
      if ( v75 == v67 )
      {
        v36 = v70;
        v37 = KiRemoveBoostThread((__int64)v70, (__int64)v70->CurrentThread);
        if ( v12 )
        {
          v17 = (struct _PROCESSOR_NUMBER)2;
          if ( v37 > (char)v12 )
            v12 = v37;
        }
        if ( (v16 & 2) != 0 && v17 == 1 )
          v12 = 1;
        LOBYTE(v15) = KiExitDispatcher((__int64)v36, 0, v17, v12, v76);
LABEL_28:
        v18 = v68;
        v19 = 65570;
        v7 = 0;
        goto LABEL_29;
      }
      v23 = v16 & 4;
    }
    while ( 1 )
    {
      v29 = (__int64)v28;
      v66 = v28;
      v30 = *(volatile signed __int32 **)v28;
      v74 = v30;
      v31 = *(volatile signed __int32 ***)(v29 + 8);
      if ( *((_QWORD *)v30 + 1) != v29 || *v31 != (volatile signed __int32 *)v29 )
LABEL_42:
        __fastfail(3u);
      *v31 = v30;
      *((_QWORD *)v30 + 1) = v31;
      v34 = *(_BYTE *)(v29 + 16);
      if ( v34 == 1 )
      {
        v35 = (unsigned __int8)KiTryUnwaitThread((__int64)v70, v29, *(unsigned __int16 *)(v29 + 18), 0LL) == 0;
        v27 = v65;
        if ( !v35 )
        {
          v35 = (*(_DWORD *)(v65 + 4))-- == 1;
          if ( v35 )
            goto LABEL_51;
        }
      }
      else
      {
        if ( v34 == 2 )
        {
          *(_BYTE *)(v29 + 17) = 5;
          v64 = *(volatile signed __int32 **)(v29 + 24);
          v71 = v64 + 2;
          *(_QWORD *)v29 = 0LL;
          v49 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
          {
            v50 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v49 == 2 )
              LODWORD(v51) = 4;
            else
              v51 = (-1LL << (v49 + 1)) & 4;
            v50[5] |= v51;
          }
          v72 = KeGetCurrentPrcb();
          CurrentThread = v72->CurrentThread;
          v73 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v55, v54, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v64);
          v56 = v71;
          v57 = v64;
          if ( *(volatile signed __int32 **)v56 != v56
            && *((_DWORD *)v64 + 10) < *((_DWORD *)v64 + 11)
            && ((volatile signed __int32 *)v73->Queue != v64 || v73->WaitReason != 15) )
          {
            v58 = KiWakeQueueWaiter(v72, v64, v66);
            v57 = v64;
            if ( v58 )
            {
              *(_QWORD *)v66 = 0LL;
              goto LABEL_111;
            }
            v56 = v71;
          }
          v59 = *((_DWORD *)v57 + 1);
          *((_DWORD *)v57 + 1) = v59 + 1;
          v60 = (volatile signed __int32 **)*((_QWORD *)v57 + 4);
          if ( *v60 != v57 + 6 )
            goto LABEL_42;
          v61 = v66;
          *(_QWORD *)v66 = v57 + 6;
          *((_QWORD *)v61 + 1) = v60;
          *v60 = v61;
          *((_QWORD *)v57 + 4) = v61;
          if ( !v59 && *(volatile signed __int32 **)v56 != v56 )
          {
            KiWakeOtherQueueWaiters((__int64)v72, (__int64)v57);
            v57 = v64;
          }
LABEL_111:
          _InterlockedAnd(v57, 0xFFFFFF7F);
          v27 = v65;
          v35 = (*(_DWORD *)(v65 + 4))-- == 1;
          if ( v35 )
            goto LABEL_51;
          goto LABEL_117;
        }
        if ( v34 == 4 )
        {
          *(_BYTE *)(v29 + 17) = 5;
          *(_DWORD *)(v27 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v29 + 24), v27, v29, 0LL, 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)v70, v29, 256LL, 0LL);
        }
        v27 = v65;
      }
LABEL_117:
      v28 = v74;
      if ( v74 == (volatile signed __int32 *)(v27 + 8) )
        goto LABEL_51;
    }
  }
  v19 = 65586;
  v18 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(a3);
    v20 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_35;
      v20 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    v41 = a3[1];
    if ( (((unsigned __int8)v41 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), v41)) & 4) != 0 )
    {
      _InterlockedOr(v63, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v20 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_35;
  }
  KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
LABEL_35:
  LOBYTE(v15) = KiIrqlFlags;
  v21 = *((unsigned __int8 *)a3 + 16);
  if ( KiIrqlFlags )
  {
    v42 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v42 >= 2u )
    {
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v35 = (v15 & v44[5]) == 0;
      v44[5] &= v15;
      if ( v35 )
        LOBYTE(v15) = KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  __writecr8(v21);
LABEL_29:
  __incgsdword(0x8A6Cu);
  if ( v5 )
    LOBYTE(v15) = PerfLogExecutiveResourceRelease(v19, BugCheckParameter1, v7, v18);
  return v15;
}
