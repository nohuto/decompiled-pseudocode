char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  char v4; // si
  __int64 v5; // r14
  __int64 v7; // r13
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // r8
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 *v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // ecx
  __int64 v22; // rsi
  _QWORD *v23; // r15
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v29; // r8
  int v30; // r8d
  __int64 *v31; // rdx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]
  unsigned int v36; // [rsp+90h] [rbp+18h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  v3 = &retaddr;
  v35 = a2;
  v36 = 0;
  v34 = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 740) = 1;
  v5 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v34);
      v3 = *(_UNKNOWN ***)(a1 + 64);
    }
    while ( v3 );
  }
  if ( *(_BYTE *)(a1 + 388) != 5 )
    goto LABEL_4;
  LOBYTE(v3) = *(_BYTE *)(a1 + 112) & 7;
  if ( (_BYTE)v3 != 4 )
    goto LABEL_4;
  if ( v4 )
    goto LABEL_13;
  v13 = 0;
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
  *(_QWORD *)(a1 + 64) = 0LL;
  v14 = *(_BYTE *)(a1 + 587);
  if ( !v14 )
    goto LABEL_29;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 208) + 48LL * v13;
    if ( *(_BYTE *)(v15 + 17) == 6 )
      break;
LABEL_27:
    if ( ++v13 >= v14 )
      goto LABEL_28;
  }
  v16 = *(_QWORD *)(v15 + 32);
  *(_BYTE *)(v15 + 17) = 4;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v16);
  if ( *(int *)(v16 + 4) <= 0 && (*(_BYTE *)v16 & 0x7F) != 2 )
  {
    v17 = *(__int64 **)(v16 + 16);
    if ( *v17 != v16 + 8 )
LABEL_76:
      __fastfail(3u);
    *(_QWORD *)v15 = v16 + 8;
    *(_QWORD *)(v15 + 8) = v17;
    *v17 = v15;
    *(_QWORD *)(v16 + 16) = v15;
    _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    goto LABEL_27;
  }
  _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
  *(_BYTE *)(v15 + 17) = 5;
  v4 = 1;
LABEL_28:
  v5 = v35;
LABEL_29:
  v18 = 0;
  if ( _bittest((const signed __int32 *)(a1 + 116), 0x11u) && !v4 )
  {
    v19 = *(_QWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 256) |= 0x40000080u;
    if ( (unsigned int)KiComputeDueTime((int *)(a1 + 256), v19, 0, &v36) )
    {
      if ( KiInsertTimerTable(v5, a1 + 256, 0LL, v36, 0LL) )
      {
        if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
        {
          LOBYTE(a3) = 1;
          KiTraceSetTimer(a1 + 256, 0LL, a3);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
        }
      }
      else
      {
        KiTimerWaitTest(v5, a1 + 256, 0LL);
      }
      v18 = 1;
    }
    else
    {
      v4 = 1;
      v18 = 0;
    }
  }
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v37);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v20 = *(_BYTE *)(a1 + 112) & 0xE7;
  v21 = (v18 << 9) & 0xFFFDFFFF | *(_DWORD *)(a1 + 116) & 0xFFFDFDFF;
  *(_DWORD *)(a1 + 116) = v21;
  if ( v20 != 5 || (unsigned int)KiTestForAlertPending(a1, (v21 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
  {
    v4 = 1;
  }
  else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
  {
    v4 = 1;
  }
LABEL_13:
  LOBYTE(v3) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  *(_BYTE *)(a1 + 112) = (_BYTE)v3;
LABEL_4:
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      LOBYTE(v3) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v3 == 5 )
        LOBYTE(v3) = KiSignalThread(v5, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      LOBYTE(v3) = KiSignalThreadForApc(v5, a1 + 648, a3);
    }
  }
  v7 = a1 + 736;
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = (_QWORD *)(a1 + 744);
  v9 = *(_QWORD **)(a1 + 744);
  if ( v9 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v10 = (__int64)v9;
      v9 = (_QWORD *)*v9;
      v11 = *(_BYTE *)(v10 + 16);
      if ( v11 == 1 )
        break;
      if ( v11 == 2 )
      {
        *(_BYTE *)(v10 + 17) = 5;
        v22 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)v10 = 0LL;
        v23 = (_QWORD *)(v22 + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v26) = 4;
          else
            v26 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v26;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v29) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v10, v29);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v22);
        if ( (_QWORD *)*v23 == v23
          || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v22 && CurrentThread->WaitReason == 15
          || (LOBYTE(v3) = KiWakeQueueWaiter((__int64)CurrentPrcb, v22, v10), !(_BYTE)v3) )
        {
          v30 = *(_DWORD *)(v22 + 4);
          *(_DWORD *)(v22 + 4) = v30 + 1;
          v3 = (_UNKNOWN **)(v22 + 24);
          v31 = *(__int64 **)(v22 + 32);
          if ( *v31 != v22 + 24 )
            goto LABEL_76;
          *(_QWORD *)v10 = v3;
          *(_QWORD *)(v10 + 8) = v31;
          *v31 = v10;
          *(_QWORD *)(v22 + 32) = v10;
          if ( !v30 && (_QWORD *)*v23 != v23 )
            LOBYTE(v3) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v22);
        }
        else
        {
          *(_QWORD *)v10 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
      }
      else
      {
        if ( v11 != 4 )
        {
          v12 = 256LL;
          goto LABEL_16;
        }
        *(_BYTE *)(v10 + 17) = 5;
        *(_DWORD *)(v7 + 4) = 0;
        LOBYTE(v3) = KiInsertQueueDpc(*(_QWORD *)(v10 + 24), v7, v10, 0LL, 0);
      }
LABEL_17:
      if ( v9 == v8 )
        goto LABEL_8;
      v5 = v35;
    }
    v12 = *(unsigned __int16 *)(v10 + 18);
LABEL_16:
    LOBYTE(v3) = KiTryUnwaitThread(v5, v10, v12, 0LL);
    goto LABEL_17;
  }
LABEL_8:
  v8[1] = v8;
  *v8 = v8;
  return (char)v3;
}
