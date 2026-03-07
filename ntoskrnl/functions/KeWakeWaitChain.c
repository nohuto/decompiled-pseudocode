__int64 __fastcall KeWakeWaitChain(volatile signed __int32 **a1, unsigned int a2, char a3)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v5; // ebx
  struct _PROCESSOR_NUMBER v6; // r15d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r12
  int v12; // ecx
  unsigned int Priority; // edx
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v20; // r9
  char v21; // al
  bool v22; // zf
  char v23; // al
  __int64 v24; // rcx
  unsigned __int8 v25; // cl
  _DWORD *v26; // r9
  __int64 v27; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // r9
  __int64 v30; // r10
  _QWORD *v31; // r10
  __int64 v32; // rcx
  char v33; // al
  int v34; // r9d
  _QWORD *v35; // r8
  __int64 v36; // [rsp+30h] [rbp-78h]
  _QWORD *v37; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v38; // [rsp+48h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v40; // [rsp+58h] [rbp-50h]
  volatile signed __int32 *v41; // [rsp+60h] [rbp-48h]
  unsigned __int8 v42; // [rsp+68h] [rbp-40h]
  unsigned int i; // [rsp+C8h] [rbp+20h]

  v3 = *a1;
  v5 = 0;
  v6 = (struct _PROCESSOR_NUMBER)1;
  if ( !*a1 )
    return v5;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v20) = 4;
    else
      v20 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v20;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = a3 & 4;
  Priority = CurrentPrcb->CurrentThread->Priority;
  v14 = v3;
  for ( i = Priority; ; Priority = i )
  {
    v15 = v14;
    v41 = *(volatile signed __int32 **)v14;
    if ( v12 )
    {
      v24 = *((_QWORD *)v14 + 6);
      if ( v24 )
        KeAbPreWakeupHandle(v24, Priority);
    }
    KiAcquireKobjectLockSafe(v15 + 6);
    *((_DWORD *)v15 + 7) = 1;
    v16 = *((_QWORD *)v15 + 4);
    if ( (volatile signed __int32 *)v16 != v15 + 8 )
    {
      do
      {
        v17 = *(_QWORD *)v16;
        v18 = *(__int64 **)(v16 + 8);
        v37 = (_QWORD *)v16;
        v40 = *(_QWORD *)v16;
        if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
LABEL_8:
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v21 = *(_BYTE *)(v16 + 16);
        switch ( v21 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
            {
              v22 = (*((_DWORD *)v15 + 7))-- == 1;
              if ( v22 )
                goto LABEL_17;
            }
            break;
          case 2:
            *(_BYTE *)(v16 + 17) = 5;
            v36 = *(_QWORD *)(v16 + 24);
            *(_QWORD *)v16 = 0LL;
            v25 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
            {
              v26 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v25 == 2 )
                LODWORD(v27) = 4;
              else
                v27 = (-1LL << (v25 + 1)) & 4;
              v26[5] |= v27;
            }
            v38 = KeGetCurrentPrcb();
            CurrentThread = v38->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
              EtwTraceEnqueueWork(v29, v30, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v36);
            v31 = (_QWORD *)(v36 + 8);
            v32 = v36;
            if ( (_QWORD *)*v31 != v31
              && *(_DWORD *)(v36 + 40) < *(_DWORD *)(v36 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v36 || CurrentThread->WaitReason != 15) )
            {
              v33 = KiWakeQueueWaiter(v38, v36, v37);
              v32 = v36;
              if ( v33 )
              {
                *v37 = 0LL;
                goto LABEL_52;
              }
              v31 = (_QWORD *)(v36 + 8);
            }
            v34 = *(_DWORD *)(v32 + 4);
            *(_DWORD *)(v32 + 4) = v34 + 1;
            v35 = *(_QWORD **)(v32 + 32);
            if ( *v35 != v32 + 24 )
              goto LABEL_8;
            *v37 = v32 + 24;
            v37[1] = v35;
            *v35 = v37;
            *(_QWORD *)(v32 + 32) = v37;
            if ( !v34 && (_QWORD *)*v31 != v31 )
            {
              KiWakeOtherQueueWaiters((__int64)v38, v32);
              v32 = v36;
            }
LABEL_52:
            _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
            v22 = (*((_DWORD *)v15 + 7))-- == 1;
            if ( v22 )
              goto LABEL_17;
            break;
          case 4:
            *(_BYTE *)(v16 + 17) = 5;
            *((_DWORD *)v15 + 7) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v16 + 24), (__int64)(v15 + 6), v16, 0LL, 0);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
            break;
        }
        v16 = v40;
      }
      while ( (volatile signed __int32 *)v40 != v15 + 8 );
    }
LABEL_17:
    _InterlockedAnd(v15 + 6, 0xFFFFFF7F);
    v14 = v41;
    ++v5;
    if ( v41 == v3 )
      break;
    v12 = a3 & 4;
  }
  if ( (a3 & 1) != 0 )
  {
    v23 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( a2 )
    {
      v6 = (struct _PROCESSOR_NUMBER)2;
      if ( v23 > (char)a2 )
        a2 = v23;
    }
  }
  if ( (a3 & 2) != 0 && v6 == 1 )
    a2 = 1;
  KiExitDispatcher((__int64)CurrentPrcb, 0, v6, a2, v42);
  *a1 = 0LL;
  return v5;
}
