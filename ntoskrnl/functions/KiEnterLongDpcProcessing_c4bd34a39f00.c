bool __fastcall KiEnterLongDpcProcessing(unsigned __int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ecx
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 *v16; // r15
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  int v25; // r9d
  struct _KPRCB **v26; // r8
  unsigned int v27; // r12d
  unsigned __int8 *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // r13d
  _QWORD *v31; // rsi
  __int64 v32; // r9
  struct _KPRCB *v33; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KTHREAD *NextThread; // rax
  ULONG_PTR CurrentThread; // rbx
  char v37; // di
  char v38; // di
  char v39; // al
  unsigned __int8 v40; // cl
  _QWORD *v41; // r8
  unsigned int v42; // r9d
  _QWORD *v43; // rdx
  _BYTE *v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // r10
  __int64 v47; // r11
  unsigned int v48; // ecx
  _QWORD *v49; // rax
  unsigned __int8 v50; // bl
  unsigned int v51; // r12d
  unsigned int i; // r15d
  __int64 v53; // rsi
  _QWORD *v54; // r10
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // ecx
  char v59; // al
  __int64 v60; // rbx
  __int64 v61; // rcx
  char v62; // al
  bool v63; // cl
  int v64; // r15d
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // esi
  __int64 v70; // rbx
  _QWORD *v71; // r10
  __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // ecx
  char v76; // al
  __int64 v77; // r15
  __int64 v78; // rcx
  char v79; // al
  bool v80; // cl
  char v81; // al
  char v82; // cl
  char v83; // al
  unsigned int v84; // r15d
  char v85; // si
  unsigned int v86; // r12d
  unsigned int v87; // ebx
  unsigned __int8 *v88; // rdx
  unsigned __int8 v89; // al
  unsigned __int64 v90; // rcx
  unsigned __int64 *v91; // r8
  int v92; // edx
  unsigned __int64 v93; // rsi
  _QWORD *v94; // rdi
  int v95; // r9d
  unsigned __int64 v96; // rcx
  unsigned __int64 *v97; // r14
  int v98; // edx
  unsigned __int8 v99; // [rsp+31h] [rbp-CFh]
  _QWORD *v100; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v101; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v102; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v103; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v104; // [rsp+58h] [rbp-A8h]
  int v105; // [rsp+60h] [rbp-A0h] BYREF
  int v106; // [rsp+64h] [rbp-9Ch]
  unsigned int v107; // [rsp+68h] [rbp-98h]
  unsigned __int64 v108; // [rsp+70h] [rbp-90h] BYREF
  __int64 v109; // [rsp+78h] [rbp-88h]
  unsigned __int64 v110; // [rsp+80h] [rbp-80h] BYREF
  __int64 v111; // [rsp+88h] [rbp-78h]
  unsigned __int64 v112; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v113[42]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = 0;
  v103 = a2;
  v108 = a1;
  v3 = a2;
  v4 = a1;
  v5 = 0;
  v99 = 0;
  if ( a2 == *(_QWORD *)(a1 + 13112) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  v11 = 0;
  v12 = **(_BYTE **)(v4 + 56);
  v112 = v4;
  if ( v12 >> 7 )
    v11 = v12 >> 7;
  v13 = v11 | v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v102 = v13;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_22;
    v14 = *(_BYTE **)(v4 + 34904);
    v15 = (unsigned __int8)*v14;
    v16 = (unsigned __int64 *)(v14 + 8);
    if ( !*v14 )
      goto LABEL_22;
  }
  else
  {
    v16 = &v112;
    v15 = 1;
  }
  v17 = v15;
  do
  {
    v18 = *v16;
    v105 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v105);
      while ( *(_QWORD *)(v18 + 48) );
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v13 = v102;
  v3 = v103;
LABEL_22:
  if ( ((**(_BYTE **)(v4 + 56) ^ v12) & 0x80u) != 0 )
  {
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v4, 0LL, &v102);
    v13 = v102;
  }
  v19 = *(_DWORD *)(v4 + 236);
  if ( (v19 & 0x1000) == 0 )
    *(_DWORD *)(v4 + 236) = v19 | 0x1000;
  if ( v3 != *(_QWORD *)(v4 + 24) )
  {
    v20 = *(_QWORD *)(v4 + 13112);
    if ( v20 )
    {
      if ( v3 != v20
        && *(char *)(v3 + 195) >= 16
        && (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(v4, *(_QWORD *)(v3 + 576)) )
      {
        v5 = 2;
      }
    }
  }
  v21 = *(_QWORD *)(v4 + 13112);
  v22 = v5;
  v23 = *(_QWORD *)(v4 + 16);
  v107 = v5;
  v111 = v23;
  if ( v21 && v23 != v21 )
  {
    if ( v23 )
      v99 = *(_BYTE *)(v23 + 195);
    v100 = 0LL;
    memset(v113, 0, sizeof(v113));
    v104 = 0LL;
    v24 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    v25 = v13 & 1;
    v110 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    v106 = v25;
    v26 = 0LL;
    v27 = 0;
    if ( (v13 & 1) != 0 )
    {
      if ( v25 == 1 )
      {
        v28 = *(unsigned __int8 **)(v24 + 34904);
        v26 = (struct _KPRCB **)(v28 + 8);
        v104 = (unsigned __int64 *)(v28 + 8);
        v27 = *v28;
      }
      v29 = 0;
      v101 = 0;
      if ( !v27 )
      {
LABEL_68:
        HIDWORD(v113[0]) = v29;
        LODWORD(v113[1]) = v25;
        LOBYTE(v113[0]) = v27;
        if ( v25 )
          BYTE1(v113[0]) = *(_BYTE *)(*(_QWORD *)(v24 + 34904) + 1LL);
        else
          BYTE1(v113[0]) = 0;
        if ( v29 )
        {
          v41 = 0LL;
          v42 = 0;
          if ( v27 )
          {
            v43 = &v113[2];
            while ( v43[2] == *(_QWORD *)(*v43 + 34944LL) )
            {
              ++v42;
              v43 += 5;
              if ( v42 >= v27 )
                goto LABEL_78;
            }
            v41 = v43;
LABEL_78:
            v44 = &v113[6];
            v45 = v27;
            do
            {
              if ( v44 - 32 != (_BYTE *)v41 )
              {
                *((_QWORD *)v44 - 2) = v41[2];
                *v44 = *((_BYTE *)v41 + 32) | 0x20;
              }
              v44 += 40;
              --v45;
            }
            while ( v45 );
          }
        }
        v46 = 0LL;
        v47 = *(_QWORD *)(v4 + 13112);
        v48 = 0;
        if ( LOBYTE(v113[0]) )
        {
          v49 = &v113[2];
          while ( *v49 != v4 )
          {
            ++v48;
            v49 += 5;
            if ( v48 >= LOBYTE(v113[0]) )
              goto LABEL_88;
          }
          v46 = v49;
        }
LABEL_88:
        v50 = *((_BYTE *)v46 + 32);
        v51 = (*(_DWORD *)(v47 + 120) >> 1) & 1;
        if ( v51 >= ((v50 >> 1) & 1u) )
        {
          if ( v51 )
          {
            v69 = 0;
            v64 = 0;
            if ( !LOBYTE(v113[0]) )
              goto LABEL_135;
            do
            {
              v70 = v113[5 * v69 + 2];
              v71 = &v113[5 * v69 + 2];
              v72 = v71[3];
              v73 = v72 - 1;
              if ( v70 == v4 )
              {
                if ( v73 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v72) )
                {
                  if ( (*((_BYTE *)v71 + 33) & 1) != 0 )
                    *(_DWORD *)(v74 + 116) |= 2u;
                  *(_BYTE *)(v74 + 565) = 1;
                  KiInsertDeferredReadyList(&v100, v74);
                }
                v75 = *(_DWORD *)(v47 + 120);
                v76 = v71[4] & 0xC4;
                *((_BYTE *)v71 + 33) &= ~1u;
                v71[2] = v47;
                v71[3] = v47;
                *((_BYTE *)v71 + 32) = v76 | (2 * (((v75 & 2) != 0) | 2));
                if ( !(unsigned __int8)KiIsPrcbThread(v47) )
                  *(_DWORD *)(v47 + 536) = *(_DWORD *)(v70 + 36);
              }
              else
              {
                v77 = *(_QWORD *)(v70 + 34944);
                if ( v73 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v72) )
                {
                  if ( (*((_BYTE *)v71 + 33) & 1) != 0 )
                    *(_DWORD *)(v78 + 116) |= 2u;
                  *(_BYTE *)(v78 + 565) = 1;
                  KiInsertDeferredReadyList(&v100, v78);
                }
                v79 = v71[4] & 0xE4;
                v80 = (*(_DWORD *)(v47 + 120) & 2) != 0;
                v71[2] = v47;
                v81 = v79 | (2 * (v80 | 2));
                v82 = v81 | 0x20;
                v83 = v81 & 0xDF;
                if ( v47 == v77 )
                  v82 = v83;
                *((_BYTE *)v71 + 32) = v82;
                *((_BYTE *)v71 + 33) &= ~1u;
                v71[3] = v77;
                if ( !(unsigned __int8)KiIsPrcbThread(v77) )
                  *(_DWORD *)(v77 + 536) = *(_DWORD *)(v70 + 36);
              }
              ++v69;
            }
            while ( v69 < LOBYTE(v113[0]) );
          }
          else
          {
            v65 = v46[3];
            v66 = *v46;
            if ( (unsigned __int64)(v65 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v65) )
            {
              if ( (*((_BYTE *)v46 + 33) & 1) != 0 )
                *(_DWORD *)(v67 + 116) |= 2u;
              *(_BYTE *)(v67 + 565) = 1;
              KiInsertDeferredReadyList(&v100, v67);
            }
            v68 = *(_DWORD *)(v47 + 120);
            *((_BYTE *)v46 + 33) &= ~1u;
            v46[2] = v47;
            v46[3] = v47;
            *((_BYTE *)v46 + 32) = v50 & 0xC4 | (2 * (((v68 & 2) != 0) | 2));
            if ( *(_UNKNOWN **)(v47 + 544) != &KiInitialProcess )
              *(_DWORD *)(v47 + 536) = *(_DWORD *)(v66 + 36);
          }
          v64 = 0;
        }
        else
        {
          for ( i = 0; i < LOBYTE(v113[0]); ++i )
          {
            v53 = v113[5 * i + 2];
            v54 = &v113[5 * i + 2];
            v55 = v54[3];
            v56 = v55 - 1;
            if ( v53 == v4 )
            {
              if ( v56 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v55) )
              {
                if ( (*((_BYTE *)v54 + 33) & 1) != 0 )
                  *(_DWORD *)(v57 + 116) |= 2u;
                *(_BYTE *)(v57 + 565) = 1;
                KiInsertDeferredReadyList(&v100, v57);
              }
              v58 = *(_DWORD *)(v47 + 120);
              v59 = v54[4] & 0xC4;
              *((_BYTE *)v54 + 33) &= ~1u;
              v54[2] = v47;
              v54[3] = v47;
              *((_BYTE *)v54 + 32) = v59 | (2 * (((v58 & 2) != 0) | 2));
              if ( !(unsigned __int8)KiIsPrcbThread(v47) )
                *(_DWORD *)(v47 + 536) = *(_DWORD *)(v53 + 36);
            }
            else
            {
              v60 = *(_QWORD *)(v53 + 24);
              if ( v56 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v55) )
              {
                if ( (*((_BYTE *)v54 + 33) & 1) != 0 )
                  *(_DWORD *)(v61 + 116) |= 2u;
                *(_BYTE *)(v61 + 565) = 1;
                KiInsertDeferredReadyList(&v100, v61);
              }
              v62 = v54[4] & 0xC5;
              v63 = (*(_DWORD *)(v60 + 120) & 2) != 0;
              v54[2] = v60;
              *((_BYTE *)v54 + 32) = v62 | (2 * v63) | 5;
              *((_BYTE *)v54 + 33) &= ~1u;
              v54[3] = v60;
              if ( !(unsigned __int8)KiIsPrcbThread(v60) )
                *(_DWORD *)(v60 + 536) = *(_DWORD *)(v53 + 36);
            }
          }
          v64 = 1;
        }
LABEL_135:
        HIDWORD(v113[0]) = v51;
        v84 = v107 | (4 * v64) | 1;
        if ( v84 >= 4 )
          KiSearchForNewThreadsForRescheduleContext(v113, (__int64)&v100);
        v85 = 0;
        v86 = 0;
        v87 = 0;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          v86 = 2;
        if ( LOBYTE(v113[0]) )
        {
          do
            v85 |= KiCommitRescheduleContextEntry(&v113[5 * v87++ + 2], v4, v86, &v100);
          while ( v87 < LOBYTE(v113[0]) );
        }
        if ( LODWORD(v113[1]) == 1 )
        {
          v88 = *(unsigned __int8 **)(v113[2] + 34904LL);
          v89 = v88[1] + 1;
          if ( v89 >= *v88 )
            v89 = 0;
          v88[1] = v89;
        }
        v90 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        v5 = v84 | (8 * (v85 & 1));
        v108 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v13 & 1) != 0 )
        {
          v91 = (unsigned __int64 *)(*(_QWORD *)(v90 + 34904) + 8LL);
          v92 = **(unsigned __int8 **)(v90 + 34904);
          if ( !**(_BYTE **)(v90 + 34904) )
            goto LABEL_150;
        }
        else
        {
          v91 = &v108;
          v92 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v91[--v92] + 48), 0LL);
        while ( v92 );
LABEL_150:
        if ( v5 < 8 )
        {
          v93 = v4 + 12760;
        }
        else
        {
          KiCompleteRescheduleContext(v113, v4);
          v93 = v4 + 12760;
          KiFlushSoftwareInterruptBatch(v4 + 12760);
        }
        v94 = v100;
        if ( v100 )
        {
          v100 = (_QWORD *)*v100;
          do
          {
            KiDeferredReadySingleThread(v4, v94 - 27, &v100);
            v94 = v100;
            ++v2;
            if ( v100 )
              v100 = (_QWORD *)*v100;
            if ( (v2 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(v93);
          }
          while ( v94 );
          KiFlushSoftwareInterruptBatch(v93);
        }
        v3 = v103;
        LODWORD(v23) = v111;
        goto LABEL_162;
      }
    }
    else
    {
      v26 = (struct _KPRCB **)&v110;
      v101 = 0;
      v104 = &v110;
      v27 = 1;
    }
    v30 = v101;
    v31 = &v113[6];
    v32 = v27;
    v109 = v27;
    do
    {
      *(v31 - 3) = 0LL;
      *v31 = 0LL;
      v33 = *v26;
      *(v31 - 1) = -1LL;
      *((_BYTE *)v31 + 4) = 63;
      *(v31 - 4) = v33;
      SharedReadyQueue = v33->SharedReadyQueue;
      if ( (v33->IdleState & 8) != 0 && (v33->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
        SharedReadyQueue = 0LL;
      NextThread = v33->NextThread;
      *(v31 - 3) = SharedReadyQueue;
      CurrentThread = (ULONG_PTR)NextThread;
      *(v31 - 2) = NextThread;
      if ( !NextThread )
      {
        CurrentThread = (ULONG_PTR)v33->CurrentThread;
        *(v31 - 2) = CurrentThread;
      }
      if ( NextThread == (_KTHREAD *)CurrentThread )
      {
        v37 = *(_BYTE *)v31 | 4;
      }
      else
      {
        v38 = *(_BYTE *)v31;
        if ( v33 == KeGetCurrentPrcb() )
          v37 = v38 | 4;
        else
          v37 = v38 & 0xFB;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 && *(_DWORD *)(CurrentThread + 536) == v33->Number )
        {
          if ( *(_BYTE *)(CurrentThread + 388) == 2
            || *(_BYTE *)(CurrentThread + 388) == 3
            || *(_BYTE *)(CurrentThread + 388) == 5
            && (v39 = *(_BYTE *)(CurrentThread + 112) & 7, v39 != 1)
            && (unsigned __int8)(v39 - 3) > 3u )
          {
            KiUpdateVPBackingThreadPriority(CurrentThread);
            v26 = (struct _KPRCB **)v104;
            v32 = v109;
          }
        }
        *(_QWORD *)(CurrentThread + 64) = 0LL;
      }
      v40 = (((v33->IdleState & 1) == 0) | v37 & 0xFE) ^ ((((v33->IdleState & 1) == 0) | v37) ^ (v33->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v31 = v40;
      if ( ((v40 >> 1) & 1u) > v30 )
        v30 = (v40 >> 1) & 1;
      ++v26;
      v31 += 5;
      v104 = (unsigned __int64 *)v26;
      v109 = --v32;
    }
    while ( v32 );
    v13 = v102;
    v24 = v110;
    v25 = v106;
    v101 = v30;
    v29 = v30;
    v4 = v108;
    goto LABEL_68;
  }
  if ( !v13 )
  {
LABEL_162:
    v95 = v99;
    v22 = v5;
    goto LABEL_163;
  }
  v96 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  v103 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v13 & 1) == 0 )
  {
    v97 = &v103;
    v98 = 1;
    goto LABEL_172;
  }
  v97 = (unsigned __int64 *)(*(_QWORD *)(v96 + 34904) + 8LL);
  v98 = **(unsigned __int8 **)(v96 + 34904);
  v95 = 0;
  if ( **(_BYTE **)(v96 + 34904) )
  {
LABEL_172:
    v95 = 0;
    do
      _InterlockedAnd64((volatile signed __int64 *)(v97[--v98] + 48), 0LL);
    while ( v98 );
  }
LABEL_163:
  _disable();
  if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 && (v5 & 3) != 0 )
    EtwTraceLongDpcMitigationEvent(v3, v23, *(unsigned __int8 *)(v3 + 195), v95, v5 & 1, (v22 & 2) != 0);
  return (v22 & 2) != 0;
}
