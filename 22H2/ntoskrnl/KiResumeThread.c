/*
 * XREFs of KiResumeThread @ 0x1403428E0
 * Callers:
 *     KiThawSingleThread @ 0x140315220 (KiThawSingleThread.c)
 *     KeForceResumeThread @ 0x14034281C (KeForceResumeThread.c)
 *     KeResumeThread @ 0x140343158 (KeResumeThread.c)
 *     KiAdjustThreadTimer @ 0x14051EF14 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiTestForAlertPending @ 0x1402030B4 (KiTestForAlertPending.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiSignalThread @ 0x140245E10 (KiSignalThread.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiComputeDueTime @ 0x14025F910 (KiComputeDueTime.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x1402C8690 (KiInsertTimerTable.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x1403436D0 (KiSignalThreadForApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x140523A9C (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int8 v17; // r15
  unsigned __int8 i; // r14
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 *v21; // rcx
  int v22; // edi
  struct _KPRCB *v23; // rsi
  _DWORD *v24; // rcx
  unsigned int v25; // edi
  char v26; // al
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // r8
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rdi
  _QWORD *v38; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v40; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v42; // r8
  int v43; // ecx
  int v45; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+18h] BYREF
  int v47; // [rsp+88h] [rbp+20h] BYREF

  v46 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v4 = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = SchedulerAssist[6];
        SchedulerAssist[6] = v32 + 1;
        if ( v32 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v30 = CurrentPrcb->SchedulerAssist;
    if ( v30 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = v30[6] - 1;
        v30[6] = v33;
        if ( !v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v45, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !v4 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v17 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v17; ++i )
      {
        v19 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v19 + 17) == 6 )
        {
          v20 = *(_QWORD *)(v19 + 32);
          *(_BYTE *)(v19 + 17) = 4;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v20, v15, a3, v16);
          if ( *(int *)(v20 + 4) > 0 || (*(_BYTE *)v20 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
            *(_BYTE *)(v19 + 17) = 5;
            v4 = 1;
            break;
          }
          v21 = *(__int64 **)(v20 + 16);
          if ( *v21 != v20 + 8 )
LABEL_84:
            __fastfail(3u);
          *(_QWORD *)v19 = v20 + 8;
          *(_QWORD *)(v19 + 8) = v21;
          *v21 = v19;
          *(_QWORD *)(v20 + 16) = v19;
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
        }
      }
      v22 = 0;
      if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v4 )
      {
        v31 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime((int *)(a1 + 256), v31, 0, &v46) )
        {
          if ( KiInsertTimerTable(a2, a1 + 256, 0LL, v46, 0LL) )
          {
            if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
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
            KiTimerWaitTest(a2, a1 + 256, 0LL);
          }
          v22 = 1;
        }
        else
        {
          v4 = 1;
          v22 = 0;
        }
      }
      v23 = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v34 = v24[6];
            v24[6] = v34 + 1;
            if ( v34 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v35 = v23->SchedulerAssist;
        if ( v35 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v36 = v35[6] - 1;
            v35[6] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v47, v15, a3, v16);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v25 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v22 << 9) & 0xFFFDFFFF;
      v26 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v25;
      if ( v26 != 5 || (unsigned int)KiTestForAlertPending(a1, (v25 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
      {
        v4 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v4 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      KiSignalThreadForApc(a2, a1 + 648, a3);
    }
  }
  LOBYTE(v9) = KiReleaseThreadLockSafe(a1);
  v13 = (_QWORD *)(a1 + 744);
  v14 = *(_QWORD **)(a1 + 744);
  if ( v14 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v27 = (__int64)v14;
      v14 = (_QWORD *)*v14;
      v28 = *(_BYTE *)(v27 + 16);
      if ( v28 == 1 )
        break;
      if ( v28 != 2 )
      {
        v29 = 256LL;
        goto LABEL_31;
      }
      *(_BYTE *)(v27 + 17) = 5;
      v37 = *(_QWORD *)(v27 + 24);
      *(_QWORD *)v27 = 0LL;
      v38 = (_QWORD *)(v37 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v12 = KeGetCurrentPrcb()->SchedulerAssist;
        v10 = (_QWORD *)((-1LL << (CurrentIrql + 1)) & 4);
        v11 = (unsigned int)v10 | v12[5];
        v12[5] = v11;
      }
      v40 = KeGetCurrentPrcb();
      CurrentThread = v40->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v42) = KeIsThreadRunning(v40->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v27, v42);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v37, (__int64)v10, v11, (__int64)v12);
      if ( (_QWORD *)*v38 == v38
        || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v37 && CurrentThread->WaitReason == 15
        || (LOBYTE(v9) = KiWakeQueueWaiter((__int64)v40, v37, v27, (__int64)v12), !(_BYTE)v9) )
      {
        v43 = *(_DWORD *)(v37 + 4);
        *(_DWORD *)(v37 + 4) = v43 + 1;
        v9 = v37 + 24;
        v10 = *(_QWORD **)(v37 + 32);
        if ( *v10 != v37 + 24 )
          goto LABEL_84;
        *(_QWORD *)v27 = v9;
        *(_QWORD *)(v27 + 8) = v10;
        *v10 = v27;
        *(_QWORD *)(v37 + 32) = v27;
        if ( !v43 && (_QWORD *)*v38 != v38 )
          LOBYTE(v9) = KiWakeOtherQueueWaiters((__int64)v40, v37);
      }
      _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
LABEL_32:
      if ( v14 == v13 )
        goto LABEL_9;
    }
    v29 = *(unsigned __int16 *)(v27 + 18);
LABEL_31:
    LOBYTE(v9) = KiTryUnwaitThread(a2, v27, v29, 0LL);
    goto LABEL_32;
  }
LABEL_9:
  v13[1] = v13;
  *v13 = v13;
  return v9;
}
