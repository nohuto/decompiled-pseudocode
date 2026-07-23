/*
 * XREFs of KiExpireTimer2 @ 0x14024AF30
 * Callers:
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiProcessThreadWaitList @ 0x14024AC40 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     PsTimerResolutionActive @ 0x14025F9D4 (PsTimerResolutionActive.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiInsertTimer2 @ 0x1402F0540 (KiInsertTimer2.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F1418 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     KiUpdateTimer2Flags @ 0x140348E54 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x140348F6C (KiFinalizeTimer2Disablement.c)
 *     KiUpdateTimer2Collections @ 0x1403A0204 (KiUpdateTimer2Collections.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, LARGE_INTEGER a3, _DWORD *a4)
{
  __int64 v4; // r15
  LARGE_INTEGER v6; // r11
  __int64 v7; // r12
  int v8; // r13d
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  char v11; // al
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  char v18; // di
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rsi
  _QWORD *v22; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r9
  bool v26; // zf
  unsigned __int64 v27; // r14
  ULONG_PTR v28; // rsi
  signed __int32 v29; // ecx
  int v30; // r13d
  unsigned int v31; // edx
  signed __int32 v32; // eax
  char v33; // r12
  __int64 result; // rax
  int v35; // edx
  _QWORD *v36; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v39; // r9
  _DWORD *v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rcx
  __int64 v43; // rdi
  _DWORD *v44; // rdi
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  char *v49; // r8
  char *v50; // r9
  bool v51; // cc
  char *v52; // rax
  unsigned __int64 v53; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v55; // dl
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rdi
  char v62; // al
  __int64 v63; // r8
  __int64 v64; // rsi
  _QWORD *v65; // r12
  unsigned __int8 v66; // cl
  _DWORD *v67; // r9
  struct _KPRCB *v68; // rax
  _KTHREAD *v69; // r15
  unsigned __int8 v70; // al
  __int64 v71; // r15
  int v72; // ecx
  _QWORD *v73; // rdx
  signed __int32 v74; // ecx
  char v75; // cl
  char v76; // dl
  char v77; // cl
  char v78; // [rsp+30h] [rbp-79h]
  char v79; // [rsp+31h] [rbp-78h]
  char v80; // [rsp+32h] [rbp-77h] BYREF
  char v81; // [rsp+33h] [rbp-76h]
  struct _KPRCB *v82; // [rsp+38h] [rbp-71h]
  __int64 v83; // [rsp+40h] [rbp-69h]
  __int64 v84; // [rsp+48h] [rbp-61h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-59h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v87; // [rsp+60h] [rbp-49h]
  __int64 v88; // [rsp+68h] [rbp-41h] BYREF
  __int64 v89; // [rsp+70h] [rbp-39h]
  __int64 v90; // [rsp+78h] [rbp-31h]
  __int64 v91; // [rsp+80h] [rbp-29h]
  ULONG_PTR v92; // [rsp+88h] [rbp-21h]
  __int64 v93; // [rsp+90h] [rbp-19h]
  __int64 v94; // [rsp+98h] [rbp-11h]
  _OWORD v95[2]; // [rsp+A0h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v87 = a4;
  v84 = a2;
  v6 = a3;
  v88 = 0LL;
  v7 = a2;
  v89 = 0LL;
  v8 = 0;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  memset(v95, 0, sizeof(v95));
  PerformanceCounter.QuadPart = 0LL;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v4 + 484);
  v90 = 0LL;
  v80 = 0;
  v79 = 0;
  v83 = v4;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    v88 = *(_QWORD *)(a1 + 72);
    v89 = *(_QWORD *)(a1 + 80);
    v79 = *(_BYTE *)(a1 + 129);
    v78 = 1;
    v90 = v9;
  }
  else
  {
    v78 = 0;
    v9 = *(_QWORD *)(a1 + 88);
  }
  if ( !v9 || (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_4;
  v16 = *(unsigned __int8 *)(a1 + 129);
  if ( (v16 & 4) != 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v9 = *(_QWORD *)(a1 + 88);
    v6 = InterruptTimePrecise;
    v16 = *(unsigned __int8 *)(a1 + 129);
  }
  v17 = v9 + v6.QuadPart;
  if ( (unsigned __int64)(v9 + v6.QuadPart) < v6.QuadPart || v17 == -1 )
  {
    v17 = -2LL;
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  v81 = v18;
  if ( (v16 & 0xE) == 0 )
  {
    if ( (KiVelocityFlags & 0x2000) != 0 )
    {
      v49 = *(char **)(a1 + 8);
      v50 = (char *)(a1 + 8);
      if ( v49 == (char *)(a1 + 8) )
      {
LABEL_66:
        if ( (v16 & 0x10) == 0 )
          goto LABEL_15;
        v55 = v16 & 0xEF;
        goto LABEL_82;
      }
      while ( 1 )
      {
        v51 = (unsigned __int8)v49[16] <= 1u;
        v52 = v49;
        v49 = *(char **)v49;
        if ( v51 )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(*((_QWORD *)v52 + 3) + 544LL), v16, v49) )
            break;
        }
        if ( v49 == v50 )
          goto LABEL_66;
      }
      if ( (v16 & 0x10) != 0 )
        goto LABEL_15;
    }
    else if ( (v16 & 0x10) != 0 )
    {
      goto LABEL_15;
    }
    v55 = v16 | 0x10;
LABEL_82:
    *(_BYTE *)(a1 + 129) = v55;
    KiUpdateTimer2Collections(a1);
  }
LABEL_15:
  v19 = *(_QWORD *)(a1 + 80);
  if ( v19 != -1 )
  {
    v47 = v19 - *(_QWORD *)(a1 + 72);
    if ( v47 )
    {
      v53 = v47 + v6.QuadPart;
      if ( (unsigned __int64)(v47 + v6.QuadPart) < v6.QuadPart || v53 == -1LL )
        v53 = -2LL;
      v48 = v53 + *(_QWORD *)(a1 + 88);
      if ( v48 < v53 || v48 == -1LL )
        v48 = -2LL;
    }
    else
    {
      v48 = v17;
    }
    *(_QWORD *)(a1 + 80) = v48;
  }
  *(_QWORD *)(a1 + 72) = v17;
  while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, &v80) )
  {
    if ( v18 )
      goto LABEL_4;
    v56 = *(_QWORD *)(a1 + 72);
    v57 = *(_QWORD *)(a1 + 88);
    v58 = v56 + v57;
    if ( v56 + v57 < v56 || v58 == -1 )
    {
      v58 = -2LL;
      v18 = 1;
    }
    *(_QWORD *)(a1 + 72) = v58;
    v59 = *(_QWORD *)(a1 + 80);
    v81 = v18;
    if ( v59 != -1LL )
    {
      v60 = v59 + v57;
      if ( v59 + v57 < v59 || v60 == -1 )
        v60 = -2LL;
      *(_QWORD *)(a1 + 80) = v60;
    }
  }
  v8 = 1;
LABEL_4:
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_BYTE *)a1 & 0x7F;
  v12 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v11 == 25 )
  {
    if ( v12 == v10 )
      goto LABEL_32;
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      v14 = v12;
      v12 = v13;
      v15 = (_QWORD *)v14[1];
      if ( (_QWORD *)v13[1] != v14 || (_QWORD *)*v15 != v14 )
        goto LABEL_7;
      *v15 = v13;
      v13[1] = v15;
      v20 = *((_BYTE *)v14 + 16);
      if ( v20 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v7, v14, *((unsigned __int16 *)v14 + 9), 0LL) )
        {
          v26 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v26 )
          {
LABEL_31:
            v4 = v83;
            goto LABEL_32;
          }
        }
      }
      else if ( v20 == 2 )
      {
        *((_BYTE *)v14 + 17) = 5;
        v21 = v14[3];
        *v14 = 0LL;
        v22 = (_QWORD *)(v21 + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        v82 = (struct _KPRCB *)CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentThread);
          EtwTraceEnqueueWork(v39, v14, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v21);
        if ( (_QWORD *)*v22 == v22
          || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
          || *(_QWORD *)&v82->CFlushSize == v21 && BYTE3(v82->ProcessorState.ContextFrame.Rbx) == 15
          || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v21, v14) )
        {
          v35 = *(_DWORD *)(v21 + 4);
          *(_DWORD *)(v21 + 4) = v35 + 1;
          v36 = *(_QWORD **)(v21 + 32);
          if ( *v36 != v21 + 24 )
            goto LABEL_7;
          *v14 = v21 + 24;
          v14[1] = v36;
          *v36 = v14;
          *(_QWORD *)(v21 + 32) = v14;
          if ( !v35 && (_QWORD *)*v22 != v22 )
            KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v21);
        }
        _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
        v26 = (*(_DWORD *)(a1 + 4))-- == 1;
        v7 = v84;
        if ( v26 )
          goto LABEL_31;
      }
      else
      {
        KiTryUnwaitThread(v7, v14, 256LL, 0LL);
      }
      if ( v12 == (_QWORD *)(a1 + 8) )
        goto LABEL_31;
    }
  }
  if ( v12 != v10 )
  {
    while ( 1 )
    {
      v61 = v12;
      v12 = (_QWORD *)*v12;
      v62 = *((_BYTE *)v61 + 16);
      if ( v62 == 1 )
      {
        v63 = *((unsigned __int16 *)v61 + 9);
LABEL_117:
        KiTryUnwaitThread(v7, v61, v63, 0LL);
        goto LABEL_118;
      }
      if ( v62 != 2 )
      {
        v63 = 256LL;
        goto LABEL_117;
      }
      *((_BYTE *)v61 + 17) = 5;
      v64 = v61[3];
      *v61 = 0LL;
      v65 = (_QWORD *)(v64 + 8);
      v66 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
      {
        v67 = KeGetCurrentPrcb()->SchedulerAssist;
        v67[5] |= (-1 << (v66 + 1)) & 4;
      }
      v68 = KeGetCurrentPrcb();
      v82 = v68;
      v69 = v68->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v70 = KeIsThreadRunning(v68->CurrentThread);
        EtwTraceEnqueueWork(v69, v61, v70);
      }
      KiAcquireKobjectLockSafe(v64);
      if ( (_QWORD *)*v65 == v65
        || *(_DWORD *)(v64 + 40) >= *(_DWORD *)(v64 + 44)
        || v69->Queue == (_DISPATCHER_HEADER *volatile)v64 && v69->WaitReason == 15 )
      {
        break;
      }
      v71 = (__int64)v82;
      if ( !(unsigned __int8)KiWakeQueueWaiter(v82, v64, v61) )
        goto LABEL_111;
LABEL_115:
      _InterlockedAnd((volatile signed __int32 *)v64, 0xFFFFFF7F);
      v7 = v84;
LABEL_118:
      v10 = (_QWORD *)(a1 + 8);
      if ( v12 == (_QWORD *)(a1 + 8) )
      {
        v4 = v83;
        goto LABEL_74;
      }
    }
    v71 = (__int64)v82;
LABEL_111:
    v72 = *(_DWORD *)(v64 + 4);
    *(_DWORD *)(v64 + 4) = v72 + 1;
    v73 = *(_QWORD **)(v64 + 32);
    if ( *v73 != v64 + 24 )
LABEL_7:
      __fastfail(3u);
    *v61 = v64 + 24;
    v61[1] = v73;
    *v73 = v61;
    *(_QWORD *)(v64 + 32) = v61;
    if ( !v72 && (_QWORD *)*v65 != v65 )
      KiWakeOtherQueueWaiters(v71, v64);
    goto LABEL_115;
  }
LABEL_74:
  v10[1] = v10;
  *v10 = v10;
LABEL_32:
  v27 = 0LL;
  v28 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v28 )
  {
    v27 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags(a1, v8 | 0x10u);
    if ( *(_QWORD *)(v7 + 11528) )
      KiProcessThreadWaitList(v7, 1u, 0, 2u);
    v33 = v78;
    if ( v78 )
      EtwGetKernelTraceTimestamp(v95, 1073872896LL);
    v40 = v87;
    v41 = v84;
    v42 = v84;
    v43 = ((*v87)++ & 0xF) + 1LL;
    v44 = &v40[4 * v43];
    *(_QWORD *)v44 = v28;
    v44[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v42 + 32412) = 0;
    KiResetGlobalDpcWatchdogProfiler(v42);
    *(_BYTE *)(v41 + 12586) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v28)(a1, v27);
    *(_BYTE *)(v41 + 12586) = 0;
    v44[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v45 = *(_DWORD *)a1;
    do
    {
      v46 = v45;
      v45 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v45 & 0xFFFFEFFF, v45);
    }
    while ( v46 != v45 );
    if ( (v45 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v29 = *(_DWORD *)a1;
    v30 = v8 << 8;
    v31 = v30 | *(_DWORD *)a1 & 0xFFFFF07F;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v31, *(_DWORD *)a1);
    if ( v29 != v32 )
    {
      do
      {
        v74 = v32;
        v31 = v30 | v32 & 0xFFFFF07F;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v31, v32);
      }
      while ( v74 != v32 );
    }
    if ( (v31 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v33 = v78;
  }
  result = *(unsigned int *)(v4 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v28, (unsigned int)BugCheckParameter3, *(unsigned int *)(v4 + 484));
  if ( v33 )
  {
    v92 = v28;
    v91 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v28 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v93 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v27 ^ KiWaitAlways), KiWaitNever));
    v75 = (2 * (v79 & 2)) | 8;
    if ( (v79 & 4) == 0 )
      v75 = 2 * (v79 & 2);
    v76 = v75;
    v77 = v75 | 0x10;
    if ( (v79 & 8) == 0 )
      v77 = v76;
    LOBYTE(v94) = v77;
    if ( v28 )
    {
      v77 |= 1u;
      LOBYTE(v94) = v77;
    }
    if ( v90 )
      LOBYTE(v94) = v77 | 2;
    if ( !v28 )
      EtwGetKernelTraceTimestamp(v95, 1073872896LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)&v88, 56, 4197890, (__int64)v95);
  }
  return result;
}
