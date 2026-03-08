/*
 * XREFs of KeRundownQueueCommon @ 0x140292D44
 * Callers:
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14057C5D0 (KeRundownPriQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, volatile signed __int32 **a2, _DWORD *a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rcx
  volatile signed __int32 **v15; // rax
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // rsi
  _QWORD *v19; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v21; // r15
  _KTHREAD *CurrentThread; // rbp
  int v23; // ecx
  __int64 *v24; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  struct _KPRCB *v29; // [rsp+60h] [rbp+8h]

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v6 = a4;
  if ( (_BYTE)a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == (volatile signed __int32 *)a2 )
        break;
      v14 = *(_QWORD *)v9;
      v15 = (volatile signed __int32 **)*((_QWORD *)v9 + 1);
      if ( *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9 || *v15 != v9 )
LABEL_36:
        __fastfail(3u);
      a5 = 0;
      *v15 = (volatile signed __int32 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      while ( _interlockedbittestandset64(v9 - 114, 0LL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *((_QWORD *)v9 - 57) );
      }
      *((_QWORD *)v9 - 36) = 0LL;
      *((_QWORD *)v9 - 57) = 0LL;
    }
    if ( (_DWORD)v6 )
    {
      v10 = v6;
      do
      {
        *a3++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  v29 = CurrentPrcb;
  if ( v13 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v16 = (__int64)v13;
      v13 = (_QWORD *)*v13;
      v17 = *(_BYTE *)(v16 + 16);
      if ( v17 == 1 )
        break;
      if ( v17 != 2 )
      {
        if ( v17 == 4 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          *(_DWORD *)(a1 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v16 + 24), a1, v16, 0LL, 0);
          goto LABEL_30;
        }
        v28 = 256LL;
        goto LABEL_44;
      }
      *(_BYTE *)(v16 + 17) = 5;
      v18 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)v16 = 0LL;
      v19 = (_QWORD *)(v18 + 8);
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
      v21 = KeGetCurrentPrcb();
      CurrentThread = v21->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(v21->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v16, v27);
      }
      KiAcquireKobjectLockSafe(v18);
      if ( (_QWORD *)*v19 == v19
        || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v21, v18, v16) )
      {
        v23 = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v18 + 4) = v23 + 1;
        v24 = *(__int64 **)(v18 + 32);
        if ( *v24 != v18 + 24 )
          goto LABEL_36;
        *(_QWORD *)v16 = v18 + 24;
        *(_QWORD *)(v16 + 8) = v24;
        *v24 = v16;
        *(_QWORD *)(v18 + 32) = v16;
        if ( !v23 && (_QWORD *)*v19 != v19 )
          KiWakeOtherQueueWaiters(v21, v18);
      }
      else
      {
        *(_QWORD *)v16 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
LABEL_30:
      if ( v13 == v12 )
        goto LABEL_7;
      CurrentPrcb = v29;
    }
    v28 = *(unsigned __int16 *)(v16 + 18);
LABEL_44:
    KiTryUnwaitThread((__int64)CurrentPrcb, v16, v28, 0LL);
    goto LABEL_30;
  }
LABEL_7:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v12 = v12;
}
