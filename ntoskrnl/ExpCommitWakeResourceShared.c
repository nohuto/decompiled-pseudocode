/*
 * XREFs of ExpCommitWakeResourceShared @ 0x14033B220
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14033A350 (ExReleaseResourceForThreadLite.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeAbPreWakeupHandle @ 0x1402390DC (KeAbPreWakeupHandle.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall ExpCommitWakeResourceShared(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 result; // rax
  char v8; // r14
  volatile signed __int32 *v9; // rbx
  struct _PROCESSOR_NUMBER v10; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v13; // r12
  unsigned int Priority; // edx
  int v15; // eax
  volatile signed __int32 *v16; // r13
  volatile signed __int32 *v17; // rax
  __int64 v18; // r10
  volatile signed __int32 *v19; // rax
  volatile signed __int32 **v20; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  char v23; // al
  bool v24; // zf
  char v25; // al
  __int64 v26; // rcx
  unsigned __int8 v27; // cl
  _DWORD *v28; // r9
  __int64 v29; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // r9
  __int64 v32; // r10
  _QWORD *v33; // r10
  __int64 v34; // rcx
  char v35; // al
  int v36; // r9d
  volatile signed __int32 **v37; // r8
  struct _KPRCB *v38; // [rsp+38h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v40; // [rsp+48h] [rbp-50h]
  unsigned __int8 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+A0h] [rbp+8h]
  volatile signed __int32 *v43; // [rsp+A8h] [rbp+10h]
  unsigned int i; // [rsp+C0h] [rbp+28h]

  result = a5 & 1;
  v8 = 2 * result + 1;
  if ( (a5 & 2) != 0 )
    v8 |= 4u;
  v9 = *a2;
  v10 = (struct _PROCESSOR_NUMBER)1;
  if ( *a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v41 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v22) = 4;
      else
        v22 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v22;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = v9;
    Priority = CurrentPrcb->CurrentThread->Priority;
    v15 = v8 & 4;
    for ( i = Priority; ; Priority = i )
    {
      v16 = v13;
      v13 = *(volatile signed __int32 **)v13;
      if ( v15 )
      {
        v26 = *((_QWORD *)v16 + 6);
        if ( v26 )
          KeAbPreWakeupHandle(v26, Priority);
      }
      KiAcquireKobjectLockSafe(v16 + 6);
      *((_DWORD *)v16 + 7) = 1;
      v17 = (volatile signed __int32 *)*((_QWORD *)v16 + 4);
      if ( v17 != v16 + 8 )
      {
        do
        {
          v18 = (__int64)v17;
          v43 = v17;
          v19 = *(volatile signed __int32 **)v17;
          v40 = v19;
          v20 = *(volatile signed __int32 ***)(v18 + 8);
          if ( *((_QWORD *)v19 + 1) != v18 || *v20 != (volatile signed __int32 *)v18 )
LABEL_9:
            __fastfail(3u);
          *v20 = v19;
          *((_QWORD *)v19 + 1) = v20;
          v23 = *(_BYTE *)(v18 + 16);
          switch ( v23 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v18, *(unsigned __int16 *)(v18 + 18), 0LL) )
              {
                v24 = (*((_DWORD *)v16 + 7))-- == 1;
                if ( v24 )
                  goto LABEL_19;
              }
              break;
            case 2:
              *(_BYTE *)(v18 + 17) = 5;
              v42 = *(_QWORD *)(v18 + 24);
              *(_QWORD *)v18 = 0LL;
              v27 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
              {
                v28 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v27 == 2 )
                  LODWORD(v29) = 4;
                else
                  v29 = (-1LL << (v27 + 1)) & 4;
                v28[5] |= v29;
              }
              v38 = KeGetCurrentPrcb();
              CurrentThread = v38->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
                EtwTraceEnqueueWork(v31, v32, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v42);
              v33 = (_QWORD *)(v42 + 8);
              v34 = v42;
              if ( (_QWORD *)*v33 != v33
                && *(_DWORD *)(v42 + 40) < *(_DWORD *)(v42 + 44)
                && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v42 || CurrentThread->WaitReason != 15) )
              {
                v35 = KiWakeQueueWaiter(v38, v42, v43);
                v34 = v42;
                if ( v35 )
                {
                  *(_QWORD *)v43 = 0LL;
                  goto LABEL_51;
                }
                v33 = (_QWORD *)(v42 + 8);
              }
              v36 = *(_DWORD *)(v34 + 4);
              *(_DWORD *)(v34 + 4) = v36 + 1;
              v37 = *(volatile signed __int32 ***)(v34 + 32);
              if ( *v37 != (volatile signed __int32 *)(v34 + 24) )
                goto LABEL_9;
              *(_QWORD *)v43 = v34 + 24;
              *((_QWORD *)v43 + 1) = v37;
              *v37 = v43;
              *(_QWORD *)(v34 + 32) = v43;
              if ( !v36 && (_QWORD *)*v33 != v33 )
              {
                KiWakeOtherQueueWaiters((__int64)v38, v34);
                v34 = v42;
              }
LABEL_51:
              _InterlockedAnd((volatile signed __int32 *)v34, 0xFFFFFF7F);
              v24 = (*((_DWORD *)v16 + 7))-- == 1;
              if ( v24 )
                goto LABEL_19;
              break;
            case 4:
              *(_BYTE *)(v18 + 17) = 5;
              *((_DWORD *)v16 + 7) = 0;
              KiInsertQueueDpc(*(_QWORD *)(v18 + 24), (__int64)(v16 + 6), v18, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v18, 256LL, 0LL);
              break;
          }
          v17 = v40;
        }
        while ( v40 != v16 + 8 );
      }
LABEL_19:
      _InterlockedAnd(v16 + 6, 0xFFFFFF7F);
      if ( v13 == v9 )
        break;
      v15 = v8 & 4;
    }
    v25 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( a4 )
    {
      v10 = (struct _PROCESSOR_NUMBER)2;
      if ( v25 > (char)a4 )
        a4 = v25;
    }
    if ( (v8 & 2) != 0 && v10 == 1 )
      a4 = 1;
    KiExitDispatcher((__int64)CurrentPrcb, 0, v10, a4, v41);
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
