/*
 * XREFs of KiSearchForNewThread @ 0x140260460
 * Callers:
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140258C90 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140260ED0 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140261010 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiReadyQueueEnumeratorStartScbQueuesPhase @ 0x140261910 (KiReadyQueueEnumeratorStartScbQueuesPhase.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiSearchForNewThreadOnSubNode @ 0x1402AC670 (KiSearchForNewThreadOnSubNode.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1402ADC00 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiAddThreadToScbQueue @ 0x1402AE688 (KiAddThreadToScbQueue.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402C3F04 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiReparkIdlingProcessorIfNecessary @ 0x1402C7970 (KiReparkIdlingProcessorIfNecessary.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x1402EE9E4 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403426B0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1403428F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056AD34 (KzReleaseAdditionalPrcbLocks.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v3; // r14
  char v5; // di
  struct _KPRCB **v6; // r12
  unsigned __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // r8
  unsigned int v10; // r13d
  __int64 v11; // r8
  _QWORD *v12; // rdi
  struct _KPRCB *v13; // rsi
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // rbx
  char v16; // cl
  char v17; // cl
  char v18; // al
  char v19; // dl
  unsigned __int8 v20; // cl
  _QWORD *v21; // r8
  unsigned int v22; // r9d
  _QWORD *v23; // rdx
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int8 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r11
  char v34; // r10
  unsigned int v35; // r10d
  _QWORD *v36; // rcx
  volatile signed __int32 *i; // r8
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 **v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  char j; // bl
  __int64 v43; // rdx
  int ready; // eax
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rbx
  int v52; // ecx
  unsigned int v53; // esi
  _QWORD *v54; // rbx
  bool v55; // zf
  char v56; // al
  __int64 v57; // rdx
  char v58; // cl
  __int64 v59; // rbx
  unsigned int v60; // ebx
  unsigned int v61; // ebx
  volatile signed __int64 *k; // r9
  volatile signed __int64 *v63; // rax
  volatile signed __int64 **v64; // rdx
  __int64 v65; // r8
  char v66; // di
  unsigned int v67; // esi
  unsigned int v68; // ebx
  unsigned __int8 *v69; // rdx
  unsigned __int8 v70; // al
  __int64 *v71; // rsi
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  char v74; // al
  __int64 v75; // rcx
  unsigned __int64 v76; // r9
  unsigned __int64 *v77; // r8
  int v78; // edx
  __int64 v79; // rbx
  __int64 v80; // rax
  unsigned int m; // ebx
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v88; // [rsp+20h] [rbp-E0h]
  __int64 v89; // [rsp+20h] [rbp-E0h]
  _QWORD *v91; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v93[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v94; // [rsp+68h] [rbp-98h] BYREF
  __int64 v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  unsigned __int64 v97; // [rsp+80h] [rbp-80h] BYREF
  __int64 v98; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v99; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v100[42]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v101[27]; // [rsp+1F0h] [rbp+F0h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v93[0] = a3;
  v92 = a1;
  v5 = a2;
  v91 = 0LL;
  memset(&v93[1], 0, 24);
  if ( v3 && v3 != *(_QWORD *)(a1 + 24) )
  {
    KiDowngradeIsolationUnitLockHandle(a3, 0LL);
    return v3;
  }
  memset(v100, 0, sizeof(v100));
  v6 = 0LL;
  v7 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0;
  v55 = (*a3 & 1) == 0;
  v9 = *a3 & 1LL;
  v97 = v7;
  v95 = v9;
  if ( v55 )
  {
    v6 = (struct _KPRCB **)&v97;
    v8 = 1;
    v10 = 0;
LABEL_10:
    v11 = v8;
    v12 = &v100[6];
    v96 = v8;
    do
    {
      *((_OWORD *)v12 - 2) = 0LL;
      *((_OWORD *)v12 - 1) = 0LL;
      *v12 = 0LL;
      *(v12 - 1) = -1LL;
      *((_BYTE *)v12 + 4) = 63;
      v13 = *v6;
      *(v12 - 4) = *v6;
      SharedReadyQueue = v13->SharedReadyQueue;
      if ( (v13->IdleState & 8) != 0 && (v13->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
        SharedReadyQueue = 0LL;
      *(v12 - 3) = SharedReadyQueue;
      NextThread = (ULONG_PTR)v13->NextThread;
      *(v12 - 2) = NextThread;
      if ( !NextThread )
      {
        NextThread = (ULONG_PTR)v13->CurrentThread;
        *(v12 - 2) = NextThread;
      }
      if ( v13->NextThread == (_KTHREAD *)NextThread )
      {
        *(_BYTE *)v12 |= 4u;
      }
      else
      {
        v16 = *(_BYTE *)v12;
        if ( v13 == KeGetCurrentPrcb() )
          v17 = v16 | 4;
        else
          v17 = v16 & 0xFB;
        *(_BYTE *)v12 = v17;
      }
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
      {
        if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 && *(_DWORD *)(NextThread + 536) == v13->Number )
        {
          if ( *(_BYTE *)(NextThread + 388) == 2
            || *(_BYTE *)(NextThread + 388) == 3
            || *(_BYTE *)(NextThread + 388) == 5
            && (v18 = *(_BYTE *)(NextThread + 112) & 7, v18 != 1)
            && (unsigned __int8)(v18 - 3) > 3u )
          {
            KiUpdateVPBackingThreadPriority(NextThread);
            v11 = v96;
          }
        }
        *(_QWORD *)(NextThread + 64) = 0LL;
      }
      v19 = ((v13->IdleState & 1) == 0) | *(_BYTE *)v12 & 0xFE;
      *(_BYTE *)v12 = v19;
      v20 = v19 ^ (v19 ^ (v13->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v12 = v20;
      if ( ((v20 >> 1) & 1u) > v10 )
        v10 = (v20 >> 1) & 1;
      v12 += 5;
      ++v6;
      v96 = --v11;
    }
    while ( v11 );
    v7 = v97;
    LODWORD(v9) = v95;
    v5 = a2;
    goto LABEL_37;
  }
  if ( (_DWORD)v9 == 1 )
  {
    v6 = (struct _KPRCB **)(*(_QWORD *)(v7 + 34904) + 8LL);
    v8 = **(unsigned __int8 **)(v7 + 34904);
  }
  v10 = 0;
  if ( v8 )
    goto LABEL_10;
LABEL_37:
  HIDWORD(v100[0]) = v10;
  LODWORD(v100[1]) = v9;
  LOBYTE(v100[0]) = v8;
  if ( (_DWORD)v9 )
    BYTE1(v100[0]) = *(_BYTE *)(*(_QWORD *)(v7 + 34904) + 1LL);
  else
    BYTE1(v100[0]) = 0;
  if ( v10 )
  {
    v21 = 0LL;
    v22 = 0;
    if ( v8 )
    {
      v23 = &v100[2];
      while ( v23[2] == *(_QWORD *)(*v23 + 34944LL) )
      {
        ++v22;
        v23 += 5;
        if ( v22 >= v8 )
          goto LABEL_47;
      }
      v21 = v23;
LABEL_47:
      v24 = &v100[6];
      v25 = v8;
      do
      {
        if ( v24 - 32 != (_BYTE *)v21 )
        {
          *((_QWORD *)v24 - 2) = v21[2];
          *v24 = *((_BYTE *)v21 + 32) | 0x20;
        }
        v24 += 40;
        --v25;
      }
      while ( v25 );
    }
  }
  v26 = v92;
  if ( !v5 && !v3 )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v100, v92);
    LOBYTE(v28) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v29, 0LL, v28, v88);
    if ( (v34 & 2) != 0 )
    {
      v35 = 0;
      if ( LOBYTE(v100[0]) > v31 )
      {
        do
        {
          v36 = &v100[5 * v35 + 2];
          if ( v36 != v33 )
          {
            LOBYTE(v32) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v36, v30, 0LL, v32, v89);
          }
          ++v35;
        }
        while ( v35 < LOBYTE(v100[0]) );
      }
      HIDWORD(v100[0]) = 0;
    }
  }
  for ( i = 0LL; ; i = v38 )
  {
    v38 = 0LL;
    if ( !LOBYTE(v100[0]) )
      break;
    v39 = (volatile signed __int32 **)&v100[3];
    v40 = LOBYTE(v100[0]);
    do
    {
      if ( *v39 > i && (!v38 || *v39 < v38) )
        v38 = *v39;
      v39 += 5;
      --v40;
    }
    while ( v40 );
    if ( !v38 )
      break;
    v94 = 0;
    while ( _interlockedbittestandset64(v38, 0LL) )
    {
      do
        KeYieldProcessorEx(&v94);
      while ( *(_QWORD *)v38 );
    }
  }
LABEL_73:
  memset(v101, 0, sizeof(v101));
  KiStartReadyQueueEnumeratorForRescheduleContext(v101, v100);
LABEL_74:
  while ( 1 )
  {
    j = BYTE13(v101[0]);
    if ( BYTE13(v101[0]) == 4 )
      break;
    if ( BYTE13(v101[0]) )
      goto LABEL_87;
    for ( j = 1; (unsigned __int8)j < 4u; ++j )
    {
      switch ( j )
      {
        case 1:
          v43 = 0LL;
          break;
        case 2:
          ready = KiReadyQueueEnumeratorStartScbQueuesPhase(v101);
          goto LABEL_84;
        case 3:
          v43 = 1LL;
          break;
        default:
          continue;
      }
      ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(v101, v43);
LABEL_84:
      if ( ready >= 0 )
        break;
    }
    BYTE13(v101[0]) = j;
    if ( j == 4 )
      break;
LABEL_87:
    v45 = **((_QWORD **)&v101[2] + 1);
    *((_QWORD *)&v101[2] + 1) = v45;
    if ( v45 == *(_QWORD *)&v101[2] )
    {
      do
      {
        if ( (int)KiAdvanceReadyQueueEnumeratorToNextList(v101) < 0 )
          goto LABEL_133;
        v45 = **((_QWORD **)&v101[2] + 1);
        *((_QWORD *)&v101[2] + 1) = v45;
      }
      while ( v45 == *(_QWORD *)&v101[2] );
      j = BYTE13(v101[0]);
    }
    v46 = v45 - 216;
    v47 = *(_QWORD *)&v101[3 * BYTE10(v101[0]) + 3];
    if ( j == 2 )
    {
      v48 = *(_QWORD *)&v101[1];
      v49 = 0LL;
    }
    else
    {
      if ( BYTE12(v101[0]) == 1 )
        v49 = *((_QWORD *)&v101[3 * BYTE10(v101[0]) + 3] + 1);
      else
        v49 = 0LL;
      v48 = 0LL;
    }
    if ( *(_QWORD *)(v46 + 568) == KiCpuSetSequence || (*(_DWORD *)(v46 + 116) & 8) != 0 )
    {
      if ( !v48
        && (v50 = *(_QWORD *)(v46 + 104)) != 0
        && (v51 = *(unsigned int *)(v47 + 216) + v50) != 0
        && (LOBYTE(v41) = 1, (unsigned int)KiGetThreadEffectiveRankNonZero(v46, v51, v41, 0LL)) )
      {
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v101, v46);
        *(_DWORD *)(v46 + 536) = *(_DWORD *)(v47 + 36);
        KiAddThreadToScbQueue(v47, v51, v46, 0LL);
      }
      else
      {
        v52 = (*(_DWORD *)(v46 + 120) >> 1) & 1;
        if ( v52 <= SLODWORD(v100[1]) )
        {
          if ( v52 < SHIDWORD(v100[0]) )
            v52 = HIDWORD(v100[0]);
          if ( v52 )
          {
            v60 = 0;
            if ( LOBYTE(v100[0]) )
            {
              while ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(&v100[5 * v60 + 2], v46, 0LL) )
              {
                if ( ++v60 >= LOBYTE(v100[0]) )
                  goto LABEL_126;
              }
            }
            else
            {
LABEL_126:
              v61 = 0;
              if ( LOBYTE(v100[0]) )
              {
                while ( !(unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
                                            &v100[5 * v61 + 2],
                                            v46,
                                            v47,
                                            v49) )
                {
                  if ( ++v61 >= LOBYTE(v100[0]) )
                    goto LABEL_74;
                }
                v59 = v100[5 * v61 + 2];
LABEL_131:
                if ( v59 )
                {
                  KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v101, v46);
                  KiScheduleThreadToRescheduleContext((unsigned __int8 *)v100, v46, v59, 0, (__int64)&v91);
                  goto LABEL_73;
                }
              }
            }
          }
          else
          {
            v53 = 0;
            if ( LOBYTE(v100[0]) )
            {
              while ( 1 )
              {
                v54 = &v100[5 * v53 + 2];
                if ( !(unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v54, v46, v47, v49) )
                  goto LABEL_120;
                v98 = 0LL;
                if ( KiGroupSchedulingEnabled )
                  break;
                v56 = *((_BYTE *)v54 + 32);
                v57 = v54[2];
                if ( (v56 & 1) != 0
                  || (v58 = *(_BYTE *)(v46 + 195), v58 > *(char *)(v57 + 195))
                  || v58 == *(_BYTE *)(v57 + 195) && (v56 & 0x18) != 0 )
                {
LABEL_122:
                  v59 = *v54;
                  goto LABEL_131;
                }
                if ( (v56 & 0x10) != 0 )
                {
                  v55 = v58 == 0;
LABEL_119:
                  if ( !v55 )
                    goto LABEL_122;
                }
LABEL_120:
                if ( ++v53 >= LOBYTE(v100[0]) )
                  goto LABEL_74;
              }
              v55 = (unsigned __int8)KiEvaluateGroupSchedulingPreemption(&v100[5 * v53 + 2], v46, 0LL, &v98) == 0;
              goto LABEL_119;
            }
          }
        }
      }
    }
    else
    {
      KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v101, v46);
      KiInsertDeferredReadyList(&v91, v46);
    }
  }
LABEL_133:
  for ( k = 0LL; ; k = v63 )
  {
    v63 = 0LL;
    if ( !LOBYTE(v100[0]) )
      break;
    v64 = (volatile signed __int64 **)&v100[3];
    v65 = LOBYTE(v100[0]);
    do
    {
      if ( *v64 > k && (!v63 || *v64 < v63) )
        v63 = *v64;
      v64 += 5;
      --v65;
    }
    while ( v65 );
    if ( !v63 )
      break;
    _InterlockedAnd64(v63, 0LL);
  }
  v66 = 0;
  v67 = 1;
  v68 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v67 = 3;
  if ( LOBYTE(v100[0]) )
  {
    do
      v66 |= KiCommitRescheduleContextEntry(&v100[5 * v68++ + 2], v26, v67, &v91);
    while ( v68 < LOBYTE(v100[0]) );
  }
  if ( LODWORD(v100[1]) == 1 )
  {
    v69 = *(unsigned __int8 **)(v100[2] + 34904LL);
    v70 = v69[1] + 1;
    if ( v70 >= *v69 )
      v70 = 0;
    v69[1] = v70;
  }
  if ( v91 || v66 )
  {
    v71 = (__int64 *)v93[0];
    KiReleasePrcbLocksForIsolationUnit(v93[0]);
    if ( v66 )
    {
      KiCompleteRescheduleContext(v100, v26);
      KiFlushSoftwareInterruptBatch(v26 + 12760);
    }
    if ( v91 )
      KiReadyDeferredReadyList(v26, &v91);
    KiAcquirePrcbLocksForIsolationUnit(v26, 0, v71);
  }
  else
  {
    v71 = (__int64 *)v93[0];
    v72 = *(_QWORD *)v93[0];
    v73 = *(_QWORD *)v93[0] & 0xFFFFFFFFFFFFFFFEuLL;
    v93[0] = v73;
    if ( (v72 & 1) != 0 )
    {
      KzReleaseAdditionalPrcbLocks(*(_QWORD *)(v73 + 34904) + 8LL, **(unsigned __int8 **)(v73 + 34904), v93, 1LL);
      *v71 &= ~1uLL;
    }
  }
  v3 = *(_QWORD *)(v26 + 16);
  if ( !v3 || v3 == *(_QWORD *)(v26 + 24) )
  {
    v74 = *(_BYTE *)(v26 + 35);
    if ( (v74 & 1) != 0 )
      __fastfail(0x21u);
    if ( (v74 & 8) != 0 )
    {
      if ( !v3 )
        KiReleasePrcbLocksForIsolationUnit(v71);
      return v3;
    }
    v75 = *v71;
    v76 = *v71 & 0xFFFFFFFFFFFFFFFEuLL;
    v99 = v76;
    if ( (v75 & 1) != 0 )
    {
      v77 = (unsigned __int64 *)(*(_QWORD *)(v76 + 34904) + 8LL);
      v78 = **(unsigned __int8 **)(v76 + 34904);
      if ( **(_BYTE **)(v76 + 34904) )
        goto LABEL_170;
    }
    else
    {
      v77 = &v99;
      v78 = 1;
      do
LABEL_170:
        _InterlockedAnd64((volatile signed __int64 *)(v77[--v78] + 48), 0LL);
      while ( v78 );
    }
    *v71 = 0LL;
    v79 = *(_QWORD *)(v26 + 192);
    v3 = KiSearchForNewThreadOnSubNode(v26, v79, v71);
    if ( !v3 )
    {
      v80 = *(unsigned __int16 *)(v79 + 138);
      LODWORD(v93[1]) = *(unsigned __int16 *)(v79 + 138);
      memset((char *)&v93[1] + 4, 0, 20);
      v93[2] = KeNodeBlock[v80];
      for ( m = *(_DWORD *)(v93[2] + 16LL); ; m = *(_DWORD *)(v84 + 16) )
      {
        LODWORD(v93[3]) = m;
        while ( m )
        {
          _BitScanForward((unsigned int *)&v85, m);
          LODWORD(v95) = v85;
          m &= ~(1 << v85);
          LODWORD(v93[3]) = m;
          v86 = *(_QWORD *)(v93[2] + 8 * v85 + 24);
          if ( !v86 )
            goto LABEL_182;
          if ( v86 != *(_QWORD *)(v26 + 192) )
          {
            v3 = KiSearchForNewThreadOnSubNode(v26, v86, v71);
            if ( v3 )
              return v3;
          }
        }
        v82 = HIDWORD(v93[1]) + 1;
        HIDWORD(v93[1]) = v82;
        if ( v82 == (unsigned __int16)KeNumberNodes )
          break;
        v83 = *(unsigned int *)(qword_140C65718
                              + 4LL * ((unsigned int)(unsigned __int16)KeNumberNodes * LODWORD(v93[1]) + v82));
        if ( (_DWORD)v83 == -1 )
          break;
        v84 = KeNodeBlock[v83];
        v93[3] = 0LL;
        v93[2] = v84;
      }
LABEL_182:
      v3 = KiReparkIdlingProcessorIfNecessary(v26, v71);
      if ( !v3 && !a2 )
      {
        LODWORD(v92) = 0;
        *v71 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v92);
          while ( *(_QWORD *)(v26 + 48) );
        }
        return *(_QWORD *)(v26 + 16);
      }
    }
  }
  return v3;
}
