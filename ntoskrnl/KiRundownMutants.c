/*
 * XREFs of KiRundownMutants @ 0x140353C9C
 * Callers:
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

unsigned __int8 __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 result; // al
  _QWORD *v3; // r12
  __int64 v4; // r13
  __int64 CurrentIrql; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  char v12; // al
  bool v13; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // r12
  unsigned __int8 v21; // cl
  _DWORD *v22; // r9
  __int64 v23; // rdx
  struct _KPRCB *v24; // r15
  _KTHREAD *CurrentThread; // r14
  __int64 v26; // r8
  int v27; // r8d
  __int64 *v28; // rdx
  ULONG_PTR *v29; // rbx
  __int64 v30; // rdi
  unsigned __int8 v31; // cl
  _DWORD *v32; // r9
  __int64 v33; // rdx
  ULONG_PTR *v34; // rbx
  __int64 v35; // rdi
  int v36; // [rsp+30h] [rbp-168h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-160h]
  int v38; // [rsp+40h] [rbp-158h] BYREF
  int v39; // [rsp+44h] [rbp-154h] BYREF
  __int64 v40; // [rsp+48h] [rbp-150h]
  __int64 v41; // [rsp+50h] [rbp-148h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-140h]
  _QWORD v43[32]; // [rsp+60h] [rbp-138h] BYREF

  result = (unsigned __int8)memset(v43, 0, sizeof(v43));
  v41 = 0LL;
  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 == v3 )
    return result;
  v4 = 0LL;
  v36 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v6 = (_QWORD *)*v3;
    v7 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v8 = (unsigned __int64)(v6 - 3);
    if ( *((_BYTE *)v6 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v6 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset((volatile signed __int32 *)v8, 7u) )
      goto LABEL_10;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * ((v8 >> 4) & 0x3F)]);
    if ( v6 != (_QWORD *)*v3 )
      goto LABEL_35;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v6 - 6);
    if ( *(_QWORD *)(v8 + 40) != BugCheckParameter1 )
    {
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
LABEL_35:
      v7 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * ((v8 >> 4) & 0x3F)]);
    if ( v7 )
    {
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_10:
      v9 = *v6;
      v10 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v10 != v6 )
LABEL_43:
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      v11 = *(_QWORD **)(v8 + 8);
      *(_BYTE *)(v8 + 48) |= 1u;
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_DWORD *)(v8 + 4) = 1;
      if ( v11 != (_QWORD *)(v8 + 8) )
      {
        while ( 1 )
        {
          v16 = (_QWORD *)*v11;
          v17 = (__int64)v11;
          v11 = v16;
          v42 = v16;
          v18 = *(_QWORD **)(v17 + 8);
          if ( v16[1] != v17 || *v18 != v17 )
            goto LABEL_43;
          *v18 = v16;
          v16[1] = v18;
          v12 = *(_BYTE *)(v17 + 16);
          switch ( v12 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), &v41) )
              {
                v13 = (*(_DWORD *)(v8 + 4))-- == 1;
                if ( v13 )
                  goto LABEL_25;
              }
              break;
            case 2:
              *(_BYTE *)(v17 + 17) = 5;
              v19 = *(_QWORD *)(v17 + 24);
              *(_QWORD *)v17 = 0LL;
              v20 = (_QWORD *)(v19 + 8);
              v21 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
              {
                v22 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( v21 == 2 )
                  LODWORD(v23) = 4;
                else
                  v23 = (-1LL << (v21 + 1)) & 4;
                v22[5] |= v23;
              }
              v24 = KeGetCurrentPrcb();
              CurrentThread = v24->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                LOBYTE(v26) = KeIsThreadRunning(v24->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v17, v26);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v19);
              if ( (_QWORD *)*v20 == v20
                || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v24, v19, v17) )
              {
                v27 = *(_DWORD *)(v19 + 4);
                *(_DWORD *)(v19 + 4) = v27 + 1;
                v28 = *(__int64 **)(v19 + 32);
                if ( *v28 != v19 + 24 )
                  goto LABEL_43;
                *(_QWORD *)v17 = v19 + 24;
                *(_QWORD *)(v17 + 8) = v28;
                *v28 = v17;
                *(_QWORD *)(v19 + 32) = v17;
                if ( !v27 && (_QWORD *)*v20 != v20 )
                  KiWakeOtherQueueWaiters((__int64)v24, v19);
              }
              else
              {
                *(_QWORD *)v17 = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
              v13 = (*(_DWORD *)(v8 + 4))-- == 1;
              if ( v13 )
              {
LABEL_25:
                LOBYTE(CurrentIrql) = v40;
                v3 = (_QWORD *)(BugCheckParameter1 + 776);
                goto LABEL_13;
              }
              v11 = v42;
              break;
            case 4:
              *(_BYTE *)(v17 + 17) = 5;
              *(_DWORD *)(v8 + 4) = 0;
              KiInsertQueueDpc(*(_QWORD *)(v17 + 24), v8, v17, 0LL, 0);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
              break;
          }
          if ( v11 == (_QWORD *)(v8 + 8) )
            goto LABEL_25;
        }
      }
LABEL_13:
      if ( (*(_BYTE *)(v8 + 48) & 2) != 0 )
      {
        v43[v4] = v8;
        v4 = (unsigned int)(v4 + 1);
      }
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
      if ( ++v36 == 32 )
      {
        KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 1u, CurrentIrql);
        if ( (_DWORD)v4 )
        {
          v29 = v43;
          v30 = (unsigned int)v4;
          do
          {
            KeAbPostRelease(*v29++);
            --v30;
          }
          while ( v30 );
        }
        v36 = 0;
        v4 = 0LL;
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
        {
          v32 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v31 == 2 )
            LODWORD(v33) = 4;
          else
            v33 = (-1LL << (v31 + 1)) & 4;
          v32[5] |= v33;
        }
        goto LABEL_4;
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  result = KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 1u, CurrentIrql);
  if ( (_DWORD)v4 )
  {
    v34 = v43;
    v35 = (unsigned int)v4;
    do
    {
      result = KeAbPostRelease(*v34++);
      --v35;
    }
    while ( v35 );
  }
  return result;
}
