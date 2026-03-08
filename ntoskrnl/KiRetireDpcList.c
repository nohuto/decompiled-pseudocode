/*
 * XREFs of KiRetireDpcList @ 0x1402521E0
 * Callers:
 *     KiExecuteDpcDelegate @ 0x14038D4D0 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x14041AF70 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x14041F870 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     RtlBackoff @ 0x140241660 (RtlBackoff.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     RtlTimelineBitmapUpdate @ 0x140250EE0 (RtlTimelineBitmapUpdate.c)
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     KiSelectActiveTimerTable @ 0x1402521A0 (KiSelectActiveTimerTable.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  ULONG_PTR v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // bl
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  unsigned __int64 v18; // r10
  bool v19; // zf
  signed __int16 result; // ax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 active; // rax
  unsigned __int64 *v26; // r10
  __int64 v27; // rcx
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  unsigned int v30; // r14d
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r12
  int v33; // edi
  unsigned __int64 v34; // r15
  unsigned int v35; // eax
  struct _KPRCB *v36; // rcx
  unsigned __int32 *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r11
  signed __int64 v45; // rdx
  __int64 v46; // r13
  __int64 v47; // rax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned __int64 v50; // r8
  unsigned int v51; // esi
  unsigned int v52; // ecx
  unsigned int v53; // r14d
  unsigned int v54; // ebx
  unsigned int v55; // r10d
  int v56; // ecx
  __int64 v57; // r15
  __int64 **v58; // rdi
  unsigned int v59; // esi
  __int64 v60; // rdi
  unsigned __int64 *v61; // rbx
  __int64 v62; // r8
  unsigned int v63; // eax
  volatile signed __int64 *v64; // r13
  unsigned __int64 v65; // rax
  ULONG_PTR v66; // r8
  volatile signed __int64 *v67; // r8
  unsigned int v68; // r10d
  __int64 *v69; // rdx
  unsigned __int64 v70; // rax
  __int64 v71; // r9
  ULONG_PTR v72; // rax
  volatile signed __int64 v73; // rcx
  volatile signed __int64 *v74; // r10
  volatile signed __int64 *v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // r10
  __int64 **v79; // rax
  volatile signed __int32 *v80; // rcx
  __int64 v81; // rdx
  unsigned int v82; // r10d
  volatile signed __int32 *v83; // rdx
  unsigned int FrequencyBucket; // eax
  __int64 v85; // r9
  char v86; // cl
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // r11
  int v90; // eax
  unsigned int v91; // eax
  __int64 v92; // r9
  char v93; // dl
  _QWORD *v94; // rdx
  unsigned __int32 v95; // eax
  unsigned __int32 v96; // ett
  __int64 InternalData; // rax
  __int64 v98; // rax
  volatile signed __int32 *v99; // rdx
  __int64 v100; // rcx
  unsigned int v101; // r10d
  volatile signed __int32 *v102; // rcx
  _QWORD *i; // rcx
  signed __int16 v104; // tt
  struct _KPRCB *v105; // rcx
  unsigned __int32 *v106; // r8
  struct _KPRCB *v107; // rcx
  unsigned __int32 *v108; // r8
  unsigned __int32 v109; // eax
  unsigned __int32 v110; // ett
  unsigned __int32 v111; // eax
  unsigned __int32 v112; // ett
  __int64 v113; // rax
  unsigned int v114; // r9d
  unsigned int v115; // eax
  int v116; // ecx
  __int64 v117; // rcx
  __int64 v118; // rbx
  __int64 v119; // r9
  unsigned int *v120; // r10
  __int64 v121; // r11
  __int64 v122; // r8
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  signed __int64 v125; // rdx
  __int64 v126; // r13
  __int64 v127; // rdi
  __int64 v128; // rax
  unsigned __int64 v129; // r10
  signed __int64 v130; // rax
  int v131; // r9d
  __int64 v132; // r8
  __int64 v133; // rcx
  unsigned __int64 v134; // r8
  __int64 v135; // rdx
  __int64 v136; // rdi
  __int64 v137; // rax
  unsigned __int64 v138; // r10
  signed __int64 v139; // rax
  __int64 v140; // r8
  __int64 v141; // rcx
  unsigned __int64 v142; // r8
  __int64 v143; // rdx
  __int64 v144; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v147; // eax
  unsigned __int32 v148; // ett
  struct _KPRCB *v149; // rcx
  signed __int32 *v150; // r8
  signed __int32 v151; // eax
  signed __int32 v152; // ett
  __int64 v153; // rax
  __int16 v154; // r9
  signed __int16 v155; // tt
  signed __int32 v156[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v157; // [rsp+30h] [rbp-D0h]
  unsigned int v158; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v159; // [rsp+38h] [rbp-C8h]
  int v160; // [rsp+40h] [rbp-C0h]
  unsigned int v161; // [rsp+44h] [rbp-BCh]
  volatile signed __int32 *v162; // [rsp+48h] [rbp-B8h]
  __int64 v163; // [rsp+50h] [rbp-B0h] BYREF
  int v164; // [rsp+58h] [rbp-A8h]
  int v165; // [rsp+5Ch] [rbp-A4h]
  int v166; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v167; // [rsp+68h] [rbp-98h]
  unsigned __int64 v168; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v169; // [rsp+78h] [rbp-88h]
  unsigned int v170; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  ULONG_PTR v172; // [rsp+90h] [rbp-70h]
  int v173; // [rsp+98h] [rbp-68h]
  int v174; // [rsp+9Ch] [rbp-64h] BYREF
  int v175; // [rsp+A0h] [rbp-60h] BYREF
  int v176; // [rsp+A4h] [rbp-5Ch] BYREF
  int v177; // [rsp+A8h] [rbp-58h] BYREF
  int v178; // [rsp+ACh] [rbp-54h] BYREF
  int v179; // [rsp+B0h] [rbp-50h] BYREF
  int v180; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v181; // [rsp+B8h] [rbp-48h]
  int v182; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v183; // [rsp+C0h] [rbp-40h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp-38h]
  __int64 v185; // [rsp+D0h] [rbp-30h]
  __int128 v186; // [rsp+D8h] [rbp-28h]
  __int64 v187; // [rsp+E8h] [rbp-18h]
  __int128 v188; // [rsp+F0h] [rbp-10h]
  __int64 v189; // [rsp+100h] [rbp+0h]
  __int128 v190; // [rsp+108h] [rbp+8h]
  __int64 v191; // [rsp+118h] [rbp+18h]
  __int128 v192; // [rsp+120h] [rbp+20h]
  __int64 v193; // [rsp+130h] [rbp+30h]
  __int128 v194; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v195[3]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v196[34]; // [rsp+160h] [rbp+60h] BYREF

  v1 = a1;
  v163 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v196, 0, sizeof(v196));
  v185 = v2;
  while ( 2 )
  {
    *(_BYTE *)(v1 + 32) = 1;
    v3 = 65527LL;
    v4 = __rdtsc();
    v5 = v4 - *(_QWORD *)(v1 + 33152);
    *(_QWORD *)(v2 + 72) += v5;
    v6 = *(unsigned int *)(v2 + 80);
    v7 = v5 * *(unsigned int *)(v1 + 33208);
    *(_QWORD *)(v1 + 33152) = v4;
    v8 = *(_BYTE *)(v2 + 2);
    v9 = (v7 >> 16) + v6;
    if ( v9 > 0xFFFFFFFF )
      v9 = 0xFFFFFFFFLL;
    *(_DWORD *)(v2 + 80) = v9;
    if ( (v8 & 0xBE) != 0 )
    {
      if ( v8 < 0 )
      {
        v10 = *(_QWORD *)(v1 + 34480);
        v11 = (*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 4) & 0x1FFLL;
        v12 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v13, v12);
        v14 = 1 << v13;
        v15 = v13 - 2;
        v173 = v15;
        v9 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v15) + 8LL * (v12 ^ v14) + 8);
        *(_QWORD *)(v9 + 8 * v11) += v5;
        v8 &= ~0x80u;
      }
      if ( (v8 & 0x10) != 0 )
      {
        v9 = 8LL * *(unsigned __int8 *)(v2 + 124) + 33160;
        *(_QWORD *)(v1 + v9) += v5;
        v8 &= ~0x10u;
      }
      if ( (v8 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v2 + 1608) )
        {
          FrequencyBucket = PoGetFrequencyBucket(v1);
          if ( KeHeteroSystem )
            v86 = *(_BYTE *)(v1 + 34056);
          else
            v86 = *(_BYTE *)(v1 + 34059);
          *(_QWORD *)(v85 + 8 * ((v86 != 0) + 2LL * FrequencyBucket)) += v5;
          RtlTimelineBitmapUpdate((unsigned int *)(v85 + 192), KiTimelineBitmapTime);
          if ( !KiEfficiencyClassSystem )
          {
            v90 = (unsigned __int8)*(_DWORD *)(v2 + 512);
            if ( v90 == 2 || (unsigned int)(v90 - 5) <= 1 )
            {
              v9 = 2 * v89;
              *(_QWORD *)(v87 + 16 * v89 + 8) += v5;
            }
          }
          if ( *(_QWORD *)(v2 + 1552) )
          {
            *(_QWORD *)(v87 + 8 * (v88 + 2 * (v89 + 8))) += v5;
            v9 = *(_QWORD *)(*(_QWORD *)(v2 + 1552) + 1608LL) + 8 * (v88 + 8 + 2 * v89);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v9, v5);
          }
        }
        v8 &= ~0x20u;
      }
      if ( (v8 & 0x40) != 0 )
      {
        v113 = *(_QWORD *)(v2 + 968);
        if ( v113 )
          *(_BYTE *)(v113 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(v1, v2, v5, 0LL);
      v16 = *(_QWORD *)(v1 + 33200);
      if ( v16 )
      {
        if ( *(_BYTE *)(v2 + 125) )
        {
          v114 = (unsigned __int8)*(_DWORD *)(v2 + 512);
          if ( v114 < 7 )
          {
            v115 = *(_DWORD *)(v2 + 84);
            v116 = 0;
            v9 = *(unsigned int *)(v2 + 80);
            if ( (unsigned int)v9 <= v115 )
              v9 = v115;
            LOBYTE(v116) = (unsigned int)v9 >= KiDynamicHeteroCpuPolicyExpectedCycles;
            v117 = *(unsigned __int8 *)(v2 + 516) + (unsigned int)KiHgsPlusConfiguration * (v116 + 2 * v114);
            *(_QWORD *)(v16 + 8 * v117) += v5;
          }
        }
      }
      if ( (v8 & 0xBE) != 0 )
      {
        v21 = *(_QWORD *)(v2 + 104);
        if ( v21 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v21); i; i = (_QWORD *)i[51] )
            *i += v5;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0 )
        {
          v22 = *(_QWORD *)(v1 + 192);
          v23 = *(_QWORD *)(v22 + 128);
          v9 = v23 & *(_QWORD *)(*(_QWORD *)(v2 + 576) + 8LL * *(unsigned __int16 *)(v22 + 136) + 8);
          if ( v9 != v23 )
            *(_QWORD *)(v1 + 33192) += v5;
        }
        v24 = *(_QWORD *)(v2 + 360);
        if ( v24 )
        {
          v118 = *(_QWORD *)(v24 + 32);
          if ( v118 )
          {
            v119 = 1LL;
            if ( KiHwCountersCount )
            {
              v120 = (unsigned int *)&KiHwCounters;
              v121 = (unsigned int)KiHwCountersCount;
              v122 = v24 + 48;
              do
              {
                if ( (v118 & v119) != 0 )
                {
                  v123 = __readpmc(*v120);
                  v9 = (unsigned __int64)HIDWORD(v123) << 32;
                  *(_QWORD *)(v122 + 8) += (unsigned int)(v123 - *(_DWORD *)v122);
                  *(_QWORD *)v122 = v123;
                }
                v119 *= 2LL;
                ++v120;
                v122 += 24LL;
                --v121;
              }
              while ( v121 );
            }
          }
        }
      }
      v3 = 65527LL;
    }
    v17 = *(unsigned __int16 *)(v1 + 13244);
    *(_WORD *)(v1 + 13244) = 1;
    if ( (v17 & 8) == 0 )
      goto LABEL_18;
    LOWORD(v17) = v17 & 0xFFF7;
    v166 = v17;
    active = KiSelectActiveTimerTable(v1, 1);
    v27 = active;
    if ( !active )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v147 = *SchedulerAssist;
        do
        {
          v9 = v147;
          LODWORD(v9) = v147 & 0xFFDFFFFF;
          v148 = v147;
          v147 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v147 & 0xFFDFFFFF, v147);
        }
        while ( v148 != v147 );
        if ( (v147 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v196[1] = MEMORY[0xFFFFF78000000014];
      goto LABEL_85;
    }
    v28 = *v26;
    v29 = KiLastNonHrTimerExpiration;
    v30 = *(_DWORD *)(active + 16912);
    v168 = *v26;
    if ( KiLastNonHrTimerExpiration == *(_QWORD *)(active + 16904) )
      v31 = 0;
    else
      v31 = v9;
    v9 = KiLastPseudoHrTimerExpiration;
    v32 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v27 + 16896);
    v33 = v31;
    if ( KiGlobalTimerResolutionRequests )
      v33 = v32;
    v157 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v27 + 16896);
    v34 = v28 >> 18;
    v164 = v33;
    if ( v32 )
    {
      *(_QWORD *)(v27 + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(v27 + 16912) = v34;
    }
    if ( (_BYTE)v33 )
    {
      v35 = *(_DWORD *)(v27 + 16916);
      *(_QWORD *)(v27 + 16904) = v29;
      if ( v30 >= v35 )
        v30 = v35;
      *(_DWORD *)(v27 + 16916) = v34;
    }
    if ( !v32 && !(_BYTE)v33 )
    {
      v105 = KeGetCurrentPrcb();
      v106 = (unsigned __int32 *)v105->SchedulerAssist;
      if ( v106 )
      {
        _m_prefetchw(v106);
        v109 = *v106;
        do
        {
          v9 = v109;
          LODWORD(v9) = v109 & 0xFFDFFFFF;
          v110 = v109;
          v109 = _InterlockedCompareExchange((volatile signed __int32 *)v106, v109 & 0xFFDFFFFF, v109);
        }
        while ( v110 != v109 );
        if ( (v109 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v105);
      }
      _enable();
      v196[1] = MEMORY[0xFFFFF78000000014];
      goto LABEL_82;
    }
    v36 = KeGetCurrentPrcb();
    v37 = (unsigned __int32 *)v36->SchedulerAssist;
    if ( v37 )
    {
      _m_prefetchw(v37);
      v95 = *v37;
      do
      {
        v9 = v95;
        LODWORD(v9) = v95 & 0xFFDFFFFF;
        v96 = v95;
        v95 = _InterlockedCompareExchange((volatile signed __int32 *)v37, v95 & 0xFFDFFFFF, v95);
      }
      while ( v96 != v95 );
      if ( (v95 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
    _enable();
    v196[1] = MEMORY[0xFFFFF78000000014];
    v194 = 0LL;
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(v1 + 33) )
        goto LABEL_82;
      v38 = KiProcessorBlock[0];
    }
    else
    {
      v38 = v1;
    }
    v19 = v38 == -15360;
    v9 = v38 + 15360;
    v159 = v9;
    if ( v19 )
      goto LABEL_82;
    v39 = v1 + 16LL * *(unsigned int *)(v1 + 36032);
    *(_DWORD *)(v1 + 36032) = ((unsigned __int8)*(_DWORD *)(v1 + 36032) + 1) & 0xF;
    v40 = HalpPerformanceCounter;
    *(_QWORD *)(v39 + 36040) = v28;
    if ( *(_DWORD *)(v40 + 228) == 5 )
    {
      v41 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        InternalData = HalpTimerGetInternalData(v40);
        v98 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(InternalData);
        v44 = v159;
        v47 = MEMORY[0xFFFFF780000003B8]
            + (((unsigned __int64)v98 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        goto LABEL_56;
      }
      if ( *(_DWORD *)(v40 + 220) == 64 )
      {
        v124 = HalpTimerGetInternalData(v40);
        v125 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v124);
        v126 = *(_QWORD *)(v40 + 208);
      }
      else
      {
        do
        {
          v126 = *(_QWORD *)(v40 + 208);
          do
          {
            v127 = *(_QWORD *)(v40 + 200);
            v128 = HalpTimerGetInternalData(v40);
            v129 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v128);
            _InterlockedOr(v156, 0);
            v130 = *(_QWORD *)(v40 + 200);
          }
          while ( v127 != v130 );
        }
        while ( v126 != *(_QWORD *)(v40 + 208) );
        v131 = *(_DWORD *)(v40 + 220);
        if ( ((v127 ^ v129) & (1LL << ((unsigned __int8)v131 - 1))) != 0 )
        {
          if ( v131 == 64 )
            v132 = -1LL;
          else
            v132 = (1LL << v131) - 1;
          v133 = 0LL;
          if ( v131 != 64 )
            v133 = 1LL << v131;
          v134 = v127 & v132;
          v125 = v129 | v127 ^ v134;
          if ( v129 < v134 )
            v125 += v133;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 200), v125, v130);
        }
        else
        {
          if ( v131 == 64 )
            v135 = -1LL;
          else
            v135 = (1LL << v131) - 1;
          v125 = v129 | v127 & ~v135;
        }
      }
      v47 = HalpTimerScaleCounter(v125 + v126, *(_QWORD *)(v40 + 192), 10000000LL);
    }
    else
    {
      v41 = *(_QWORD *)(v40 + 192);
      if ( *(_DWORD *)(v40 + 220) == 64 )
      {
        v42 = HalpTimerGetInternalData(v40);
        v43 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v42);
        v44 = v159;
        v45 = v43;
        v46 = *(_QWORD *)(v40 + 208);
      }
      else
      {
        v159 = v9;
        do
        {
          v46 = *(_QWORD *)(v40 + 208);
          do
          {
            v136 = *(_QWORD *)(v40 + 200);
            v137 = HalpTimerGetInternalData(v40);
            v138 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v137);
            _InterlockedOr(v156, 0);
            v139 = *(_QWORD *)(v40 + 200);
          }
          while ( v136 != v139 );
        }
        while ( v46 != *(_QWORD *)(v40 + 208) );
        v3 = *(unsigned int *)(v40 + 220);
        if ( ((v136 ^ v138) & (1LL << ((unsigned __int8)v3 - 1))) != 0 )
        {
          if ( (_DWORD)v3 == 64 )
            v140 = -1LL;
          else
            v140 = (1LL << v3) - 1;
          v141 = 0LL;
          if ( (_DWORD)v3 != 64 )
            v141 = 1LL << v3;
          v142 = v136 & v140;
          v45 = v138 | v136 ^ v142;
          if ( v138 < v142 )
            v45 += v141;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 200), v45, v139);
          v44 = v159;
        }
        else
        {
          if ( (_DWORD)v3 == 64 )
            v143 = -1LL;
          else
            v143 = (1LL << v3) - 1;
          v44 = v159;
          v45 = v138 | v136 & ~v143;
        }
      }
      v47 = v45 + v46;
    }
    v28 = v168;
LABEL_56:
    if ( v40 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v144 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v144 = 10000000LL;
      v47 = HalpTimerScaleCounter(v47, v41, v144);
    }
    *(_QWORD *)(v39 + 36048) = v47;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v194 = v28;
      v195[0] = &v194;
      BYTE8(v194) = 0;
      v195[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v195, 1, 1073872896, 3920, 1538);
      v44 = v159;
    }
    v48 = v34 - v30 + 1;
    v170 = v48;
    if ( v48 > 0x100 )
    {
      v62 = (v34 - v48 + 1) << 18;
      goto LABEL_237;
    }
    while ( 2 )
    {
      v165 = v48;
      v49 = 256 - v48;
      v167 = v28;
      v50 = v28;
      if ( 256 - v48 > 0x18 )
        v49 = 24;
LABEL_62:
      v51 = 0;
      v187 = 0LL;
      v52 = v30 + v165;
      v53 = v30 - 1;
      v181 = v52;
      v54 = v53;
      v186 = 0LL;
      v55 = v52 - 1;
      v158 = 0;
      v56 = v52 - 1 + v49;
      v161 = v55;
      v160 = v55 + v49;
      BYTE3(v186) = -64;
      do
      {
        v57 = v44 + 32 * ((unsigned __int8)++v54 + 16LL);
        if ( v51 > v55 && *(_QWORD *)(v57 + 24) > v50 )
          continue;
        v58 = (__int64 **)(v57 + 8);
        if ( v58 == (__int64 **)*v58 )
          goto LABEL_65;
        do
        {
          v174 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v57, 0LL) )
          {
            do
              KeYieldProcessorEx(&v174);
            while ( *(_QWORD *)v57 );
          }
          v44 = v159;
          v67 = (volatile signed __int64 *)v57;
          v68 = v158;
          v169 = (volatile signed __int64 *)v57;
          do
          {
            v69 = *v58;
            if ( v58 == (__int64 **)*v58 )
              goto LABEL_100;
            v70 = *(v69 - 1);
            v3 = (ULONG_PTR)(v69 - 4);
            BugCheckParameter3 = (ULONG_PTR)(v69 - 4);
            if ( v70 > v167 )
            {
              *(_QWORD *)(v57 + 24) = v70;
LABEL_100:
              _InterlockedAnd64(v67, 0LL);
              goto LABEL_101;
            }
            v190 = 0LL;
            BYTE3(v186) ^= (BYTE3(v186) ^ v68) & 0x3F;
            BYTE3(v190) = *(_BYTE *)(v3 + 3) ^ BYTE3(v186);
            v191 = 0LL;
            _InterlockedXor((volatile signed __int32 *)v3, v190);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v44 + 8LL * v68), v3);
            v76 = *(unsigned __int16 *)(v3 + 58);
            v162 = (volatile signed __int32 *)v76;
            v77 = *v69;
            v78 = v44 + 32 * ((unsigned __int8)v54 + ((unsigned __int64)(unsigned int)v76 << 8) + 16);
            v183 = v44 + 32 * ((unsigned __int8)v54 + ((v76 ^ 1) << 8) + 16);
            v79 = (__int64 **)v69[1];
            v172 = v78;
            if ( *(__int64 **)(v77 + 8) != v69 || *v79 != v69 )
LABEL_295:
              __fastfail(3u);
            *v79 = (__int64 *)v77;
            *(_QWORD *)(v77 + 8) = v79;
            if ( v79 == (__int64 **)v77 )
            {
              v19 = (_WORD)v162 == 0;
              *(_DWORD *)(v78 + 28) = -1;
              if ( v19 )
              {
                v175 = 0;
                v80 = (volatile signed __int32 *)(v44 + 32 * ((unsigned __int8)v54 + 272LL));
                v162 = v80;
                while ( _interlockedbittestandset64(v80, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v175);
                    v80 = v162;
                  }
                  while ( *(_QWORD *)v162 );
                }
                v67 = v169;
                goto LABEL_115;
              }
              v80 = (volatile signed __int32 *)v57;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v57, 0LL) )
              {
                _mm_pause();
                goto LABEL_246;
              }
              if ( !v57 )
              {
LABEL_246:
                _InterlockedAnd64(v67, 0LL);
                v176 = 0;
                while ( _interlockedbittestandset64(v80, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v176);
                    v80 = (volatile signed __int32 *)v57;
                  }
                  while ( *(_QWORD *)v57 );
                }
                v177 = 0;
                v67 = (volatile signed __int64 *)(v159 + 32 * ((unsigned __int8)v54 + 272LL));
                v169 = v67;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v67, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v177);
                    v67 = v169;
                  }
                  while ( *v169 );
                }
                v80 = (volatile signed __int32 *)v57;
LABEL_115:
                v78 = v172;
                v3 = BugCheckParameter3;
                v44 = v159;
              }
              if ( *(_DWORD *)(v78 + 28) == -1 && *(_DWORD *)(v183 + 28) == -1 )
              {
                v81 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v44 - 15152) + 1];
                if ( KiSerializeTimerExpiration )
                {
                  v82 = v54 & 0x3F;
                  v83 = (volatile signed __int32 *)(v81 + 8LL * ((unsigned __int8)v54 >> 6));
                }
                else
                {
                  v82 = *(unsigned __int8 *)(v44 - 15151);
                  v83 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v54 << 6) + v81);
                }
                _interlockedbittestandreset64(v83, v82);
              }
              _InterlockedAnd64((volatile signed __int64 *)v80, 0LL);
            }
            v68 = ++v158;
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v3, BugCheckParameter4);
          }
          while ( v68 != 64 );
          _InterlockedAnd64(v67, 0LL);
          KiProcessExpiredTimerList(v163, (int *)v196, v44, 0x40u);
          v158 = 0;
        }
        while ( v58 != (__int64 **)*v58 );
        v44 = v159;
LABEL_101:
        v55 = v161;
        v56 = v160;
LABEL_65:
        v50 = v167;
        ++v51;
      }
      while ( v54 != v56 );
      v9 = v158;
      if ( v158 )
      {
        KiProcessExpiredTimerList(v163, (int *)v196, v44, v158);
        v56 = v160;
        v44 = v159;
        v55 = v161;
      }
      LOBYTE(v33) = v164;
      if ( !(_BYTE)v164 )
      {
        v1 = v163;
        goto LABEL_78;
      }
      v59 = 0;
      v189 = 0LL;
      v3 = 0LL;
      v188 = 0LL;
      v158 = 0;
      BYTE3(v188) = -64;
      while ( 2 )
      {
        v60 = v44 + 32 * ((unsigned __int8)++v53 + 272LL);
        if ( v59 > v55 && *(_QWORD *)(v60 + 24) > v167 )
          goto LABEL_74;
        v61 = (unsigned __int64 *)(v60 + 8);
        if ( v61 == (unsigned __int64 *)*v61 )
          goto LABEL_73;
        while ( 2 )
        {
          v178 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
          {
            do
              KeYieldProcessorEx(&v178);
            while ( *(_QWORD *)v60 );
          }
          v44 = v159;
          v64 = (volatile signed __int64 *)v60;
          v3 = v158;
          while ( 2 )
          {
            v9 = *v61;
            if ( v61 == (unsigned __int64 *)*v61 )
              goto LABEL_92;
            v65 = *(_QWORD *)(v9 - 8);
            v66 = v9 - 32;
            v172 = v9 - 32;
            if ( v65 > v167 )
            {
              *(_QWORD *)(v60 + 24) = v65;
LABEL_92:
              _InterlockedAnd64(v64, 0LL);
              goto LABEL_93;
            }
            v192 = 0LL;
            BYTE3(v188) ^= (BYTE3(v188) ^ v3) & 0x3F;
            BYTE3(v192) = *(_BYTE *)(v66 + 3) ^ BYTE3(v188);
            v193 = 0LL;
            _InterlockedXor((volatile signed __int32 *)v66, v192);
            v71 = _InterlockedExchange64((volatile __int64 *)(v44 + 8LL * (unsigned int)v3), v66);
            v72 = *(unsigned __int16 *)(v66 + 58);
            BugCheckParameter4 = v72;
            BugCheckParameter3 = v71;
            v73 = *(_QWORD *)v9;
            v74 = (volatile signed __int64 *)(v44
                                            + 32
                                            * ((unsigned __int8)v53 + ((unsigned __int64)(unsigned int)v72 << 8) + 16));
            v183 = v44 + 32 * ((unsigned __int8)v53 + ((v72 ^ 1) << 8) + 16);
            v75 = *(volatile signed __int64 **)(v9 + 8);
            v169 = v74;
            if ( *(_QWORD *)(v73 + 8) != v9 || *v75 != v9 )
              goto LABEL_295;
            *v75 = v73;
            *(_QWORD *)(v73 + 8) = v75;
            if ( v75 == (volatile signed __int64 *)v73 )
            {
              v19 = (_WORD)BugCheckParameter4 == 0;
              *((_DWORD *)v74 + 7) = -1;
              if ( v19 )
              {
                v179 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v179);
                  while ( *(_QWORD *)v60 );
                }
                v99 = (volatile signed __int32 *)v60;
              }
              else
              {
                v99 = (volatile signed __int32 *)(v44 + 32 * ((unsigned __int8)v53 + 16LL));
                if ( _interlockedbittestandset64(v99, 0LL) )
                {
                  _mm_pause();
                }
                else if ( v99 )
                {
                  goto LABEL_148;
                }
                _InterlockedAnd64(v64, 0LL);
                v162 = (volatile signed __int32 *)(v44 + 32 * ((unsigned __int8)v53 + 16LL));
                v180 = 0;
                while ( _interlockedbittestandset64(v99, 0LL) )
                {
                  do
                  {
                    KeYieldProcessorEx(&v180);
                    v99 = v162;
                  }
                  while ( *(_QWORD *)v162 );
                }
                v64 = (volatile signed __int64 *)v60;
                v182 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v182);
                  while ( *(_QWORD *)v60 );
                }
                v99 = v162;
              }
              v74 = v169;
              v71 = BugCheckParameter3;
              v44 = v159;
              v66 = v172;
LABEL_148:
              if ( *((_DWORD *)v74 + 7) == -1 && *(_DWORD *)(v183 + 28) == -1 )
              {
                v100 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v44 - 15152) + 1];
                if ( KiSerializeTimerExpiration )
                {
                  v101 = v53 & 0x3F;
                  v102 = (volatile signed __int32 *)(v100 + 8LL * ((unsigned __int8)v53 >> 6));
                }
                else
                {
                  v101 = *(unsigned __int8 *)(v44 - 15151);
                  v102 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v53 << 6) + v100);
                }
                _interlockedbittestandreset64(v102, v101);
              }
              _InterlockedAnd64((volatile signed __int64 *)v99, 0LL);
            }
            ++v158;
            if ( v71 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v66, v71);
            v3 = v158;
            if ( v158 != 64 )
              continue;
            break;
          }
          _InterlockedAnd64(v64, 0LL);
          KiProcessExpiredTimerList(v163, (int *)v196, v44, 0x40u);
          v3 = 0LL;
          v158 = 0;
          if ( v61 != (unsigned __int64 *)*v61 )
            continue;
          break;
        }
        v44 = v159;
LABEL_93:
        v55 = v161;
        v56 = v160;
LABEL_73:
        ++v59;
LABEL_74:
        if ( v53 != v56 )
          continue;
        break;
      }
      v1 = v163;
      if ( (_DWORD)v3 )
        KiProcessExpiredTimerList(v163, (int *)v196, v44, v3);
      LOBYTE(v33) = v164;
LABEL_78:
      v19 = v170 == v165;
      v48 = v170 - v165;
      v30 = v181;
      v44 = v159;
      v62 = v167;
      v28 = v168;
      v170 -= v165;
      if ( !v19 )
      {
LABEL_237:
        if ( v48 <= 0x100 )
          continue;
        v50 = v62 + 0x4000000;
        v165 = 256;
        v167 = v50;
        v49 = 0;
        goto LABEL_62;
      }
      break;
    }
    LOWORD(v17) = v166;
    v32 = v157;
    if ( (*(_BYTE *)(v1 + 13244) & 8) == 0 )
    {
      v63 = *(_DWORD *)(v1 + 33128);
      *(_DWORD *)(v1 + 33124) = 0;
      if ( v63 >= KeTimeIncrement )
        *(_DWORD *)(v1 + 33128) = v63 - KeTimeIncrement;
      else
        *(_DWORD *)(v1 + 33128) = 0;
    }
LABEL_82:
    if ( *(_BYTE *)(v1 + 33) )
      KiTimer2Expiration(v1, v28, v32, v33, v196);
    v2 = v185;
LABEL_85:
    _disable();
LABEL_18:
    if ( (v17 & 0x40) != 0 )
    {
      v107 = KeGetCurrentPrcb();
      LOWORD(v17) = v17 & 0xFFBF;
      v108 = (unsigned __int32 *)v107->SchedulerAssist;
      if ( v108 )
      {
        _m_prefetchw(v108);
        v111 = *v108;
        do
        {
          v9 = v111;
          LODWORD(v9) = v111 & 0xFFDFFFFF;
          v112 = v111;
          v111 = _InterlockedCompareExchange((volatile signed __int32 *)v108, v111 & 0xFFDFFFFF, v111);
        }
        while ( v112 != v111 );
        if ( (v111 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v107);
      }
      _enable();
      KiNormalPriorityReadyScan(v1, v9, v108, v3);
      _disable();
    }
    if ( (unsigned __int8)KiExecuteAllDpcs(v1, v2, v196, 0LL) )
    {
      if ( (v17 & 4) != 0 )
      {
        v149 = KeGetCurrentPrcb();
        v150 = (signed __int32 *)v149->SchedulerAssist;
        if ( v150 )
        {
          _m_prefetchw(v150);
          v151 = *v150;
          do
          {
            v152 = v151;
            v151 = _InterlockedCompareExchange(v150, v151 & 0xFFDFFFFF, v151);
          }
          while ( v152 != v151 );
          if ( (v151 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v149);
        }
        _enable();
        KeSignalGate(v1 + 32320, 0LL);
        _disable();
      }
      v18 = __rdtsc();
      *(_QWORD *)(v1 + 33400) += v18 - *(_QWORD *)(v1 + 33152);
      if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
      {
        v91 = PoGetFrequencyBucket(v1);
        if ( KeHeteroSystem )
          v93 = *(_BYTE *)(v1 + 34056);
        else
          v93 = *(_BYTE *)(v1 + 34059);
        v94 = (_QWORD *)(v1 + 8 * ((v93 != 0) + 2LL * v91 + 4176));
        *v94 += v92;
      }
      if ( (*(_BYTE *)(v2 + 2) & 0x40) != 0 )
      {
        v153 = *(_QWORD *)(v2 + 968);
        if ( v153 )
          *(_BYTE *)(v153 + 64) = 1;
      }
      *(_QWORD *)(v1 + 33152) = v18;
      if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(v2, 0LL);
      v19 = *(_BYTE *)(v1 + 6) == 0;
      *(_BYTE *)(v1 + 32) = 0;
      if ( !v19 )
        *(_BYTE *)(v1 + 6) = 0;
      result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 13244), 0, 1);
      if ( result == 1 )
        goto LABEL_28;
      continue;
    }
    break;
  }
  KiStartThreadCycleAccumulation(v1, v2, 1);
  LODWORD(v163) = 0;
  _m_prefetchw((const void *)(v1 + 13244));
  v104 = *(_WORD *)(v1 + 13244);
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 13244), (v104 | v17) & 0xFF7E | 0x80, v104);
  if ( v104 != result )
  {
    do
    {
      RtlBackoff((unsigned int *)&v163);
      _m_prefetchw((const void *)(v1 + 13244));
      v155 = *(_WORD *)(v1 + 13244);
      result = _InterlockedCompareExchange16(
                 (volatile signed __int16 *)(v1 + 13244),
                 v154 | (v17 | v155) & 0xFFFE,
                 v155);
    }
    while ( v155 != result );
  }
LABEL_28:
  *(_QWORD *)(v1 + 13152) = 0LL;
  return result;
}
