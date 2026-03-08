/*
 * XREFs of KiTimerWaitTest @ 0x140251B00
 * Callers:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x1403966F4 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     PsTimerResolutionActive @ 0x140250500 (PsTimerResolutionActive.c)
 *     KiInsertTimerTable @ 0x1402511D0 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  char v4; // bp
  char v6; // bp
  __int64 v7; // rax
  unsigned __int8 v9; // r15
  unsigned __int64 v10; // rsi
  _QWORD **v11; // rbx
  _QWORD *v12; // r14
  unsigned int *v13; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rbp
  char v21; // al
  __int64 v22; // r8
  _QWORD *v23; // rbp
  _QWORD *v24; // rax
  __int64 v25; // r14
  _QWORD *v26; // rcx
  char v27; // al
  bool v28; // zf
  unsigned __int8 CurrentIrql; // cl
  _KTHREAD *CurrentThread; // r9
  _QWORD *v31; // r8
  __int64 v32; // rcx
  char v33; // al
  int v34; // r9d
  __int64 *v35; // rdx
  unsigned __int8 v36; // al
  __int64 *v37; // rcx
  __int16 v38; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v40; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v42; // rdx
  unsigned __int8 v43; // cl
  _KTHREAD *v44; // r9
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  char v47; // al
  int v48; // r9d
  __int64 *v49; // r8
  _DWORD *v50; // r9
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  __int64 v53; // r9
  unsigned int v54; // eax
  unsigned int v55; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v57; // [rsp+30h] [rbp-68h]
  __int64 v58; // [rsp+38h] [rbp-60h] BYREF
  _KTHREAD *v59; // [rsp+40h] [rbp-58h]
  __int128 v60; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+58h] [rbp-40h]
  __int64 v62; // [rsp+A8h] [rbp+10h]
  __int64 v63; // [rsp+A8h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_BYTE *)a2;
  v61 = 0LL;
  v6 = v4 & 0x7F;
  v58 = 0LL;
  v7 = *(int *)(a2 + 60);
  v9 = -1;
  v10 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever));
  v60 = 0LL;
  if ( (_DWORD)v7 )
  {
    v15 = -10000 * v7;
    v9 = 0;
    if ( *(_BYTE *)(a1 + 13242) )
    {
      v54 = *(_DWORD *)(a1 + 33124) + 1;
      *(_DWORD *)(a1 + 33124) = v54;
      if ( v54 >= 0xBB8 )
      {
        v55 = *(_DWORD *)(a1 + 33128);
        *(_DWORD *)(a1 + 33124) = 0;
        if ( v55 < 0x5F5E100 )
          *(_DWORD *)(a1 + 33128) = KeTimeIncrement + v55;
      }
      v15 -= *(unsigned int *)(a1 + 33128);
    }
    if ( v15 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v16 = 0LL;
    LODWORD(v60) = *(_DWORD *)a2;
    if ( BYTE1(v60) >= 4u )
      v16 = (unsigned __int64)(BYTE1(v60) & 0xFC) << 16;
    if ( KiGlobalTimerResolutionRequests )
    {
      *(_WORD *)(a2 + 58) = 0;
    }
    else
    {
      v17 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v18 = a2 + 8;
      if ( v17 != (__int64 *)v18 )
      {
        while ( 1 )
        {
          v36 = *((_BYTE *)v17 + 16);
          v37 = v17;
          v17 = (__int64 *)*v17;
          if ( v36 <= 1u && PsTimerResolutionActive(*(_QWORD *)(v37[3] + 544)) )
            break;
          if ( v17 == (__int64 *)v18 )
            goto LABEL_21;
        }
        *(_WORD *)(a2 + 58) = v38;
      }
    }
LABEL_21:
    BYTE1(v60) &= ~1u;
    BYTE3(v60) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v15;
      BYTE2(v60) = (v16 + *(_QWORD *)(a2 + 24)) >> 18;
      v19 = BYTE2(v60);
      *(_DWORD *)a2 = v60;
    }
    while ( !KiInsertTimerTable(a1, a2, v10, v19, 0LL) );
  }
  *(_DWORD *)(a2 + 4) = 1;
  v11 = (_QWORD **)(a2 + 8);
  if ( v6 == 8 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
    {
LABEL_4:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v11 = v11;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v20 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v21 = *(_BYTE *)(v20 + 16);
      switch ( v21 )
      {
        case 1:
          v22 = *(unsigned __int16 *)(v20 + 18);
          break;
        case 2:
          *(_BYTE *)(v20 + 17) = 5;
          v62 = *(_QWORD *)(v20 + 24);
          *(_QWORD *)v20 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v42;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          v59 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v40, v20, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v62);
          v31 = (_QWORD *)(v62 + 8);
          v32 = v62;
          if ( (_QWORD *)*v31 == v31
            || *(_DWORD *)(v62 + 40) >= *(_DWORD *)(v62 + 44)
            || v59->Queue == (_DISPATCHER_HEADER *volatile)v62 && v59->WaitReason == 15 )
          {
LABEL_52:
            v34 = *(_DWORD *)(v32 + 4);
            *(_DWORD *)(v32 + 4) = v34 + 1;
            v35 = *(__int64 **)(v32 + 32);
            if ( *v35 != v32 + 24 )
              goto LABEL_32;
            *(_QWORD *)v20 = v32 + 24;
            *(_QWORD *)(v20 + 8) = v35;
            *v35 = v20;
            *(_QWORD *)(v32 + 32) = v20;
            if ( !v34 && (_QWORD *)*v31 != v31 )
            {
              KiWakeOtherQueueWaiters(CurrentPrcb, v32);
              v32 = v62;
            }
          }
          else
          {
            v33 = KiWakeQueueWaiter(CurrentPrcb, v62, v20);
            v32 = v62;
            if ( !v33 )
            {
              v31 = (_QWORD *)(v62 + 8);
              goto LABEL_52;
            }
            *(_QWORD *)v20 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
          goto LABEL_27;
        case 4:
          *(_BYTE *)(v20 + 17) = 5;
          *(_DWORD *)(a2 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v20 + 24), a2, v20, 0LL, 0);
          goto LABEL_27;
        default:
          v22 = 256LL;
          break;
      }
      KiTryUnwaitThread(a1, v20, v22, 0LL);
LABEL_27:
      if ( v12 == v11 )
        goto LABEL_4;
    }
  }
  v23 = *v11;
  while ( v23 != v11 )
  {
    v24 = (_QWORD *)*v23;
    v25 = (__int64)v23;
    v23 = v24;
    v26 = *(_QWORD **)(v25 + 8);
    if ( v24[1] != v25 || *v26 != v25 )
LABEL_32:
      __fastfail(3u);
    *v26 = v24;
    v24[1] = v26;
    v27 = *(_BYTE *)(v25 + 16);
    switch ( v27 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(a1, v25, *(unsigned __int16 *)(v25 + 18), 0LL) )
        {
          v28 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v28 )
            goto LABEL_5;
        }
        break;
      case 2:
        *(_BYTE *)(v25 + 17) = 5;
        v63 = *(_QWORD *)(v25 + 24);
        *(_QWORD *)v25 = 0LL;
        v43 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 <= 0xFu )
        {
          v50 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v43 == 2 )
            LODWORD(v51) = 4;
          else
            v51 = (-1LL << (v43 + 1)) & 4;
          v50[5] |= v51;
        }
        v57 = KeGetCurrentPrcb();
        v44 = v57->CurrentThread;
        v59 = v44;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v52 = KeIsThreadRunning(v44);
          EtwTraceEnqueueWork(v53, v25, v52);
        }
        KiAcquireKobjectLockSafe(v63);
        v45 = (_QWORD *)(v63 + 8);
        v46 = v63;
        if ( (_QWORD *)*v45 == v45
          || *(_DWORD *)(v63 + 40) >= *(_DWORD *)(v63 + 44)
          || v59->Queue == (_DISPATCHER_HEADER *volatile)v63 && v59->WaitReason == 15 )
        {
LABEL_76:
          v48 = *(_DWORD *)(v46 + 4);
          *(_DWORD *)(v46 + 4) = v48 + 1;
          v49 = *(__int64 **)(v46 + 32);
          if ( *v49 != v46 + 24 )
            goto LABEL_32;
          *(_QWORD *)v25 = v46 + 24;
          *(_QWORD *)(v25 + 8) = v49;
          *v49 = v25;
          *(_QWORD *)(v46 + 32) = v25;
          if ( !v48 && (_QWORD *)*v45 != v45 )
          {
            KiWakeOtherQueueWaiters(v57, v46);
            v46 = v63;
          }
        }
        else
        {
          v47 = KiWakeQueueWaiter(v57, v63, v25);
          v46 = v63;
          if ( !v47 )
          {
            v45 = (_QWORD *)(v63 + 8);
            goto LABEL_76;
          }
          *(_QWORD *)v25 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v46, 0xFFFFFF7F);
        v28 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v28 )
          goto LABEL_5;
        break;
      case 4:
        *(_BYTE *)(v25 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v25 + 24), a2, v25, 0LL, 0);
        break;
      default:
        KiTryUnwaitThread(a1, v25, 256LL, 0LL);
        break;
    }
  }
LABEL_5:
  if ( v10 )
  {
    v13 = a3;
    if ( a3 )
    {
      if ( (!KiSerializeTimerExpiration || *(_WORD *)(v10 + 2) < 0x800u)
        && (*(_BYTE *)v10 != 26 || !*(_BYTE *)(a1 + 13240)) )
      {
        *(_QWORD *)(a1 + 13152) = v10;
        if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v10 + 16)) == 0LL )
          _interlockedbittestandset64((volatile signed __int32 *)(v10 + 16), *(unsigned __int8 *)(a1 + 209));
        goto LABEL_12;
      }
    }
    else
    {
      v13 = (unsigned int *)&v58;
      v58 = MEMORY[0xFFFFF78000000014];
    }
    KiInsertQueueDpc(v10, *v13, v13[1], (volatile signed __int32 *)a2, v9);
    return 0LL;
  }
LABEL_12:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v9 << 24) | 0x80));
  return v10;
}
