/*
 * XREFs of KiExecuteAllDpcs @ 0x140252F60
 * Callers:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x140396B20 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     KiEnterLongDpcProcessing @ 0x140254490 (KiEnterLongDpcProcessing.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140258C90 (KiScheduleThreadToRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140260ED0 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140261010 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiAddThreadToScbQueue @ 0x1402AE688 (KiAddThreadToScbQueue.c)
 *     KiIsPrcbThread @ 0x1402AEFCC (KiIsPrcbThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x1402C3E38 (KiCanLocalReadyThreadBeScheduledToRescheduleContext.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402C3F04 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiCheckThreadAffinity @ 0x1402DD370 (KiCheckThreadAffinity.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiInsertNewDpcRuntime @ 0x1402EE160 (KiInsertNewDpcRuntime.c)
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x1402EE9E4 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 *     KiAdvanceReadyQueueEnumeratorToNextScb @ 0x1402EEAE4 (KiAdvanceReadyQueueEnumeratorToNextScb.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1403428F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140457E30 (KiAcquireSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1405FAAEC (EtwTraceLongDpcDetectionEvent.c)
 */

char __fastcall KiExecuteAllDpcs(__int64 a1, unsigned __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int *v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // di
  volatile signed __int32 *v14; // rdi
  _QWORD **v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  unsigned __int64 v18; // r14
  ULONG_PTR v19; // r13
  _QWORD *v20; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  _DWORD *v25; // rdx
  __int64 v26; // rdi
  ULONG_PTR v27; // rdi
  _QWORD *v28; // r12
  unsigned __int64 v29; // r15
  void (__fastcall *v30)(unsigned __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR); // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r9
  __int64 v34; // r15
  unsigned int v35; // r11d
  __int64 v36; // r10
  ULONG_PTR v37; // r8
  unsigned int v38; // r11d
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  int v42; // esi
  __int16 v43; // r14
  unsigned int v44; // edi
  bool v45; // zf
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // r15
  struct _KPRCB *v50; // rcx
  signed __int32 *v51; // r8
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  __int64 v54; // rax
  struct _KPRCB **v55; // r8
  unsigned int v56; // r12d
  unsigned __int64 v57; // rcx
  int v58; // edi
  unsigned int v59; // r13d
  _QWORD *v60; // rsi
  unsigned __int64 *v61; // r9
  struct _KPRCB *v62; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // r14
  char v65; // cl
  char v66; // cl
  char v67; // cl
  bool v68; // dl
  char v69; // al
  char v70; // dl
  unsigned __int8 v71; // cl
  _QWORD *v72; // r8
  unsigned int v73; // r9d
  _QWORD *v74; // rdx
  _BYTE *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r14
  __int64 v78; // rsi
  __int64 v79; // r15
  char v80; // r11
  unsigned int v81; // edi
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  char v85; // dl
  unsigned int j; // r14d
  _QWORD *v87; // r10
  __int64 v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // r11
  __int64 v91; // rcx
  char v92; // al
  char v93; // cl
  char v94; // al
  __int64 v95; // r13
  __int64 v96; // rax
  int v97; // edi
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // r8
  _QWORD *v102; // r11
  int v103; // edi
  unsigned int k; // r10d
  _QWORD *v105; // rcx
  __int64 v106; // rcx
  char v107; // cl
  __int64 v108; // r11
  int v109; // eax
  __int64 RescheduleContextEntryForPrcb; // rax
  int v111; // edi
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // r8
  _QWORD *v116; // r11
  int v117; // edi
  unsigned int i; // r10d
  _QWORD *v119; // rcx
  volatile signed __int32 *m; // r8
  volatile signed __int32 *v121; // rdi
  volatile signed __int32 **v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 CanLocalReadyThreadBeScheduledToRescheduleContext; // r12
  char v126; // di
  int ready; // eax
  unsigned __int8 n; // dl
  _QWORD *v129; // r8
  unsigned int v130; // r9d
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rax
  unsigned __int8 v134; // r10
  __int64 v135; // r8
  __int64 v136; // r9
  unsigned int v137; // eax
  unsigned int v138; // ecx
  unsigned int v139; // eax
  __int64 v140; // rdi
  __int64 v141; // r14
  __int64 v142; // r15
  __int64 v143; // rsi
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rsi
  __int64 v147; // rsi
  __int64 v148; // rsi
  volatile signed __int64 *ii; // r9
  volatile signed __int64 *v150; // rax
  volatile signed __int64 **v151; // rdx
  __int64 v152; // r8
  char v153; // si
  unsigned int v154; // r14d
  unsigned int jj; // edi
  unsigned __int8 *v156; // rdx
  unsigned __int8 v157; // al
  unsigned __int64 *v158; // r8
  int v159; // edx
  unsigned __int64 v160; // r9
  __int64 v161; // r14
  _QWORD *v162; // rdi
  char v163; // si
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-518h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-518h]
  ULONG_PTR BugCheckParameter4b; // [rsp+20h] [rbp-518h]
  __int64 v167; // [rsp+28h] [rbp-510h]
  __int64 v168; // [rsp+28h] [rbp-510h]
  __int64 v169; // [rsp+28h] [rbp-510h]
  struct _KPRCB **v172; // [rsp+40h] [rbp-4F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-4F0h] BYREF
  _QWORD *v174; // [rsp+50h] [rbp-4E8h] BYREF
  char v175; // [rsp+58h] [rbp-4E0h]
  unsigned __int64 v176; // [rsp+60h] [rbp-4D8h]
  unsigned int BugCheckParameter3; // [rsp+6Ch] [rbp-4CCh]
  unsigned int BugCheckParameter3_4; // [rsp+70h] [rbp-4C8h]
  __int64 v179; // [rsp+78h] [rbp-4C0h] BYREF
  unsigned __int64 v180; // [rsp+80h] [rbp-4B8h] BYREF
  unsigned __int64 *v181; // [rsp+88h] [rbp-4B0h]
  int v182; // [rsp+90h] [rbp-4A8h] BYREF
  _DWORD v183[3]; // [rsp+94h] [rbp-4A4h] BYREF
  ULONG_PTR v184; // [rsp+A0h] [rbp-498h]
  unsigned int v185; // [rsp+A8h] [rbp-490h]
  __int64 v186; // [rsp+B0h] [rbp-488h] BYREF
  __int64 v187; // [rsp+B8h] [rbp-480h]
  ULONG_PTR v188; // [rsp+C0h] [rbp-478h]
  ULONG_PTR v189; // [rsp+C8h] [rbp-470h]
  ULONG_PTR v190; // [rsp+D0h] [rbp-468h]
  unsigned __int64 v191; // [rsp+D8h] [rbp-460h]
  _DWORD *v192; // [rsp+E0h] [rbp-458h]
  __int64 v193; // [rsp+E8h] [rbp-450h]
  __int64 *v194; // [rsp+F0h] [rbp-448h]
  __int64 v195; // [rsp+F8h] [rbp-440h]
  unsigned __int64 v196; // [rsp+100h] [rbp-438h] BYREF
  _QWORD **v197; // [rsp+110h] [rbp-428h]
  ULONG_PTR v198; // [rsp+118h] [rbp-420h]
  unsigned __int64 v199; // [rsp+120h] [rbp-418h]
  _DWORD *v200; // [rsp+130h] [rbp-408h]
  _DWORD *v201; // [rsp+150h] [rbp-3E8h]
  int *v202; // [rsp+158h] [rbp-3E0h]
  __int64 v203; // [rsp+160h] [rbp-3D8h]
  unsigned __int64 v204; // [rsp+168h] [rbp-3D0h] BYREF
  __int128 v205; // [rsp+170h] [rbp-3C8h] BYREF
  __int64 v206; // [rsp+188h] [rbp-3B0h]
  ULONG_PTR v207; // [rsp+190h] [rbp-3A8h]
  __int128 *v208; // [rsp+1A0h] [rbp-398h] BYREF
  __int64 v209; // [rsp+1A8h] [rbp-390h] BYREF
  _OWORD v210[2]; // [rsp+1B0h] [rbp-388h] BYREF
  _QWORD v211[42]; // [rsp+1D0h] [rbp-368h] BYREF
  _QWORD v212[54]; // [rsp+320h] [rbp-218h] BYREF
  _QWORD v213[4]; // [rsp+4D0h] [rbp-68h] BYREF
  void *retaddr; // [rsp+538h] [rbp+0h]

  v4 = a4;
  v192 = a3;
  v5 = a2;
  v176 = a2;
  v193 = a1;
  v187 = a1;
  v199 = a2;
  v200 = a3;
  v6 = 0LL;
  BugCheckParameter2 = 0LL;
  v205 = 0LL;
  v179 = 0LL;
  memset(v210, 0, sizeof(v210));
  v203 = a4;
  v7 = 48LL * a4 + a1 + 13120;
  v195 = v7;
  v8 = (int *)(v7 + 24);
  v202 = (int *)(v7 + 24);
  if ( !*(_DWORD *)(v7 + 24) )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      HIDWORD(v179) = 4200450;
      LOWORD(v179) = 3906;
    }
    else
    {
      HIDWORD(v179) = 4196866;
      LOWORD(v179) = 3908;
    }
    v9 = &v179;
  }
  v194 = v9;
  v181 = (unsigned __int64 *)(a1 + 11664);
  v191 = *(_QWORD *)(a1 + 11664);
  v197 = (_QWORD **)(48LL * a4 + a1 + 13120);
  while ( 1 )
  {
    v10 = (unsigned int)*v8;
    v11 = *(_DWORD *)(v7 + 40);
    v12 = !v4 && (v11 || (unsigned int)v10 >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v12 )
        goto LABEL_20;
      LOBYTE(a2) = v11 != 0;
      EtwTraceLongDpcDetectionEvent(v10, a2);
    }
    if ( v12 && (unsigned __int8)KiEnterLongDpcProcessing(a1, v5) )
      return 0;
LABEL_20:
    v14 = (volatile signed __int32 *)(v7 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 16);
    }
    else if ( _interlockedbittestandset64(v14, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 16));
    }
    if ( *v8 <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v193 + 2 * v203 + 13244), 0xFFEDu);
      *(_DWORD *)(v7 + 40) = 0;
      if ( !*v8 )
        break;
    }
    v15 = v197;
    v16 = *v197;
    v17 = (_QWORD *)**v197;
    *v197 = v17;
    if ( !v17 )
      v15[1] = v15;
    v18 = (unsigned __int64)(v16 - 1);
    BugCheckParameter2 = *(_QWORD *)(v18 + 24);
    v19 = *(_QWORD *)(v18 + 32);
    v188 = *(_QWORD *)(v18 + 40);
    v198 = *(_QWORD *)(v18 + 48);
    v20 = *(_QWORD **)(v18 + 56);
    v184 = (ULONG_PTR)v20;
    *(_QWORD *)(v18 + 56) = 0LL;
    --*v8;
    v15[4] = (_QWORD *)v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v14, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v23 = *SchedulerAssist;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v205 = BugCheckParameter2;
      *((_QWORD *)&v205 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                BugCheckParameter2 ^ _byteswap_uint64(KiWaitAlways ^ v18),
                                                KiWaitNever));
      v208 = &v205;
      v209 = 16LL;
      EtwTraceKernelEvent((unsigned int)&v208, 1, 537133056, 3941, 4196866);
    }
    if ( v9 )
      EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v210, 0x20000080u, 0LL);
    v25 = v192;
    v26 = (*v192)++ & 0xF;
    v27 = (ULONG_PTR)&v25[4 * v26 + 4];
    v190 = v27;
    *(_QWORD *)v27 = BugCheckParameter2;
    *(_DWORD *)(v27 + 8) = MEMORY[0xFFFFF78000000320];
    v201 = (_DWORD *)(v176 + 484);
    BugCheckParameter3 = *(_DWORD *)(v176 + 484);
    v185 = BugCheckParameter3;
    v28 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 33116) = 0;
    v29 = __rdtsc();
    v189 = v29;
    *v181 = (unsigned __int64)v20;
    if ( v20 != (_QWORD *)1 )
      v20[4] = v29;
    v30 = (void (__fastcall *)(unsigned __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR))BugCheckParameter2;
    if ( !a4 )
    {
      *(_QWORD *)(a1 + 13088) = BugCheckParameter2;
      *(_QWORD *)(a1 + 13104) = v29;
      *(_BYTE *)(a1 + 13242) = 1;
    }
    v30(v18, v19, v188, v198);
    v4 = a4;
    v31 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v31) << 32;
    v32 = v31;
    if ( !v4 )
    {
      *(_BYTE *)(a1 + 13242) = 0;
      v33 = v31 - v29;
      v34 = *(_QWORD *)(a1 + 13072);
      if ( v34 )
      {
        v35 = *(_DWORD *)(v34 + 4);
        v36 = -1LL << (*(_BYTE *)(v34 + 4) & 0x1F);
        v37 = BugCheckParameter2 & v36;
        v188 = (BugCheckParameter2 & v36) >> 40;
        v189 = (BugCheckParameter2 & v36) >> 32;
        v184 = (BugCheckParameter2 & v36) >> 24;
        v190 = (BugCheckParameter2 & v36) >> 16;
        v38 = v35 >> 5;
        if ( v38 )
        {
          v207 = BugCheckParameter2 & v36;
          v39 = (unsigned __int64 *)(*(_QWORD *)(v34 + 8)
                                   + 8
                                   * ((((BugCheckParameter2 & v36) >> 56)
                                     + 37
                                     * ((unsigned __int8)((BugCheckParameter2 & v36) >> 48)
                                      + 37
                                      * ((unsigned __int8)v188
                                       + 37
                                       * ((unsigned __int8)v189
                                        + 37
                                        * ((unsigned __int8)v184
                                         + 37
                                         * ((unsigned __int8)v190
                                          + 37
                                          * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v36) >> 8)
                                           + 37 * ((unsigned int)(unsigned __int8)v37 + 11623883)))))))) & (v38 - 1)));
          while ( 1 )
          {
            a2 = *v39;
            v39 = (unsigned __int64 *)a2;
            if ( (a2 & 1) != 0 )
              break;
            if ( v37 == (v36 & *(_QWORD *)(a2 + 8)) )
            {
              *(_QWORD *)(a2 + 16) = (*(_QWORD *)(a2 + 16) >> 2) + ((3 * v33) >> 2);
              *(_BYTE *)(a2 + 24) = 1;
              goto LABEL_53;
            }
          }
        }
        KiInsertNewDpcRuntime(v34, BugCheckParameter2, v33);
LABEL_53:
        v28 = (_QWORD *)a1;
        v4 = a4;
      }
      v28[1636] = 0LL;
      v28[1637] = -1LL;
      v28[1638] = 0LL;
    }
    if ( v20 != (_QWORD *)1 )
    {
      v40 = v32 - v20[4];
      v20[3] += v40;
      ++v20[5];
      v20[10] += v40;
      ++v20[11];
    }
    *(_DWORD *)(v27 + 12) = MEMORY[0xFFFFF78000000320];
    if ( BugCheckParameter3 != *v201 )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, BugCheckParameter3, (unsigned int)*v201);
    v41 = v28[4375];
    if ( v41 && !v4 )
      _InterlockedDecrement((volatile signed __int32 *)(v41 + 28));
    v9 = v194;
    if ( v194 )
    {
      v42 = *((_DWORD *)v194 + 1);
      v43 = *(_WORD *)v194;
      v213[2] = &BugCheckParameter2;
      v213[3] = 8LL;
      v44 = *(_DWORD *)(EtwpHostSiloState + 4248);
      v45 = !_BitScanForward(&v46, v44);
      BugCheckParameter3_4 = v46;
      if ( !v45 )
      {
        do
        {
          v44 &= v44 - 1;
          v47 = v46;
          a2 = EtwpHostSiloState;
          v48 = 32LL * v46 + EtwpHostSiloState + 4284;
          if ( v48 && (*(_DWORD *)(v48 + 4) & 0x80u) != 0 )
          {
            v213[0] = &v209 + *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4233);
            v213[1] = 8LL;
            EtwpLogKernelEvent(
              (unsigned int)v213,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4232),
              2,
              v43,
              v42);
          }
          v45 = !_BitScanForward(&v46, v44);
        }
        while ( !v45 );
        BugCheckParameter3_4 = v46;
      }
    }
    _disable();
    v8 = v202;
    v7 = v195;
    v5 = v176;
    if ( !*v202 )
      goto LABEL_69;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v7 + 16));
LABEL_69:
  *v181 = v191;
  v49 = (_QWORD *)a1;
  if ( (*(_DWORD *)(a1 + 236) & 0x1000) == 0 )
    return 1;
  memset(v211, 0, sizeof(v211));
  if ( v5 == *(_QWORD *)(a1 + 13112) )
    return 1;
  v50 = KeGetCurrentPrcb();
  v51 = (signed __int32 *)v50->SchedulerAssist;
  if ( v51 )
  {
    _m_prefetchw(v51);
    v52 = *v51;
    do
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange(v51, v52 & 0xFFDFFFFF, v52);
    }
    while ( v53 != v52 );
    if ( (v52 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v50);
  }
  _enable();
  v206 = a1;
  v180 = v187 & 0xFFFFFFFFFFFFFFFEuLL;
  v182 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v182);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_DWORD *)(a1 + 236) &= ~0x1000u;
  v54 = *(_QWORD *)(a1 + 13112);
  if ( !v54 || *(_QWORD *)(a1 + 16) != v54 )
  {
    v6 = v180;
    goto LABEL_293;
  }
  v174 = 0LL;
  v55 = 0LL;
  v172 = 0LL;
  v56 = 0;
  v57 = v180 & 0xFFFFFFFFFFFFFFFEuLL;
  v196 = v180 & 0xFFFFFFFFFFFFFFFEuLL;
  v58 = v180 & 1;
  v191 = v180 & 1;
  if ( (v180 & 1) != 0 )
  {
    if ( v58 == 1 )
    {
      v55 = (struct _KPRCB **)(*(_QWORD *)(v57 + 34904) + 8LL);
      v56 = **(unsigned __int8 **)(v57 + 34904);
      goto LABEL_86;
    }
  }
  else
  {
    v55 = (struct _KPRCB **)&v196;
    v56 = 1;
LABEL_86:
    v172 = v55;
  }
  v59 = 0;
  if ( !v56 )
    goto LABEL_118;
  v60 = &v211[6];
  v61 = (unsigned __int64 *)v56;
  v181 = (unsigned __int64 *)v56;
  while ( 2 )
  {
    *((_OWORD *)v60 - 2) = 0LL;
    *((_OWORD *)v60 - 1) = 0LL;
    *v60 = 0LL;
    *(v60 - 1) = -1LL;
    *((_BYTE *)v60 + 4) = 63;
    v62 = *v55;
    *(v60 - 4) = *v55;
    SharedReadyQueue = v62->SharedReadyQueue;
    if ( (v62->IdleState & 8) != 0 && (v62->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
      SharedReadyQueue = 0LL;
    *(v60 - 3) = SharedReadyQueue;
    NextThread = (ULONG_PTR)v62->NextThread;
    *(v60 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v62->CurrentThread;
      *(v60 - 2) = NextThread;
    }
    if ( v62->NextThread == (_KTHREAD *)NextThread )
    {
      *(_BYTE *)v60 |= 4u;
    }
    else
    {
      v65 = *(_BYTE *)v60;
      if ( v62 == KeGetCurrentPrcb() )
        v66 = v65 | 4;
      else
        v66 = v65 & 0xFB;
      *(_BYTE *)v60 = v66;
    }
    v67 = 0;
    if ( (*(_DWORD *)(NextThread + 120) & 0x400000) == 0 )
      goto LABEL_112;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
    {
      v175 = 1;
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
      {
        v68 = 0;
        if ( *(_DWORD *)(NextThread + 536) != v62->Number )
          goto LABEL_109;
        if ( *(_BYTE *)(NextThread + 388) == 2 || *(_BYTE *)(NextThread + 388) == 3 )
          goto LABEL_110;
        if ( *(_BYTE *)(NextThread + 388) == 5 )
        {
          v69 = *(_BYTE *)(NextThread + 112) & 7;
          if ( v69 != 1 )
            v68 = (unsigned __int8)(v69 - 3) > 3u;
        }
LABEL_109:
        if ( v68 )
        {
LABEL_110:
          KiUpdateVPBackingThreadPriority(NextThread);
          v55 = v172;
          v61 = v181;
        }
      }
      v67 = 1;
LABEL_112:
      if ( v67 )
        *(_QWORD *)(NextThread + 64) = 0LL;
    }
    v70 = ((v62->IdleState & 1) == 0) | *(_BYTE *)v60 & 0xFE;
    *(_BYTE *)v60 = v70;
    v71 = v70 ^ (v70 ^ (v62->PriorityState->AllFields >> 6)) & 2;
    *(_BYTE *)v60 = v71;
    if ( ((v71 >> 1) & 1u) > v59 )
      v59 = (v71 >> 1) & 1;
    v60 += 5;
    v172 = ++v55;
    v61 = (unsigned __int64 *)((char *)v61 - 1);
    v181 = v61;
    if ( v61 )
      continue;
    break;
  }
  v57 = v196;
  v58 = v191;
  v49 = (_QWORD *)a1;
LABEL_118:
  HIDWORD(v211[0]) = v59;
  LODWORD(v211[1]) = v58;
  LOBYTE(v211[0]) = v56;
  if ( v58 )
    BYTE1(v211[0]) = *(_BYTE *)(*(_QWORD *)(v57 + 34904) + 1LL);
  else
    BYTE1(v211[0]) = 0;
  if ( v59 )
  {
    v72 = 0LL;
    v73 = 0;
    if ( v56 )
    {
      v74 = &v211[2];
      while ( v74[2] == *(_QWORD *)(*v74 + 34944LL) )
      {
        ++v73;
        v74 += 5;
        if ( v73 >= v56 )
          goto LABEL_128;
      }
      v72 = v74;
LABEL_128:
      v75 = &v211[6];
      v76 = v56;
      do
      {
        if ( v75 - 32 != (_BYTE *)v72 )
        {
          *((_QWORD *)v75 - 2) = v72[2];
          *v75 = *((_BYTE *)v72 + 32) | 0x20;
        }
        v75 += 40;
        --v76;
      }
      while ( v76 );
      LOBYTE(v56) = v211[0];
    }
  }
  v77 = v49[1639];
  v186 = 0LL;
  v78 = v49[1];
  if ( (*(_DWORD *)(v78 + 120) & 0x1000) != 0 || v78 == v49[4368] )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v211, v49);
    v111 = *(unsigned __int8 *)(RescheduleContextEntryForPrcb + 32) >> 1;
    LOBYTE(v112) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(
      RescheduleContextEntryForPrcb,
      v113,
      v112,
      0LL,
      BugCheckParameter4,
      v167);
    v117 = v111 & 1;
    if ( v117 )
    {
      for ( i = 0; i < LOBYTE(v211[0]); ++i )
      {
        v119 = &v211[5 * i + 2];
        if ( v119 != v116 )
        {
          LOBYTE(v115) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v119, v114, v115, 0LL, BugCheckParameter4b, v169);
        }
      }
    }
    v109 = HIDWORD(v211[0]);
    if ( v117 )
      v109 = 0;
    goto LABEL_178;
  }
  v79 = KiFindRescheduleContextEntryForPrcb(v211, v49);
  if ( (unsigned __int8)(v80 & 2) <= (unsigned __int8)(*(_BYTE *)(v77 + 120) & 2) || (v81 = 0, !(_BYTE)v56) )
  {
LABEL_141:
    v83 = *(_QWORD *)v79;
    v84 = *(_QWORD *)(*(_QWORD *)v79 + 8LL);
    *(_QWORD *)(v79 + 16) = v84;
    v85 = *(_BYTE *)(v79 + 32) & 0xFE | (v84 == *(_QWORD *)(v83 + 24));
    *(_BYTE *)(v79 + 32) = v85;
    *(_BYTE *)(v79 + 32) = v85 & 0xC5 | (2 * (((*(_DWORD *)(v84 + 120) & 2) != 0) | 2));
    *(_QWORD *)(v79 + 24) = 0LL;
    *(_BYTE *)(v79 + 33) &= ~1u;
    *(_BYTE *)(v79 + 34) |= 1u;
    if ( (*(_DWORD *)(v78 + 120) & 2) != 0 || (*(_DWORD *)(v77 + 120) & 2) != 0 )
    {
      for ( j = 0; j < LOBYTE(v211[0]); ++j )
      {
        v87 = &v211[5 * j + 2];
        if ( (_QWORD *)v79 != v87 )
        {
          v186 = 0LL;
          v88 = *v87;
          v89 = v87[3] - 1LL;
          if ( (*(_DWORD *)(v78 + 120) & 2) != 0 )
          {
            v90 = *(_QWORD *)(v88 + 34944);
            if ( v89 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (*((_BYTE *)v87 + 33) & 1) != 0 )
                *(_DWORD *)(v91 + 116) |= 2u;
              *(_BYTE *)(v91 + 565) = 1;
              KiInsertDeferredReadyList(&v186, v91);
            }
            v87[2] = v78;
            v92 = v87[4] & 0xFE;
            *((_BYTE *)v87 + 32) = v92;
            v93 = v92 & 0xE5 | (2 * (((*(_DWORD *)(v78 + 120) & 2) != 0) | 2)) | 0x20;
            v94 = v92 & 0xC5 | (2 * (((*(_DWORD *)(v78 + 120) & 2) != 0) | 2)) & 0xDF;
            if ( v78 == v90 )
              v93 = v94;
            *((_BYTE *)v87 + 32) = v93;
          }
          else
          {
            v90 = *(_QWORD *)(v88 + 24);
            if ( v89 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
            {
              if ( (*((_BYTE *)v87 + 33) & 1) != 0 )
                *(_DWORD *)(v106 + 116) |= 2u;
              *(_BYTE *)(v106 + 565) = 1;
              KiInsertDeferredReadyList(&v186, v106);
            }
            v87[2] = v90;
            v107 = *((_BYTE *)v87 + 32) | 1;
            *((_BYTE *)v87 + 32) = v107;
            *((_BYTE *)v87 + 32) = v107 & 0xC5 | (2 * (((*(_DWORD *)(v90 + 120) & 2) != 0) | 2));
          }
          v87[3] = v90;
          *((_BYTE *)v87 + 33) &= ~1u;
          if ( !(unsigned __int8)KiIsPrcbThread(v90) )
            *(_DWORD *)(v108 + 536) = *(_DWORD *)(v88 + 36);
        }
      }
    }
    v109 = (*(_DWORD *)(v78 + 120) >> 1) & 1;
LABEL_178:
    v95 = a1;
    HIDWORD(v211[0]) = v109;
    goto LABEL_179;
  }
  while ( 1 )
  {
    v82 = &v211[5 * v81 + 2];
    if ( (_QWORD *)v79 != v82 )
      break;
LABEL_140:
    if ( ++v81 >= (unsigned __int8)v56 )
      goto LABEL_141;
  }
  if ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v82, v78, 2LL) )
  {
    LOBYTE(v56) = v211[0];
    goto LABEL_140;
  }
  v95 = a1;
  v96 = KiFindRescheduleContextEntryForPrcb(v211, a1);
  v97 = *(unsigned __int8 *)(v96 + 32) >> 1;
  LOBYTE(v98) = 1;
  KiAdjustRescheduleContextEntryForThreadRemoval(v96, v99, v98, 0LL, BugCheckParameter4, v167);
  v103 = v97 & 1;
  if ( v103 )
  {
    for ( k = 0; k < LOBYTE(v211[0]); ++k )
    {
      v105 = &v211[5 * k + 2];
      if ( v105 != v102 )
      {
        LOBYTE(v101) = 1;
        KiAdjustRescheduleContextEntryForThreadRemoval(v105, v100, v101, 0LL, BugCheckParameter4a, v168);
      }
    }
  }
  if ( v103 )
    HIDWORD(v211[0]) = 0;
LABEL_179:
  for ( m = 0LL; ; m = v121 )
  {
    v121 = 0LL;
    if ( LOBYTE(v211[0]) )
    {
      v122 = (volatile signed __int32 **)&v211[3];
      v123 = LOBYTE(v211[0]);
      do
      {
        if ( *v122 > m && (!v121 || *v122 < v121) )
          v121 = *v122;
        v122 += 5;
        --v123;
      }
      while ( v123 );
    }
    if ( !v121 )
      break;
    v183[0] = 0;
    while ( _interlockedbittestandset64(v121, 0LL) )
    {
      do
        KeYieldProcessorEx(v183);
      while ( *(_QWORD *)v121 );
    }
  }
  while ( 2 )
  {
    memset(v212, 0, sizeof(v212));
    KiStartReadyQueueEnumeratorForRescheduleContext(v212, v211);
    LODWORD(CanLocalReadyThreadBeScheduledToRescheduleContext) = 0;
    while ( 2 )
    {
      if ( BYTE5(v212[1]) == 4 )
        goto LABEL_254;
      if ( BYTE5(v212[1]) )
        goto LABEL_236;
      v126 = 1;
      while ( 2 )
      {
        switch ( v126 )
        {
          case 1:
            v124 = 0LL;
            goto LABEL_232;
          case 2:
            for ( n = 0; (unsigned int)n < LODWORD(v212[0]); ++n )
            {
              v129 = &v212[6 * n + 6];
              v130 = *((_DWORD *)v129 + 8);
              if ( v130 )
              {
                v131 = *(_QWORD *)(*v129 + 32568LL);
                if ( (v131 & 1) != 0 )
                {
                  if ( v131 == 1 )
                    v132 = 0LL;
                  else
                    v132 = v131 ^ ((*v129 + 32560LL) | 1);
                }
                else
                {
                  v132 = *(_QWORD *)(*v129 + 32568LL);
                }
                if ( v132 )
                {
                  v133 = v132 - 88;
                  if ( *(_DWORD *)(v133 + 116) > v130 )
                    v133 = 0LL;
                }
                else
                {
                  v133 = 0LL;
                }
                v129[2] = v133;
              }
            }
            v134 = 0;
            v135 = 0LL;
            LOBYTE(v124) = BYTE1(v212[1]);
            do
            {
              v136 = v212[6 * (unsigned __int8)v124 + 8];
              if ( v136 && (!v135 || *(_DWORD *)(v135 + 116) < *(_DWORD *)(v136 + 116)) )
              {
                v134 = v124;
                v135 = v212[6 * (unsigned __int8)v124 + 8];
              }
              v137 = (unsigned __int8)(v124 + 1);
              v124 = (unsigned __int8)(v124 + 1);
              if ( v137 >= LODWORD(v212[0]) )
                v124 = 0LL;
            }
            while ( (_BYTE)v124 != BYTE1(v212[1]) );
            if ( !v135 )
            {
              ready = -2147483622;
              goto LABEL_233;
            }
            BYTE2(v212[1]) = v134;
            v212[3] = v135;
            v212[2] = v135;
            v138 = *(unsigned __int16 *)(v135 + 114);
            HIDWORD(v212[0]) = v138;
            v124 = 6LL * v134;
            if ( *(_DWORD *)(v135 + 116) == LODWORD(v212[6 * v134 + 10]) )
            {
              v138 &= HIDWORD(v212[6 * v134 + 10]);
              HIDWORD(v212[0]) = v138;
            }
            if ( !v138 )
            {
              if ( (int)KiAdvanceReadyQueueEnumeratorToNextScb(v212) < 0 )
                goto LABEL_234;
              v138 = HIDWORD(v212[0]);
            }
            _BitScanReverse(&v139, v138);
            v183[1] = v139;
            LOBYTE(v212[1]) = v139;
            v212[4] = v212[2] + 136LL + 16LL * (unsigned __int8)v139;
            v212[5] = v212[4];
            ready = 0;
            goto LABEL_233;
          case 3:
            LOBYTE(v124) = 1;
LABEL_232:
            ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(v212, v124);
            goto LABEL_233;
        }
        ready = -2147483622;
LABEL_233:
        if ( ready >= 0 )
          break;
LABEL_234:
        if ( (unsigned __int8)++v126 < 4u )
          continue;
        break;
      }
      BYTE5(v212[1]) = v126;
      if ( v126 == 4 )
        goto LABEL_254;
LABEL_236:
      v212[5] = *(_QWORD *)v212[5];
      if ( v212[5] != v212[4] )
      {
LABEL_239:
        v140 = v212[5] - 216LL;
        v141 = v212[6 * BYTE2(v212[1]) + 6];
        if ( BYTE5(v212[1]) == 2 )
        {
          v142 = 0LL;
          v143 = v212[2];
        }
        else
        {
          if ( BYTE4(v212[1]) == 1 )
            v142 = v212[6 * BYTE2(v212[1]) + 7];
          else
            v142 = 0LL;
          v143 = 0LL;
        }
        if ( !(unsigned int)KiCheckThreadAffinity(v212[5] - 216LL, v124) )
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v212, v140);
          KiInsertDeferredReadyList(&v174, v140);
          continue;
        }
        if ( !v143 )
        {
          v146 = *(_QWORD *)(v140 + 104);
          if ( v146 )
          {
            v147 = *(unsigned int *)(v141 + 216) + v146;
            if ( v147 )
            {
              LOBYTE(v145) = 1;
              if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v144, v147, v145, 0LL) )
              {
                KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v212, v140);
                *(_DWORD *)(v140 + 536) = *(_DWORD *)(v141 + 36);
                KiAddThreadToScbQueue(v141, v147, v140, 0LL);
                continue;
              }
            }
          }
        }
        CanLocalReadyThreadBeScheduledToRescheduleContext = KiCanLocalReadyThreadBeScheduledToRescheduleContext(
                                                              v211,
                                                              v140,
                                                              v141,
                                                              v142);
        if ( CanLocalReadyThreadBeScheduledToRescheduleContext )
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v212, v140);
          v148 = v140;
          goto LABEL_255;
        }
        continue;
      }
      break;
    }
    while ( (int)KiAdvanceReadyQueueEnumeratorToNextList(v212) >= 0 )
    {
      v212[5] = *(_QWORD *)v212[5];
      if ( v212[5] != v212[4] )
        goto LABEL_239;
    }
LABEL_254:
    v148 = 0LL;
LABEL_255:
    if ( v148 )
    {
      KiScheduleThreadToRescheduleContext(
        (unsigned int)v211,
        v148,
        CanLocalReadyThreadBeScheduledToRescheduleContext,
        0,
        (__int64)&v174);
      continue;
    }
    break;
  }
  for ( ii = 0LL; ; ii = v150 )
  {
    v150 = 0LL;
    if ( LOBYTE(v211[0]) )
    {
      v151 = (volatile signed __int64 **)&v211[3];
      v152 = LOBYTE(v211[0]);
      do
      {
        if ( *v151 > ii && (!v150 || *v151 < v150) )
          v150 = *v151;
        v151 += 5;
        --v152;
      }
      while ( v152 );
    }
    if ( !v150 )
      break;
    _InterlockedAnd64(v150, 0LL);
  }
  v153 = 0;
  v154 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v154 = 2;
  for ( jj = 0; jj < LOBYTE(v211[0]); v153 |= KiCommitRescheduleContextEntry(&v211[5 * jj++ + 2], v95, v154, &v174) )
    ;
  if ( LODWORD(v211[1]) == 1 )
  {
    v156 = *(unsigned __int8 **)(v211[2] + 34904LL);
    v157 = v156[1] + 1;
    if ( v157 >= *v156 )
      v157 = 0;
    v156[1] = v157;
  }
  v158 = 0LL;
  v159 = 0;
  v160 = v180 & 0xFFFFFFFFFFFFFFFEuLL;
  v204 = v180 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v180 & 1) != 0 )
  {
    if ( (v180 & 1) == 1 )
    {
      v158 = (unsigned __int64 *)(*(_QWORD *)(v160 + 34904) + 8LL);
      v159 = **(unsigned __int8 **)(v160 + 34904);
    }
  }
  else
  {
    v158 = &v204;
    v159 = 1;
  }
  while ( v159 )
    _InterlockedAnd64((volatile signed __int64 *)(v158[--v159] + 48), 0LL);
  v180 = 0LL;
  if ( v153 )
  {
    KiCompleteRescheduleContext(v211, v95);
    v161 = v95 + 12760;
    KiFlushSoftwareInterruptBatch(v95 + 12760);
  }
  else
  {
    v161 = v187 + 12760;
  }
  v162 = v174;
  if ( v174 )
  {
    v163 = 0;
    v174 = (_QWORD *)*v174;
    do
    {
      KiDeferredReadySingleThread(v95, v162 - 27, &v174);
      ++v163;
      v162 = v174;
      if ( v174 )
        v174 = (_QWORD *)*v174;
      if ( (v163 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(v161);
    }
    while ( v162 );
    KiFlushSoftwareInterruptBatch(v161);
  }
LABEL_293:
  if ( v6 )
    KiReleasePrcbLocksForIsolationUnit(&v180);
  _disable();
  return 1;
}
