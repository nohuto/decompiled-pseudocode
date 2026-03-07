__int64 __fastcall KeSetProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  _QWORD *v13; // r12
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r15
  _KTHREAD *CurrentThread; // r14
  int v17; // r8d
  __int64 *v18; // rdx
  _DWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v4 = (_QWORD *)(a1 + 8);
  v22 = *(_DWORD *)(a1 + 4);
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  while ( (_QWORD *)v5 != v4 )
  {
    v7 = v5;
    v24 = *(_QWORD *)v5;
    v8 = *(_BYTE *)(v5 + 16);
    switch ( v8 )
    {
      case 1:
        v9 = *(unsigned __int16 *)(v7 + 18);
LABEL_7:
        KiTryUnwaitThread((__int64)CurrentPrcb, v7, v9, 0LL);
        break;
      case 2:
        *(_BYTE *)(v7 + 17) = 5;
        v12 = *(_QWORD *)(v7 + 24);
        *(_QWORD *)v7 = 0LL;
        v13 = (_QWORD *)(v12 + 8);
        v14 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
        {
          v19 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v14 == 2 )
            LODWORD(v20) = 4;
          else
            v20 = (-1LL << (v14 + 1)) & 4;
          v19[5] |= v20;
        }
        v15 = KeGetCurrentPrcb();
        CurrentThread = v15->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v21) = KeIsThreadRunning(v15->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v7, v21);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v12);
        if ( (_QWORD *)*v13 == v13
          || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v12 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v15, v12, v7) )
        {
          v17 = *(_DWORD *)(v12 + 4);
          *(_DWORD *)(v12 + 4) = v17 + 1;
          v18 = *(__int64 **)(v12 + 32);
          if ( *v18 != v12 + 24 )
            __fastfail(3u);
          *(_QWORD *)v7 = v12 + 24;
          *(_QWORD *)(v7 + 8) = v18;
          *v18 = v7;
          *(_QWORD *)(v12 + 32) = v7;
          if ( !v17 && (_QWORD *)*v13 != v13 )
            KiWakeOtherQueueWaiters((__int64)v15, v12);
        }
        else
        {
          *(_QWORD *)v7 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
        CurrentPrcb = v23;
        break;
      case 4:
        *(_BYTE *)(v7 + 17) = 5;
        *(_DWORD *)(a1 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v7 + 24), a1, v7, 0LL, 0);
        break;
      default:
        v9 = 256LL;
        goto LABEL_7;
    }
    v5 = v24;
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v4 = v4;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v22;
}
