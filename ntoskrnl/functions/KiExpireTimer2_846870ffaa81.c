__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  char *v5; // rdi
  char v6; // si
  unsigned __int64 InterruptTimePrecise; // r11
  __int64 v8; // r12
  _QWORD **v10; // r13
  char v11; // al
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  char v16; // al
  __int64 v17; // rsi
  _QWORD *v18; // r12
  unsigned __int8 v19; // cl
  struct _KPRCB *v20; // r15
  _KTHREAD *v21; // r9
  bool v22; // zf
  unsigned __int64 v23; // r14
  ULONG_PTR v24; // rsi
  volatile signed __int32 v25; // ecx
  int v26; // r8d
  unsigned int v27; // edx
  signed __int32 v28; // eax
  char v29; // r12
  __int64 result; // rax
  int v31; // edx
  __int64 *v32; // rcx
  unsigned __int64 v33; // r10
  char v34; // dl
  __int64 v35; // rax
  _DWORD *v36; // r9
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // r9
  _DWORD *v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rdi
  _DWORD *v43; // rdi
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 *v48; // r8
  unsigned __int64 v49; // r9
  unsigned __int8 v50; // al
  __int64 *v51; // rcx
  unsigned __int64 v52; // rcx
  char v53; // dl
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // r15
  __int64 v60; // rdi
  char v61; // al
  __int64 v62; // r8
  __int64 v63; // rsi
  _QWORD *v64; // r12
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v67; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  struct _KPRCB *v71; // r14
  int v72; // ecx
  __int64 *v73; // rdx
  signed __int32 v74; // ecx
  char v75; // cl
  char v76; // dl
  char v77; // cl
  char v78; // [rsp+30h] [rbp-79h]
  char v79; // [rsp+31h] [rbp-78h]
  char v80[2]; // [rsp+32h] [rbp-77h] BYREF
  int v81; // [rsp+34h] [rbp-75h]
  struct _KPRCB *v82; // [rsp+38h] [rbp-71h]
  __int64 v83; // [rsp+40h] [rbp-69h]
  __int64 v84; // [rsp+48h] [rbp-61h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-59h]
  LARGE_INTEGER v86; // [rsp+58h] [rbp-51h] BYREF
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
  v5 = (char *)(a1 + 129);
  v6 = 0;
  v87 = a4;
  v88 = 0LL;
  InterruptTimePrecise = a3;
  v89 = 0LL;
  v8 = a2;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  memset(v95, 0, sizeof(v95));
  v84 = a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v4 + 484);
  v90 = 0LL;
  v86.QuadPart = 0LL;
  v80[0] = 0;
  v81 = 0;
  v79 = 0;
  v83 = v4;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v88 = *(_QWORD *)(a1 + 72);
    v89 = *(_QWORD *)(a1 + 80);
    v90 = *(_QWORD *)(a1 + 88);
    v79 = *v5;
    v78 = 1;
  }
  else
  {
    v78 = 0;
  }
  if ( !*(_QWORD *)(a1 + 88) || (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_4;
  if ( (*v5 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v86);
  v33 = InterruptTimePrecise + *(_QWORD *)(a1 + 88);
  v34 = *v5;
  if ( v33 < InterruptTimePrecise || v33 == -1LL )
  {
    v6 = 1;
    v33 = -2LL;
  }
  if ( (v34 & 0xE) == 0 )
  {
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v34 & 0x10) != 0 )
        goto LABEL_41;
    }
    else
    {
      v48 = *(__int64 **)(a1 + 8);
      v49 = a1 + 8;
      if ( v48 == (__int64 *)(a1 + 8) )
      {
LABEL_68:
        if ( (v34 & 0x10) == 0 )
          goto LABEL_41;
        v53 = v34 & 0xEF;
        goto LABEL_84;
      }
      while ( 1 )
      {
        v50 = *((_BYTE *)v48 + 16);
        v51 = v48;
        v48 = (__int64 *)*v48;
        if ( v50 <= 1u )
        {
          if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v51[3] + 544)) )
            break;
        }
        if ( v48 == (__int64 *)v49 )
          goto LABEL_68;
      }
      if ( (v34 & 0x10) != 0 )
        goto LABEL_41;
    }
    v53 = v34 | 0x10;
LABEL_84:
    *v5 = v53;
    KiUpdateTimer2Collections(a1);
  }
LABEL_41:
  v35 = *(_QWORD *)(a1 + 80);
  if ( v35 != -1 )
  {
    v46 = v35 - *(_QWORD *)(a1 + 72);
    if ( v46 )
    {
      v52 = v46 + InterruptTimePrecise;
      if ( v46 + InterruptTimePrecise < InterruptTimePrecise || v52 == -1LL )
        v52 = -2LL;
      v47 = v52 + *(_QWORD *)(a1 + 88);
      if ( v47 < v52 || v47 == -1LL )
        v47 = -2LL;
    }
    else
    {
      v47 = v33;
    }
    *(_QWORD *)(a1 + 80) = v47;
  }
  *(_QWORD *)(a1 + 72) = v33;
  while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v80) )
  {
    if ( v6 )
      goto LABEL_4;
    v54 = *(_QWORD *)(a1 + 72);
    v55 = *(_QWORD *)(a1 + 88);
    v56 = v54 + v55;
    if ( v54 + v55 < v54 || v56 == -1 )
    {
      v6 = 1;
      v56 = -2LL;
    }
    *(_QWORD *)(a1 + 72) = v56;
    v57 = *(_QWORD *)(a1 + 80);
    if ( v57 != -1LL )
    {
      v58 = v57 + v55;
      if ( v57 + v55 < v57 || v58 == -1 )
        v58 = -2LL;
      *(_QWORD *)(a1 + 80) = v58;
    }
  }
  v81 = 1;
LABEL_4:
  v10 = (_QWORD **)(a1 + 8);
  v11 = *(_BYTE *)a1 & 0x7F;
  *(_DWORD *)(a1 + 4) = 1;
  if ( v11 != 25 )
  {
    v59 = *v10;
    if ( *v10 == v10 )
    {
LABEL_130:
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *v10 = v10;
LABEL_21:
      v4 = v83;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v60 = (__int64)v59;
      v59 = (_QWORD *)*v59;
      v61 = *(_BYTE *)(v60 + 16);
      if ( v61 == 1 )
      {
        v62 = *(unsigned __int16 *)(v60 + 18);
LABEL_128:
        KiTryUnwaitThread(v8, v60, v62, 0LL);
        goto LABEL_129;
      }
      if ( v61 == 2 )
        break;
      if ( v61 != 4 )
      {
        v62 = 256LL;
        goto LABEL_128;
      }
      *(_BYTE *)(v60 + 17) = 5;
      *(_DWORD *)(a1 + 4) = 0;
      KiInsertQueueDpc(*(_QWORD *)(v60 + 24), a1, v60, 0LL, 0);
LABEL_129:
      if ( v59 == v10 )
        goto LABEL_130;
    }
    *(_BYTE *)(v60 + 17) = 5;
    v63 = *(_QWORD *)(v60 + 24);
    *(_QWORD *)v60 = 0LL;
    v64 = (_QWORD *)(v63 + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v67) = 4;
      else
        v67 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v67;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v82 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, v60, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v63);
    if ( (_QWORD *)*v64 == v64
      || *(_DWORD *)(v63 + 40) >= *(_DWORD *)(v63 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v63 && CurrentThread->WaitReason == 15 )
    {
      v71 = v82;
    }
    else
    {
      v71 = v82;
      if ( (unsigned __int8)KiWakeQueueWaiter(v82, v63, v60) )
      {
        *(_QWORD *)v60 = 0LL;
LABEL_124:
        _InterlockedAnd((volatile signed __int32 *)v63, 0xFFFFFF7F);
        v8 = v84;
        goto LABEL_129;
      }
    }
    v72 = *(_DWORD *)(v63 + 4);
    *(_DWORD *)(v63 + 4) = v72 + 1;
    v73 = *(__int64 **)(v63 + 32);
    if ( *v73 != v63 + 24 )
      goto LABEL_7;
    *(_QWORD *)v60 = v63 + 24;
    *(_QWORD *)(v60 + 8) = v73;
    *v73 = v60;
    *(_QWORD *)(v63 + 32) = v60;
    if ( !v72 && (_QWORD *)*v64 != v64 )
      KiWakeOtherQueueWaiters(v71, v63);
    goto LABEL_124;
  }
  v12 = *v10;
  if ( *v10 != v10 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      v14 = (__int64)v12;
      v12 = v13;
      v15 = *(_QWORD **)(v14 + 8);
      if ( v13[1] != v14 || *v15 != v14 )
        break;
      *v15 = v13;
      v13[1] = v15;
      v16 = *(_BYTE *)(v14 + 16);
      switch ( v16 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(v8, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v22 = (*(_DWORD *)(a1 + 4))-- == 1;
            if ( v22 )
              goto LABEL_21;
          }
          break;
        case 2:
          *(_BYTE *)(v14 + 17) = 5;
          v17 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          v18 = (_QWORD *)(v17 + 8);
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
          {
            v36 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v19 == 2 )
              LODWORD(v37) = 4;
            else
              v37 = (-1LL << (v19 + 1)) & 4;
            v36[5] |= v37;
          }
          v20 = KeGetCurrentPrcb();
          v21 = v20->CurrentThread;
          v82 = (struct _KPRCB *)v21;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v38 = KeIsThreadRunning(v21);
            EtwTraceEnqueueWork(v39, v14, v38);
          }
          KiAcquireKobjectLockSafe(v17);
          if ( (_QWORD *)*v18 == v18
            || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
            || *(_QWORD *)&v82->CFlushSize == v17 && BYTE3(v82->ProcessorState.ContextFrame.Rbx) == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v20, v17, v14) )
          {
            v31 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = v31 + 1;
            v32 = *(__int64 **)(v17 + 32);
            if ( *v32 != v17 + 24 )
              goto LABEL_7;
            *(_QWORD *)v14 = v17 + 24;
            *(_QWORD *)(v14 + 8) = v32;
            *v32 = v14;
            *(_QWORD *)(v17 + 32) = v14;
            if ( !v31 && (_QWORD *)*v18 != v18 )
              KiWakeOtherQueueWaiters(v20, v17);
          }
          else
          {
            *(_QWORD *)v14 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          v22 = (*(_DWORD *)(a1 + 4))-- == 1;
          v8 = v84;
          if ( v22 )
            goto LABEL_21;
          break;
        case 4:
          *(_BYTE *)(v14 + 17) = 5;
          *(_DWORD *)(a1 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v14 + 24), a1, v14, 0LL, 0);
          break;
        default:
          KiTryUnwaitThread(v8, v14, 256LL, 0LL);
          break;
      }
      if ( v12 == v10 )
        goto LABEL_21;
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_22:
  v23 = 0LL;
  v24 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( v24 )
  {
    v23 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
    KiUpdateTimer2Flags((volatile signed __int32 *)a1, v81 | 0x10, 0);
    if ( *(_QWORD *)(v8 + 11528) )
      KiProcessThreadWaitList(v8, 1LL, 0LL);
    v29 = v78;
    if ( v78 )
      EtwGetKernelTraceTimestampSilo(v95, 1073872896LL, 0LL);
    v40 = v87;
    v41 = v84;
    v42 = ((*v87)++ & 0xF) + 1LL;
    v43 = &v40[4 * v42];
    *(_QWORD *)v43 = v24;
    v43[2] = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v41 + 33116) = 0;
    *(_BYTE *)(v41 + 13242) = 1;
    ((void (__fastcall *)(unsigned __int64, unsigned __int64))v24)(a1, v23);
    *(_BYTE *)(v41 + 13242) = 0;
    v43[3] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)a1);
    v44 = *(_DWORD *)a1;
    do
    {
      v45 = v44;
      v44 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v44 & 0xFFFFEFFF, v44);
    }
    while ( v45 != v44 );
    if ( (v44 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
  }
  else
  {
    v25 = *(_DWORD *)a1;
    v26 = v81 << 8;
    v27 = (v81 << 8) | *(_DWORD *)a1 & 0xFFFFF07F;
    v28 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v27, *(_DWORD *)a1);
    if ( v25 != v28 )
    {
      do
      {
        v74 = v28;
        v27 = v26 | v28 & 0xFFFFF07F;
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v27, v28);
      }
      while ( v74 != v28 );
    }
    if ( (v27 & 0x3F00) == 0x2000 )
      KiFinalizeTimer2Disablement(a1);
    v29 = v78;
  }
  result = *(unsigned int *)(v4 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v24, (unsigned int)BugCheckParameter3, *(unsigned int *)(v4 + 484));
  if ( v29 )
  {
    v92 = v24;
    v91 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v24 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v93 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v23), KiWaitNever));
    v75 = (2 * (v79 & 2)) | 8;
    if ( (v79 & 4) == 0 )
      v75 = 2 * (v79 & 2);
    v76 = v75;
    v77 = v75 | 0x10;
    if ( (v79 & 8) == 0 )
      v77 = v76;
    LOBYTE(v94) = v77;
    if ( v24 )
    {
      v77 |= 1u;
      LOBYTE(v94) = v77;
    }
    if ( v90 )
      LOBYTE(v94) = v77 | 2;
    if ( !v24 )
      EtwGetKernelTraceTimestampSilo(v95, 1073872896LL, 0LL);
    return EtwTraceTimedEvent(3945, 1073872896, (unsigned int)&v88, 56, 4197890, (__int64)v95);
  }
  return result;
}
