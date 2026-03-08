/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1402AC810
 * Callers:
 *     KiSearchForNewThreadOnSubNode @ 0x1402AC670 (KiSearchForNewThreadOnSubNode.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KiMayStealStandbyThread @ 0x1402ADAD0 (KiMayStealStandbyThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1402ADB10 (KiGroupSchedulingMoveThread.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1402ADC00 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiIsPrcbThread @ 0x1402AEFCC (KiIsPrcbThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1403BD0A8 (KiRemoveThreadFromReadyQueue.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     KiAcquireSoftParkElectionLock @ 0x14040A5D8 (KiAcquireSoftParkElectionLock.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140459048 (KiConvertDynamicHeteroPolicy.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056AD34 (KzReleaseAdditionalPrcbLocks.c)
 */

unsigned __int64 *__fastcall KiSearchForNewThreadOnProcessor(
        struct _KPRCB *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  struct _KPRCB *v6; // rbx
  unsigned __int64 *v7; // r12
  unsigned __int64 *v8; // r11
  struct _KPRCB **v9; // rdi
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rbx
  _KTHREAD *NextThread; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  _WORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r12d
  unsigned int v21; // eax
  _QWORD **v22; // r13
  _QWORD *v23; // r14
  __int64 v24; // rax
  _WORD *v25; // rbx
  unsigned __int64 v26; // rbx
  int v27; // r15d
  _KSCHEDULER_SUBNODE *v28; // rsi
  int v29; // eax
  int v30; // edx
  unsigned int v31; // eax
  int v32; // ecx
  _KHETERO_PROCESSOR_SET *v33; // rax
  _KSCHEDULING_GROUP *volatile v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 CoreProcessorSet; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int64 GroupSetMember; // rax
  __int64 v45; // rdx
  int v46; // r13d
  __int64 v47; // rax
  _QWORD *v48; // r15
  _WORD *v49; // rsi
  __int64 Group; // rax
  __int64 v51; // rsi
  int HgsFeedbackClass; // r12d
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r14
  int v54; // eax
  unsigned int SystemHeteroCpuPolicy; // eax
  int v56; // ecx
  _KHETERO_PROCESSOR_SET *HeteroSets; // rax
  __int64 v58; // rcx
  int v59; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  bool v65; // bl
  __int64 v66; // r8
  __int64 v67; // rcx
  int v68; // r8d
  unsigned __int64 v69; // rdx
  struct _KPRCB **v70; // r13
  unsigned int v71; // r12d
  unsigned __int64 v72; // rcx
  bool v73; // zf
  __int64 v74; // r8
  unsigned int v75; // r15d
  __int64 v76; // r8
  _QWORD *v77; // rbx
  struct _KPRCB *v78; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR CurrentThread; // rsi
  char v81; // cl
  char v82; // cl
  char v83; // al
  char v84; // dl
  unsigned __int8 v85; // cl
  unsigned __int64 *v86; // r8
  unsigned int v87; // r9d
  unsigned __int64 *v88; // rdx
  _BYTE *v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // rbx
  char v92; // r13
  unsigned __int64 *v93; // r14
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // r9
  unsigned __int8 *v99; // r11
  char v100; // r10
  __int64 i; // r10
  unsigned __int8 *v102; // rcx
  char v103; // r15
  struct _KPRCB *v104; // r8
  _QWORD *v105; // r10
  unsigned int v106; // ecx
  struct _KPRCB **v107; // rax
  unsigned int v108; // r12d
  unsigned int v109; // esi
  struct _KPRCB *v110; // rbx
  _QWORD *v111; // r10
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // rcx
  char v115; // cl
  int v116; // eax
  _KTHREAD *IdleThread; // r11
  __int64 v118; // rcx
  char v119; // cl
  __int64 v120; // r11
  __int64 v121; // rcx
  __int64 v122; // r11
  __int64 v123; // rcx
  char v124; // cl
  unsigned int v125; // eax
  unsigned int v126; // ebx
  struct _KPRCB *v127; // r11
  _QWORD *v128; // r10
  __int64 v129; // rcx
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  char v132; // cl
  int v133; // eax
  __int64 v134; // r11
  _KTHREAD *SmtIsolationThread; // rsi
  __int64 v136; // rcx
  char v137; // al
  char v138; // al
  char v139; // cl
  char v140; // al
  __int64 v141; // r11
  struct _KPRCB *v142; // r12
  char v143; // si
  char v144; // r15
  unsigned int j; // ebx
  unsigned __int8 *v146; // rdx
  unsigned __int8 v147; // al
  _QWORD *v148; // rbx
  __int64 v149; // rcx
  unsigned __int64 v150; // rdx
  __int64 *v151; // rbx
  struct _KPRCB **v152; // r8
  unsigned __int64 v153; // r9
  int v154; // edx
  _QWORD *v155; // r9
  __int64 v156; // rcx
  unsigned __int64 v157; // r8
  unsigned __int64 *v158; // r11
  int v159; // edx
  __int64 v161; // [rsp+20h] [rbp-E0h]
  __int64 v162; // [rsp+20h] [rbp-E0h]
  char v163; // [rsp+30h] [rbp-D0h]
  char v164; // [rsp+31h] [rbp-CFh]
  struct _KPRCB *v165; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v166; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v167; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v168; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v169; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v170; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v171; // [rsp+68h] [rbp-98h]
  unsigned __int64 v172; // [rsp+70h] [rbp-90h] BYREF
  int v173; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v174; // [rsp+7Ch] [rbp-84h]
  int v175; // [rsp+80h] [rbp-80h] BYREF
  int v176; // [rsp+84h] [rbp-7Ch]
  int v177; // [rsp+88h] [rbp-78h] BYREF
  int v178; // [rsp+8Ch] [rbp-74h] BYREF
  _DWORD v179[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KPRCB *v180; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v181; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v182; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v183; // [rsp+B0h] [rbp-50h]
  _QWORD **v184; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v185; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v186[42]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v187[336]; // [rsp+220h] [rbp+120h] BYREF

  v4 = a3;
  v168 = a3;
  v5 = a2;
  v172 = a2;
  v6 = a1;
  v165 = a1;
  v170 = a4;
  v7 = a4;
  memset(v186, 0, sizeof(v186));
  memset(v187, 0, sizeof(v187));
  v8 = 0LL;
  v166 = 0LL;
  v163 = 0;
  v169 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      if ( !*(_DWORD *)(v5 + 32472) && !(unsigned __int8)KiMayStealStandbyThread(v5, v6) && !*(_QWORD *)(v5 + 32560) )
        return v8;
      v181 = v5;
      v180 = v6;
      *v7 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFEuLL;
      v9 = &v180;
      v10 = &v181;
      v169 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( 1 )
      {
        if ( v9 >= (struct _KPRCB **)&v181 && v10 >= &v182 )
        {
          v6 = v165;
          v4 = v168;
          goto LABEL_33;
        }
        if ( v9 >= (struct _KPRCB **)&v181 )
          break;
        v11 = (unsigned __int64)*v9;
        if ( v10 < &v182 )
        {
          if ( v11 >= *v10 )
          {
            v11 = *v10;
            goto LABEL_16;
          }
          ++v9;
        }
        else
        {
          ++v9;
        }
LABEL_17:
        v177 = (int)v8;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v177);
          while ( *(_QWORD *)(v11 + 48) );
        }
        v8 = 0LL;
      }
      v11 = *v10;
LABEL_16:
      ++v10;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0 )
      return v8;
    v178 = 0;
    *v7 = (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v6->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v178);
      while ( v6->PrcbLock );
    }
    v179[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    {
      do
        KeYieldProcessorEx(v179);
      while ( *(_QWORD *)v4 );
    }
    v8 = 0LL;
LABEL_33:
    NextThread = v6->NextThread;
    if ( NextThread && NextThread != v6->IdleThread )
    {
      if ( v4 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        KiDowngradeIsolationUnitLockHandle(v7, 0LL);
        return (unsigned __int64 *)NextThread;
      }
      if ( v169 )
      {
        v68 = (int)v8;
        v69 = v169 & 0xFFFFFFFFFFFFFFFEuLL;
        v172 = v169 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v169 & 1) == 0 )
        {
          v8 = &v172;
          v68 = 1;
          goto LABEL_141;
        }
        if ( (v169 & 1) == 1 )
        {
          v8 = (unsigned __int64 *)(*(_QWORD *)(v69 + 34904) + 8LL);
          v68 = **(unsigned __int8 **)(v69 + 34904);
        }
        while ( v68 )
LABEL_141:
          _InterlockedAnd64((volatile signed __int64 *)(v8[--v68] + 48), 0LL);
      }
      KiDowngradeIsolationUnitLockHandle(v7, 0LL);
      return (unsigned __int64 *)NextThread;
    }
    NextThread = (_KTHREAD *)v8;
    if ( v4 )
    {
      v43 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFE;
      if ( v43 )
      {
        GroupSetMember = v6->GroupSetMember;
        v45 = v4 + 16;
        v183 = v4 + 16;
        v46 = 64;
        v182 = GroupSetMember;
        v175 = (int)v8;
        while ( 2 )
        {
          _BitScanReverse((unsigned int *)&v47, v43);
          v176 = v47;
          v171 = v43 ^ (1 << v47);
          v184 = (_QWORD **)(v45 + 16 * v47);
          v48 = *v184;
          do
          {
            v49 = (_WORD *)v48[45];
            NextThread = (_KTHREAD *)(v48 - 27);
            Group = v6->Group;
            if ( (unsigned __int16)Group < *v49 )
            {
              v51 = *(_QWORD *)&v49[4 * Group + 4];
              if ( v51 )
              {
                HgsFeedbackClass = NextThread->HgsFeedbackClass;
                SchedulerSubNode = v6->SchedulerSubNode;
                v167 = __PAIR64__(HIDWORD(v8), Feature_MultiCoreClasses__private_featureState);
                if ( (Feature_MultiCoreClasses__private_featureState & 0x10) == 0 )
                {
                  LODWORD(v167) = Feature_MultiCoreClasses__private_featureState | 1;
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_MultiCoreClasses__private_descriptor,
                    v167,
                    3,
                    1LL);
                  wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                    v167,
                    3LL,
                    &Feature_MultiCoreClasses__private_descriptor);
                  v6 = v165;
                }
                if ( PpmHeteroMultiCoreClassesEnabled )
                {
                  v54 = KiComputeHeteroThreadQos((__int64)(v48 - 27), &v175);
                  if ( (v51 & SchedulerSubNode->HeteroSets[HgsFeedbackClass
                                                         + (unsigned int)SchedulerSubNode->WorkloadClasses
                                                         * (v175 + 2 * v54)].AvailableMask) != 0 )
                    v51 &= SchedulerSubNode->HeteroSets[HgsFeedbackClass
                                                      + (unsigned int)SchedulerSubNode->WorkloadClasses
                                                      * (v175 + 2 * v54)].AvailableMask;
                }
                else
                {
                  SystemHeteroCpuPolicy = NextThread->SystemHeteroCpuPolicy;
                  if ( SystemHeteroCpuPolicy >= 5 )
                    SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(v48 - 27);
                  if ( SystemHeteroCpuPolicy )
                  {
                    v56 = SystemHeteroCpuPolicy * SchedulerSubNode->WorkloadClasses;
                    HeteroSets = SchedulerSubNode->HeteroSets;
                    v58 = (unsigned int)(HgsFeedbackClass + v56);
                    if ( (v51 & HeteroSets[v58].AvailableMask) != 0 )
                      v51 &= HeteroSets[v58].AvailableMask;
                  }
                }
                if ( (v51 & v182) != 0 )
                {
                  v59 = *(&NextThread->MiscFlags + 1);
                  if ( (v59 & 2) == 0
                    && (NextThread->Priority >= 16
                     || (v59 & 0x200) != 0
                     || (SchedulingGroup = NextThread->SchedulingGroup) == 0LL
                     || (v61 = (__int64)SchedulingGroup + v6->ScbOffset) == 0
                     || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v61)) )
                  {
                    if ( (*((_DWORD *)&NextThread->0 + 1) & 0x400000) != 0 )
                      _InterlockedAnd((volatile signed __int32 *)NextThread->SchedulerAssist, 0xFFFBFFFF);
                    v62 = (_QWORD *)*v48;
                    v63 = (_QWORD *)v48[1];
                    if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v63 != v48 )
                      __fastfail(3u);
                    v4 = v168;
                    *v63 = v62;
                    v62[1] = v63;
                    if ( v63 == v62 )
                      *(_DWORD *)(v4 + 8) ^= 1 << v176;
                    --*(_DWORD *)(v4 + 672);
                    *(_QWORD *)(v4 + 680) -= LODWORD(NextThread[1].EndPadding[1]);
                    v65 = (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting() != 0;
                    LOBYTE(v66) = 0;
                    if ( NextThread[1].EndPadding[2] == *(_QWORD *)(v4 + 696) )
                    {
                      if ( v65 )
                      {
                        KiAcquireSoftParkElectionLock(v4, v64, v66);
                        LOBYTE(v66) = 1;
                        if ( NextThread[1].EndPadding[2] != *(_QWORD *)(v4 + 696) )
                          goto LABEL_121;
                      }
                      --*(_DWORD *)(v4 + 704);
                      *(_QWORD *)(v4 + 712) -= HIDWORD(NextThread[1].EndPadding[1]);
                      if ( v65 && !*(_DWORD *)(v4 + 704) )
                        *(_QWORD *)(v4 + 1680) = 0LL;
                      v67 = BYTE1(NextThread[1].Spare18)
                          + 8 * (BYTE2(NextThread[1].Spare18) + 2LL * LOBYTE(NextThread[1].Spare18));
                      *(_QWORD *)(v4 + 8 * v67 + 784) -= HIDWORD(NextThread[1].EndPadding[1]);
                      if ( (_BYTE)v66 )
LABEL_121:
                        _InterlockedAnd64((volatile signed __int64 *)(v4 + 688), 0LL);
                    }
                    NextThread->NextProcessor = v165->Number;
                    goto LABEL_124;
                  }
                }
                v8 = 0LL;
              }
            }
            v48 = (_QWORD *)*v48;
            --v46;
          }
          while ( v48 != v184 && v46 );
          v43 = v171;
          if ( v171 && v46 )
          {
            v45 = v183;
            continue;
          }
          break;
        }
        v4 = v168;
        NextThread = (_KTHREAD *)v8;
LABEL_124:
        v5 = v172;
      }
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      goto LABEL_126;
    }
    if ( *(_BYTE *)(v5 + 34057) == v6->PowerState.PerformanceSchedulingClass )
    {
      v13 = *(_QWORD *)(v5 + 16);
      if ( v13 )
      {
        if ( v13 != *(_QWORD *)(v5 + 24) && (**(_BYTE **)(v5 + 56) & 0x7Fu) >= 0x10 )
        {
          v14 = *(_QWORD *)(v5 + 16);
          if ( (((*(_DWORD *)(v14 + 120) >> 1) & 1) != 1
             || v6->CoreControlBlock == *(_KCORE_CONTROL_BLOCK **)(v5 + 34904))
            && (*(_QWORD *)(v14 + 568) == KiCpuSetSequence || (*(_DWORD *)(v14 + 116) & 8) != 0) )
          {
            v15 = *(_WORD **)(v14 + 576);
            v16 = v6->Group;
            if ( (unsigned __int16)v16 < *v15 )
              break;
          }
        }
      }
    }
LABEL_47:
    v17 = *(unsigned int *)(v5 + 32472);
    if ( (_DWORD)v17 )
    {
      v18 = v6->GroupSetMember;
      v19 = v5 + 32576;
      v182 = v5 + 32576;
      v20 = 64;
      v167 = v18;
      v173 = (int)v8;
      while ( 2 )
      {
        _BitScanReverse(&v21, v17);
        LODWORD(v17) = v17 ^ (1 << v21);
        v22 = (_QWORD **)(v19 + 16LL * v21);
        v174 = v21;
        v171 = v17;
        v23 = *v22;
        do
        {
          v24 = v6->Group;
          NextThread = (_KTHREAD *)(v23 - 27);
          v25 = (_WORD *)v23[45];
          if ( (unsigned __int16)v24 < *v25 )
          {
            v26 = *(_QWORD *)&v25[4 * v24 + 4];
            if ( v26 )
            {
              v27 = NextThread->HgsFeedbackClass;
              v28 = v165->SchedulerSubNode;
              Feature_MultiCoreClasses__private_ReportDeviceUsage(v17, v19);
              if ( PpmHeteroMultiCoreClassesEnabled )
              {
                v29 = KiComputeHeteroThreadQos((__int64)(v23 - 27), &v173);
                v30 = v28->WorkloadClasses * (v173 + 2 * v29);
                v17 = 3LL * (unsigned int)(v27 + v30);
                v19 = v26 & v28->HeteroSets[v27 + v30].AvailableMask;
                if ( v19 )
                  v26 = v19;
              }
              else
              {
                v31 = NextThread->SystemHeteroCpuPolicy;
                if ( v31 >= 5 )
                  v31 = KiConvertDynamicHeteroPolicy(v23 - 27);
                if ( v31 )
                {
                  v32 = v31 * v28->WorkloadClasses;
                  v33 = v28->HeteroSets;
                  v17 = 3LL * (unsigned int)(v27 + v32);
                  v19 = v26 & *(&v33->AvailableMask + v17);
                  if ( v19 )
                    v26 &= *(&v33->AvailableMask + v17);
                }
              }
              if ( (v26 & v167) != 0
                && (*((_DWORD *)&NextThread->0 + 1) & 2) == 0
                && (!KiIsThreadConstrainedBySchedulingGroup((__int64)(v23 - 27))
                 || (v34 = NextThread->SchedulingGroup) == 0LL
                 || (v35 = (__int64)v34 + v165->ScbOffset) == 0
                 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v35)) )
              {
                v36 = v23;
                v5 = v172;
                KiRemoveThreadFromReadyQueue(v172, v36, v174);
                v8 = 0LL;
                v4 = v168;
                NextThread->NextProcessor = v165->Number;
                goto LABEL_72;
              }
            }
          }
          v23 = (_QWORD *)*v23;
          --v20;
          if ( v23 == v22 )
            break;
          v6 = v165;
        }
        while ( v20 );
        v17 = v171;
        if ( v171 && v20 )
        {
          v6 = v165;
          v19 = v182;
          continue;
        }
        break;
      }
      v8 = 0LL;
      NextThread = 0LL;
    }
    else
    {
LABEL_72:
      if ( NextThread )
        goto LABEL_127;
    }
    if ( KiPerfIsoEnabled )
    {
      v37 = v165->SchedulerSubNode->IdleNonParkedCpuSet
          - ((v165->SchedulerSubNode->IdleNonParkedCpuSet >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v37 & 0x3333333333333333LL)
                           + ((v37 >> 2) & 0x3333333333333333LL)
                           + (((v37 & 0x3333333333333333LL) + ((v37 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        goto LABEL_285;
      v38 = v165->GroupSetMember;
      CoreProcessorSet = v165->CoreProcessorSet;
      if ( v38 != CoreProcessorSet )
      {
        v40 = CoreProcessorSet & ~v38;
        if ( (v165->SchedulerSubNode->IdleCpuSet & v40) == 0 )
        {
          _BitScanForward64(&v40, v40);
          v41 = (unsigned int)v40 + (v165->Group << 6);
          v179[1] = v40;
          if ( (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v41]] + 236) & 0x400) == 0 )
            goto LABEL_285;
        }
      }
    }
    v5 = v172;
    v42 = KiGroupSchedulingMoveThread(v165, v172, v172 + 32560, 0LL);
    v4 = v168;
    NextThread = (_KTHREAD *)v42;
LABEL_126:
    if ( !NextThread )
    {
      v8 = 0LL;
LABEL_285:
      if ( v169 )
      {
        v152 = (struct _KPRCB **)v8;
        v153 = v169 & 0xFFFFFFFFFFFFFFFEuLL;
        v154 = (int)v8;
        v165 = (struct _KPRCB *)(v169 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v169 & 1) == 0 )
        {
          v152 = &v165;
          v154 = 1;
          goto LABEL_292;
        }
        if ( (v169 & 1) == 1 )
        {
          v152 = (struct _KPRCB **)(*(_QWORD *)(v153 + 34904) + 8LL);
          v154 = **(unsigned __int8 **)(v153 + 34904);
        }
        while ( v154 )
LABEL_292:
          _InterlockedAnd64((volatile signed __int64 *)&v152[--v154]->PrcbLock, 0LL);
      }
      v155 = v170;
      v156 = *v170;
      v157 = *v170 & 0xFFFFFFFFFFFFFFFEuLL;
      v185 = v157;
      if ( (v156 & 1) != 0 )
      {
        v158 = (unsigned __int64 *)(*(_QWORD *)(v157 + 34904) + 8LL);
        v159 = **(unsigned __int8 **)(v157 + 34904);
        if ( **(_BYTE **)(v157 + 34904) )
          goto LABEL_297;
      }
      else
      {
        v158 = &v185;
        v159 = 1;
        do
LABEL_297:
          _InterlockedAnd64((volatile signed __int64 *)(v158[--v159] + 48), 0LL);
        while ( v159 );
      }
      *v155 = 0LL;
      return (unsigned __int64 *)NextThread;
    }
LABEL_127:
    if ( NextThread->AffinityVersion == KiCpuSetSequence || (NextThread->MiscFlags & 8) != 0 )
    {
      v8 = 0LL;
      goto LABEL_147;
    }
    KiInsertDeferredReadyList(&v166, NextThread);
    if ( v169 )
      KiReleasePrcbLocksForIsolationUnit(&v169);
    v7 = v170;
    KiReleasePrcbLocksForIsolationUnit(v170);
    v6 = v165;
    KiReadyDeferredReadyList((__int64)v165, &v166);
    v8 = 0LL;
  }
  if ( ((*(_QWORD *)&v15[4 * v16 + 4] >> v6->GroupIndex) & 1) == 0 )
  {
    if ( v8 )
      goto LABEL_144;
    goto LABEL_47;
  }
  NextThread = *(_KTHREAD **)(v5 + 16);
  *(_DWORD *)(v14 + 536) = v6->Number;
LABEL_144:
  v163 = 1;
LABEL_147:
  v70 = (struct _KPRCB **)v8;
  v71 = (unsigned int)v8;
  v72 = *v170 & 0xFFFFFFFFFFFFFFFEuLL;
  v73 = (*v170 & 1) == 0;
  v74 = *v170 & 1LL;
  v168 = v72;
  v183 = v74;
  if ( v73 )
  {
    v70 = (struct _KPRCB **)&v168;
    v71 = 1;
    v75 = (unsigned int)v8;
    goto LABEL_153;
  }
  if ( (_DWORD)v74 == 1 )
  {
    v70 = (struct _KPRCB **)(*(_QWORD *)(v72 + 34904) + 8LL);
    v71 = **(unsigned __int8 **)(v72 + 34904);
  }
  v75 = (unsigned int)v8;
  if ( v71 )
  {
LABEL_153:
    v76 = v71;
    v77 = &v186[6];
    v167 = v71;
    do
    {
      *((_OWORD *)v77 - 2) = 0LL;
      *((_OWORD *)v77 - 1) = 0LL;
      *v77 = 0LL;
      *(v77 - 1) = -1LL;
      *((_BYTE *)v77 + 4) = 63;
      v78 = *v70;
      *(v77 - 4) = *v70;
      SharedReadyQueue = v78->SharedReadyQueue;
      if ( (v78->IdleState & 8) != 0 && (v78->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
        SharedReadyQueue = (_KSHARED_READY_QUEUE *)v8;
      *(v77 - 3) = SharedReadyQueue;
      CurrentThread = (ULONG_PTR)v78->NextThread;
      *(v77 - 2) = CurrentThread;
      if ( !CurrentThread )
      {
        CurrentThread = (ULONG_PTR)v78->CurrentThread;
        *(v77 - 2) = CurrentThread;
      }
      if ( v78->NextThread == (_KTHREAD *)CurrentThread )
      {
        *(_BYTE *)v77 |= 4u;
      }
      else
      {
        v81 = *(_BYTE *)v77;
        if ( v78 == KeGetCurrentPrcb() )
          v82 = v81 | 4;
        else
          v82 = v81 & 0xFB;
        *(_BYTE *)v77 = v82;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 && *(_DWORD *)(CurrentThread + 536) == v78->Number )
        {
          if ( *(_BYTE *)(CurrentThread + 388) == 2
            || *(_BYTE *)(CurrentThread + 388) == 3
            || *(_BYTE *)(CurrentThread + 388) == 5
            && (v83 = *(_BYTE *)(CurrentThread + 112) & 7, v83 != 1)
            && (unsigned __int8)(v83 - 3) > 3u )
          {
            KiUpdateVPBackingThreadPriority(CurrentThread);
            v76 = v167;
            v8 = 0LL;
          }
        }
        *(_QWORD *)(CurrentThread + 64) = v8;
      }
      v84 = ((v78->IdleState & 1) == 0) | *(_BYTE *)v77 & 0xFE;
      *(_BYTE *)v77 = v84;
      v85 = v84 ^ (v84 ^ (v78->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v77 = v85;
      if ( ((v85 >> 1) & 1u) > v75 )
        v75 = (v85 >> 1) & 1;
      v77 += 5;
      ++v70;
      v167 = --v76;
    }
    while ( v76 );
    v72 = v168;
    LODWORD(v74) = v183;
  }
  HIDWORD(v186[0]) = v75;
  LODWORD(v186[1]) = v74;
  LOBYTE(v186[0]) = v71;
  if ( (_DWORD)v74 )
    BYTE1(v186[0]) = *(_BYTE *)(*(_QWORD *)(v72 + 34904) + 1LL);
  else
    BYTE1(v186[0]) = 0;
  if ( v75 )
  {
    v86 = v8;
    v87 = (unsigned int)v8;
    if ( v71 )
    {
      v88 = &v186[2];
      while ( v88[2] == *(_QWORD *)(*v88 + 34944) )
      {
        ++v87;
        v88 += 5;
        if ( v87 >= v71 )
          goto LABEL_190;
      }
      v86 = v88;
LABEL_190:
      v89 = &v186[6];
      v90 = v71;
      do
      {
        if ( v89 - 32 != (_BYTE *)v86 )
        {
          *((_QWORD *)v89 - 2) = v86[2];
          *v89 = *((_BYTE *)v86 + 32) | 0x20;
        }
        v89 += 40;
        --v90;
      }
      while ( v90 );
    }
  }
  v91 = v169;
  v92 = 0;
  v93 = v8;
  v164 = 0;
  if ( v163 )
  {
    if ( v169 )
    {
      v93 = (unsigned __int64 *)v187;
      KiStartRescheduleContext((__int64)v187, (__int64 *)&v169, 0LL);
    }
    else
    {
      v93 = v186;
    }
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v93, v172);
    LOBYTE(v95) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v96, 1LL, v95, v161);
    if ( (v100 & 2) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)v93; i = (unsigned int)(i + 1) )
      {
        v102 = (unsigned __int8 *)&v93[4 * i + 2 + (unsigned int)i];
        if ( v102 != v99 )
        {
          LOBYTE(v98) = 1;
          KiAdjustRescheduleContextEntryForThreadRemoval(v102, v97, 1LL, v98, v162);
        }
      }
      v8 = 0LL;
      *((_DWORD *)v93 + 1) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v93 == v186 )
    {
      v164 = 1;
    }
    else
    {
      KiSearchForNewThreadsForRescheduleContext(v93, (__int64)&v166);
      v92 = KiCommitRescheduleContext(v93, v165, 0LL, &v166);
      v8 = 0LL;
    }
  }
  if ( v91 )
    KiReleasePrcbLocksForIsolationUnit(&v169);
  v103 = 0;
  v104 = v165;
  v105 = v8;
  v106 = (unsigned int)v8;
  if ( LOBYTE(v186[0]) )
  {
    v107 = (struct _KPRCB **)&v186[2];
    while ( *v107 != v165 )
    {
      ++v106;
      v107 += 5;
      if ( v106 >= LOBYTE(v186[0]) )
        goto LABEL_216;
    }
    v105 = v107;
  }
LABEL_216:
  v108 = (*((_DWORD *)&NextThread->0 + 1) >> 1) & 1;
  if ( v108 >= ((*((unsigned __int8 *)v105 + 32) >> 1) & 1u) )
  {
    if ( v108 )
    {
      v126 = (unsigned int)v8;
      if ( LOBYTE(v186[0]) )
      {
        do
        {
          v127 = (struct _KPRCB *)v186[5 * v126 + 2];
          v128 = &v186[5 * v126 + 2];
          v129 = v128[3];
          v130 = v129 - 1;
          if ( v127 == v104 )
          {
            if ( v130 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v129) )
            {
              if ( (*((_BYTE *)v128 + 33) & 1) != 0 )
                *(_DWORD *)(v131 + 116) |= 2u;
              *(_BYTE *)(v131 + 565) = 1;
              KiInsertDeferredReadyList(&v166, v131);
            }
            v132 = v128[4] & 0xFE;
            v128[2] = NextThread;
            *((_BYTE *)v128 + 32) = v132;
            v133 = *(&NextThread->MiscFlags + 1);
            *((_BYTE *)v128 + 33) &= ~1u;
            v128[3] = NextThread;
            *((_BYTE *)v128 + 32) = v132 & 0xC5 | (2 * (((v133 & 2) != 0) | 2));
            if ( !(unsigned __int8)KiIsPrcbThread(NextThread) )
              NextThread->NextProcessor = *(_DWORD *)(v134 + 36);
          }
          else
          {
            SmtIsolationThread = v127->SmtIsolationThread;
            if ( v130 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v129) )
            {
              if ( (*((_BYTE *)v128 + 33) & 1) != 0 )
                *(_DWORD *)(v136 + 116) |= 2u;
              *(_BYTE *)(v136 + 565) = 1;
              KiInsertDeferredReadyList(&v166, v136);
            }
            v137 = v128[4] & 0xFE;
            v128[2] = NextThread;
            *((_BYTE *)v128 + 32) = v137;
            v138 = v137 & 0xE5 | (2 * (((*((_DWORD *)&NextThread->0 + 1) & 2) != 0) | 2));
            v139 = v138 | 0x20;
            v140 = v138 & 0xDF;
            if ( NextThread == SmtIsolationThread )
              v139 = v140;
            *((_BYTE *)v128 + 32) = v139;
            *((_BYTE *)v128 + 33) &= ~1u;
            v128[3] = SmtIsolationThread;
            if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
              SmtIsolationThread->NextProcessor = *(_DWORD *)(v141 + 36);
          }
          ++v126;
        }
        while ( v126 < LOBYTE(v186[0]) );
      }
    }
    else
    {
      v121 = v105[3];
      v122 = *v105;
      if ( (unsigned __int64)(v121 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v121) )
      {
        if ( (*((_BYTE *)v105 + 33) & 1) != 0 )
          *(_DWORD *)(v123 + 116) |= 2u;
        *(_BYTE *)(v123 + 565) = 1;
        KiInsertDeferredReadyList(&v166, v123);
      }
      v124 = v105[4] & 0xFE;
      v105[2] = NextThread;
      *((_BYTE *)v105 + 32) = v124;
      v125 = *(&NextThread->MiscFlags + 1);
      *((_BYTE *)v105 + 33) &= ~1u;
      v105[3] = NextThread;
      *((_BYTE *)v105 + 32) = ((v124 ^ (2 * (v125 >> 1))) & 2 ^ v124) & 0xC3 | 4;
      if ( NextThread->Process != (_KPROCESS *)&KiInitialProcess )
        NextThread->NextProcessor = *(_DWORD *)(v122 + 36);
    }
  }
  else
  {
    v109 = (unsigned int)v8;
    if ( LOBYTE(v186[0]) )
    {
      do
      {
        v110 = (struct _KPRCB *)v186[5 * v109 + 2];
        v111 = &v186[5 * v109 + 2];
        v112 = v111[3];
        v113 = v112 - 1;
        if ( v110 == v104 )
        {
          if ( v113 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v112) )
          {
            if ( (*((_BYTE *)v111 + 33) & 1) != 0 )
              *(_DWORD *)(v114 + 116) |= 2u;
            *(_BYTE *)(v114 + 565) = 1;
            KiInsertDeferredReadyList(&v166, v114);
          }
          v115 = v111[4] & 0xFE;
          v111[2] = NextThread;
          *((_BYTE *)v111 + 32) = v115;
          v116 = *(&NextThread->MiscFlags + 1);
          *((_BYTE *)v111 + 33) &= ~1u;
          v111[3] = NextThread;
          *((_BYTE *)v111 + 32) = v115 & 0xC5 | (2 * (((v116 & 2) != 0) | 2));
          if ( !(unsigned __int8)KiIsPrcbThread(NextThread) )
            NextThread->NextProcessor = v110->Number;
        }
        else
        {
          IdleThread = v110->IdleThread;
          if ( v113 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v112) )
          {
            if ( (*((_BYTE *)v111 + 33) & 1) != 0 )
              *(_DWORD *)(v118 + 116) |= 2u;
            *(_BYTE *)(v118 + 565) = 1;
            KiInsertDeferredReadyList(&v166, v118);
          }
          v119 = *((_BYTE *)v111 + 32) | 1;
          v111[2] = IdleThread;
          *((_BYTE *)v111 + 32) = v119;
          *((_BYTE *)v111 + 32) = v119 & 0xC5 | (2 * (((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0) | 2));
          *((_BYTE *)v111 + 33) &= ~1u;
          v111[3] = IdleThread;
          if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
            *(_DWORD *)(v120 + 536) = v110->Number;
        }
        ++v109;
      }
      while ( v109 < LOBYTE(v186[0]) );
    }
    v103 = 1;
  }
  HIDWORD(v186[0]) = v108;
  if ( (unsigned __int8)v164 | (unsigned __int8)v103 )
    KiSearchForNewThreadsForRescheduleContext(v186, (__int64)&v166);
  v142 = v165;
  v143 = 0;
  v144 = 1;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v144 = 3;
  for ( j = 0; j < LOBYTE(v186[0]); v143 |= KiCommitRescheduleContextEntry(
                                              (__int64)&v186[5 * j++ + 2],
                                              v165,
                                              v144,
                                              &v166) )
    ;
  if ( LODWORD(v186[1]) == 1 )
  {
    v146 = *(unsigned __int8 **)(v186[2] + 34904LL);
    v147 = v146[1] + 1;
    if ( v147 >= *v146 )
      v147 = 0;
    v146[1] = v147;
  }
  if ( v143 || v92 || v166 )
  {
    v151 = v170;
    KiReleasePrcbLocksForIsolationUnit(v170);
    if ( v143 )
      KiCompleteRescheduleContext(v186, v142);
    if ( v92 )
      KiCompleteRescheduleContext(v93, v142);
    KiFlushSoftwareInterruptBatch(&v142->DeferredDispatchInterrupts);
    if ( v166 )
      KiReadyDeferredReadyList((__int64)v142, &v166);
    KiAcquirePrcbLocksForIsolationUnit((__int64)v142, 0, v151);
    return (unsigned __int64 *)v142->NextThread;
  }
  else
  {
    v148 = v170;
    v149 = *v170;
    v150 = *v170 & 0xFFFFFFFFFFFFFFFEuLL;
    v170 = (_QWORD *)v150;
    if ( (v149 & 1) != 0 )
    {
      KzReleaseAdditionalPrcbLocks(*(_QWORD *)(v150 + 34904) + 8LL, **(unsigned __int8 **)(v150 + 34904), &v170, 1LL);
      *v148 &= ~1uLL;
    }
  }
  return (unsigned __int64 *)NextThread;
}
