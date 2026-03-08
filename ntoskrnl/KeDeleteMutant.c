/*
 * XREFs of KeDeleteMutant @ 0x140292FB8
 * Callers:
 *     ExpDeleteMutant @ 0x140292FA0 (ExpDeleteMutant.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14029319C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     KeAbCrossThreadDelete @ 0x1405770F0 (KeAbCrossThreadDelete.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

char __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int32 *v2; // rsi
  int v3; // r12d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  int v7; // ecx
  char result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  volatile signed __int32 v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  char v18; // al
  bool v19; // zf
  __int64 v20; // rbp
  _QWORD *v21; // r12
  unsigned __int8 v22; // cl
  _DWORD *v23; // r9
  __int64 v24; // rdx
  struct _KPRCB *v25; // r15
  _KTHREAD *v26; // r14
  __int64 v27; // r8
  int v28; // r8d
  __int64 *v29; // rdx
  unsigned __int8 v30; // [rsp+30h] [rbp-88h]
  struct _KPRCB *v31; // [rsp+38h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-70h]
  __int128 v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+C0h] [rbp+8h]
  char v37; // [rsp+C8h] [rbp+10h]
  int v38; // [rsp+D0h] [rbp+18h] BYREF
  struct _KTHREAD *v39; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  v37 = 0;
  v32 = 0LL;
  v39 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v31 = CurrentPrcb;
  KiAcquireKobjectLockSafe(BugCheckParameter2);
  v7 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v7 <= 0 )
  {
    v35 = 0LL;
    v11 = *(_DWORD *)BugCheckParameter2;
    v38 = 0;
    v34 = 0LL;
    LODWORD(v34) = v11;
    BYTE2(v34) = 0;
    *(_DWORD *)BugCheckParameter2 = v34;
    v3 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    v2 = *(volatile signed __int32 **)(BugCheckParameter2 + 40);
    v36 = v3;
    while ( _interlockedbittestandset64(v2 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *((_QWORD *)v2 + 8) );
    }
    v12 = *(_QWORD *)(BugCheckParameter2 + 24);
    v13 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v12 + 8) != BugCheckParameter2 + 24 || *v13 != BugCheckParameter2 + 24 )
LABEL_59:
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      v37 = 1;
      if ( v2 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v2, 0x746C6644u);
    }
    *((_QWORD *)v2 + 8) = 0LL;
    v14 = *(_QWORD **)(BugCheckParameter2 + 8);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    if ( v14 != (_QWORD *)(BugCheckParameter2 + 8) )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)*v14;
        v16 = (__int64)v14;
        v14 = v15;
        v33 = v15;
        v17 = *(_QWORD **)(v16 + 8);
        if ( v15[1] != v16 || *v17 != v16 )
          goto LABEL_59;
        *v17 = v15;
        v15[1] = v17;
        v18 = *(_BYTE *)(v16 + 16);
        switch ( v18 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), &v32) )
            {
              v19 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
              if ( v19 )
                goto LABEL_58;
            }
            break;
          case 2:
            *(_BYTE *)(v16 + 17) = 5;
            v20 = *(_QWORD *)(v16 + 24);
            *(_QWORD *)v16 = 0LL;
            v21 = (_QWORD *)(v20 + 8);
            v22 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
            {
              v23 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v22 == 2 )
                LODWORD(v24) = 4;
              else
                v24 = (-1LL << (v22 + 1)) & 4;
              v23[5] |= v24;
            }
            v25 = KeGetCurrentPrcb();
            v26 = v25->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
              EtwTraceEnqueueWork(v26, v16, v27);
            }
            KiAcquireKobjectLockSafe(v20);
            if ( (_QWORD *)*v21 == v21
              || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
              || v26->Queue == (_DISPATCHER_HEADER *volatile)v20 && v26->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(v25, v20, v16) )
            {
              v28 = *(_DWORD *)(v20 + 4);
              *(_DWORD *)(v20 + 4) = v28 + 1;
              v29 = *(__int64 **)(v20 + 32);
              if ( *v29 != v20 + 24 )
                goto LABEL_59;
              *(_QWORD *)v16 = v20 + 24;
              *(_QWORD *)(v16 + 8) = v29;
              *v29 = v16;
              *(_QWORD *)(v20 + 32) = v16;
              if ( !v28 && (_QWORD *)*v21 != v21 )
                KiWakeOtherQueueWaiters(v25, v20);
            }
            else
            {
              *(_QWORD *)v16 = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
            v19 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
            if ( v19 )
            {
LABEL_58:
              CurrentThread = v39;
              CurrentIrql = v30;
              v3 = v36;
              goto LABEL_18;
            }
            v14 = v33;
            CurrentPrcb = v31;
            break;
          case 4:
            *(_BYTE *)(v16 + 17) = 5;
            *(_DWORD *)(BugCheckParameter2 + 4) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v16 + 24), BugCheckParameter2, v16, 0LL, 0);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
            break;
        }
        if ( v14 == (_QWORD *)(BugCheckParameter2 + 8) )
          goto LABEL_58;
      }
    }
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
    CurrentPrcb = v31;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 1u, CurrentIrql);
  if ( v37 )
  {
    if ( v2 != (volatile signed __int32 *)CurrentThread )
    {
      KeAbCrossThreadDelete(BugCheckParameter2, v2);
      return ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
    }
    result = KeAbPostRelease(BugCheckParameter2);
  }
  else if ( v2 != (volatile signed __int32 *)CurrentThread )
  {
    return result;
  }
  if ( v3 )
    return KeLeaveCriticalRegionThread(CurrentThread);
  return result;
}
