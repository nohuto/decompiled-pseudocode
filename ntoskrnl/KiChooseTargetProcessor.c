/*
 * XREFs of KiChooseTargetProcessor @ 0x140258FC0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiTryLocalThreadSchedule @ 0x140259D60 (KiTryLocalThreadSchedule.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiSelectCandidateProcessor @ 0x14045A5B4 (KiSelectCandidateProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056E2D8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1405747AC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x140574DA8 (KiFindRankBiasedIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14057528C (KiSelectIdleProcessor.c)
 *     KiAreSoftUnparkingElectionsEnabled @ 0x14057B67C (KiAreSoftUnparkingElectionsEnabled.c)
 *     KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule @ 0x14057B6AC (KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14057C470 (KiIsIsolationUnitIdleByHandle.c)
 */

__int64 __fastcall KiChooseTargetProcessor(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned __int16 *v5; // rdi
  _DWORD *v6; // rsi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // di
  unsigned __int16 v17; // bx
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  char v42; // cl
  unsigned __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  unsigned __int16 v46; // bx
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  unsigned __int16 v57; // di
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  unsigned int v60; // edi
  __int64 v61; // rax
  _BYTE *v62; // rcx
  unsigned int v63; // edx
  __int64 *v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rbx
  unsigned __int64 v67; // r10
  __int64 *v68; // r8
  unsigned int v69; // edx
  int v70; // r11d
  unsigned __int64 *v71; // r8
  int v72; // edx
  int v73; // r9d
  char v74; // cl
  __int64 v75; // rbx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // rax
  unsigned __int64 v80; // r12
  __int64 v81; // r11
  unsigned __int64 v82; // r15
  unsigned __int8 *v83; // rdx
  __int64 v84; // rdi
  int v85; // ebx
  unsigned __int8 *v86; // rsi
  unsigned int v87; // r14d
  int v88; // ebx
  bool v89; // zf
  unsigned __int64 v90; // r12
  unsigned int v91; // r9d
  unsigned __int8 *v92; // r11
  unsigned __int8 v93; // r10
  unsigned __int8 v94; // r9
  unsigned __int8 v95; // bl
  int v96; // ecx
  _BYTE *v97; // rax
  unsigned int v98; // ecx
  __int64 *v99; // r14
  __int64 v100; // r9
  __int64 v101; // r15
  __int64 v102; // rsi
  unsigned int v103; // edi
  __int64 v104; // rbx
  int IsIsolationUnitIdleByHandle; // eax
  int v106; // r11d
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 result; // rax
  __int64 v111; // rcx
  __int64 v112; // [rsp+20h] [rbp-E0h]
  __int64 v113; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v114; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v115; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v116; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v117; // [rsp+50h] [rbp-B0h]
  _QWORD *v118; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v119; // [rsp+60h] [rbp-A0h]
  __int64 v120; // [rsp+68h] [rbp-98h]
  __int64 v121; // [rsp+70h] [rbp-90h] BYREF
  int v122; // [rsp+78h] [rbp-88h]
  int v123; // [rsp+7Ch] [rbp-84h] BYREF
  int v124; // [rsp+80h] [rbp-80h] BYREF
  __int64 v125; // [rsp+88h] [rbp-78h]
  _BYTE v126[24]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v127; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v128[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v130[42]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a3;
  v117 = a3;
  v6 = a2;
  v119 = a2;
  v7 = a1;
  v116 = a1;
  v125 = a4;
  memset(v130, 0, 0x108uLL);
  v113 = a5;
  v8 = (v6[30] >> 1) & 1;
  BYTE1(v113) = 0;
  HIDWORD(v113) = v8;
  memset(v126, 0, sizeof(v126));
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)v6[134];
        LODWORD(v9) = v9 & 0x7FFFFFFF;
        v10 = KiProcessorBlock[v9];
        v11 = KiTryLocalThreadSchedule(v7, v10, (_DWORD)v6, (_DWORD)v5, (__int64)&v113);
        if ( v11 )
          goto LABEL_106;
        v12 = *(_QWORD *)(v10 + 192);
        v13 = KiProcessorBlock[v6[147]];
        v120 = v13;
        WORD1(v130[0]) = 32;
        v14 = *(_QWORD *)(v13 + 192);
        memset(&v130[1], 0, 0x100uLL);
        v15 = 32;
        v16 = *v5;
        v17 = v16;
        if ( v16 > 0x20u )
          v17 = 32;
        v18 = 0LL;
        LOWORD(v130[0]) = v17;
        v19 = 0;
        HIDWORD(v130[0]) = 0;
        if ( v17 )
        {
          memmove(&v130[1], v117 + 4, 8LL * v17);
          v15 = WORD1(v130[0]);
          v19 = v17;
          v18 = 0LL;
        }
        if ( v19 < v15 )
        {
          do
          {
            v20 = v19++;
            v130[v20 + 1] = 0LL;
          }
          while ( v19 < WORD1(v130[0]) );
        }
        v21 = *(unsigned __int16 *)(v14 + 136);
        v11 = 0LL;
        if ( v12 == v14 )
          v11 = v10;
        if ( (unsigned __int16)v21 >= v16 )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)&v117[4 * v21 + 4];
        v23 = *(_QWORD *)(v14 + 8);
        v24 = *(_QWORD *)(v14 + 8LL * SHIDWORD(v113) + 16);
        v25 = v22 & v23 & v24;
        v114 = v25;
        if ( BYTE1(v113) )
        {
          if ( v25 )
            goto LABEL_19;
          v23 = *(_QWORD *)(v14 + 16) & *(_QWORD *)(v14 + 96);
          v25 = v22 & v23 & v24;
          v114 = v25;
        }
        if ( !v25 )
        {
          v11 = 0LL;
          goto LABEL_70;
        }
LABEL_19:
        if ( (*(_BYTE *)(v14 + 184) & 1) != 0 )
        {
          if ( (_BYTE)v113 )
          {
            if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(v13, &v114) )
              goto LABEL_45;
            v18 = 0LL;
          }
          if ( (v114 & *(_QWORD *)(v14 + 24)) != 0 )
          {
            if ( (_BYTE)v113
              && (unsigned int)((0x101010101010101LL
                               * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
            {
              v11 = 0LL;
              goto LABEL_70;
            }
            v114 &= *(_QWORD *)(v14 + 24);
          }
          else
          {
            if ( (_BYTE)v113 )
            {
              v11 = 0LL;
              goto LABEL_70;
            }
            v26 = *(_QWORD *)(v116 + 192);
            if ( v26 == v14 )
            {
              v27 = v114 & *(_QWORD *)(v26 + 16);
              v28 = *(_QWORD *)(v116 + 34912) & ~*(_QWORD *)(v116 + 200);
              if ( (v28 & v114) != 0
                && (v27 & v28) == v28
                && (*(_BYTE *)(v116 + 13244) & 1) == 0
                && !*(_DWORD *)(v116 + 32472) )
              {
                v29 = *(_QWORD *)(v116 + 8);
                if ( !*(_BYTE *)(v116 + 32) )
                {
                  _disable();
                  KiEndThreadCycleAccumulation(v116, *(_QWORD *)(v116 + 8), 0LL, 0LL);
                  KiStartThreadCycleAccumulation(v116, v29, 0);
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    _m_prefetchw(SchedulerAssist);
                    v32 = *SchedulerAssist;
                    do
                    {
                      v33 = v32;
                      v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
                    }
                    while ( v33 != v32 );
                    if ( (v32 & 0x200000) != 0 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                  _enable();
                }
                v34 = *(_DWORD *)(v29 + 80);
                v35 = *(_DWORD *)(v29 + 84);
                if ( v34 >= v35 || v35 - v34 < KiShortExecutionCycles )
                  v114 &= v28;
              }
            }
          }
        }
LABEL_45:
        v36 = *(_QWORD *)(v14 + 32);
        v18 = v114;
        if ( (v36 & v114) != 0 )
          v18 = v36 & v114;
        v114 = v18;
        if ( (v18 & *(_QWORD *)(v13 + 200)) != 0 )
        {
          v11 = v13;
        }
        else
        {
          if ( v11 && (v18 & *(_QWORD *)(v11 + 200)) != 0 )
            goto LABEL_106;
          v37 = *(_QWORD *)(v13 + 34912) & v18;
          if ( v37 )
          {
            v18 &= *(_QWORD *)(v13 + 34912);
            v114 = v37;
          }
          else if ( v11 && (v38 = *(_QWORD *)(v11 + 34912) & v18) != 0 )
          {
            v18 &= *(_QWORD *)(v11 + 34912);
            v114 = v38;
          }
          else
          {
            v39 = *(_QWORD *)(v13 + 34936) & v18;
            if ( v39 )
            {
              v18 &= *(_QWORD *)(v13 + 34936);
              v114 = v39;
            }
            else if ( v11 && (v40 = *(_QWORD *)(v11 + 34912) & v18) != 0 )
            {
              v18 &= *(_QWORD *)(v11 + 34912);
              v114 = v40;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v41 = *(_QWORD *)(v13 + 34928) & v18;
              if ( v41 )
              {
                v18 &= *(_QWORD *)(v13 + 34928);
                v114 = v41;
              }
              else if ( v11 )
              {
                if ( (*(_QWORD *)(v11 + 34928) & v18) != 0 )
                  v18 &= *(_QWORD *)(v11 + 34928);
                v114 = v18;
              }
            }
          }
          v42 = *(_BYTE *)(v13 + 209);
          v18 = __ROR8__(v18, v42);
          _BitScanForward64(&v43, v18);
          v44 = *(unsigned __int8 *)(v13 + 208) << 6;
          v122 = v43;
          v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v44 + ((v42 + (_BYTE)v43) & 0x3F)]];
        }
        if ( v11 )
          goto LABEL_106;
LABEL_70:
        v45 = *(unsigned __int16 *)(v14 + 136);
        v46 = v130[0];
        if ( LOWORD(v130[0]) > (unsigned __int16)v45 )
        {
          v130[v45 + 1] &= ~*(_QWORD *)(v14 + 128);
          v46 = v130[0];
        }
        if ( v12 == v14 || (v47 = *(unsigned __int16 *)(v12 + 136), (unsigned __int16)v47 >= v46) || !v130[v47 + 1] )
        {
          v48 = v116;
        }
        else
        {
          v112 = v10;
          v48 = v116;
          v11 = KiSelectIdleProcessor((_DWORD)v117, v116, v13, v12, v112, (__int64)&v113);
          if ( v11 )
            goto LABEL_106;
        }
        v49 = *(unsigned __int16 *)(v12 + 136);
        if ( v46 > (unsigned __int16)v49 )
        {
          v130[v49 + 1] &= ~*(_QWORD *)(v12 + 128);
          v46 = v130[0];
        }
        v50 = *(_QWORD *)(v48 + 192);
        v118 = (_QWORD *)v50;
        if ( v50 == v14
          || v50 == v12
          || (v51 = *(unsigned __int16 *)(v50 + 136), (unsigned __int16)v51 >= v46)
          || !v130[v51 + 1]
          || (v11 = KiSelectIdleProcessor((_DWORD)v117, v48, v13, v50, v48, (__int64)&v113)) == 0 )
        {
          v52 = *(unsigned __int16 *)(v50 + 136);
          if ( v46 > (unsigned __int16)v52 )
          {
            v130[v52 + 1] &= ~*(_QWORD *)(v50 + 128);
            v46 = v130[0];
          }
          v53 = 0LL;
          v54 = 0LL;
          if ( !v46 )
            goto LABEL_90;
          while ( !v130[(unsigned __int16)v54 + 1] )
          {
            LOWORD(v54) = v54 + 1;
            if ( (unsigned __int16)v54 >= v46 )
              goto LABEL_90;
          }
          v56 = *(unsigned __int16 *)(v14 + 138);
          *(_DWORD *)v126 = *(unsigned __int16 *)(v14 + 138);
          *(_OWORD *)&v126[4] = 0LL;
          *(_QWORD *)&v126[8] = KeNodeBlock[v56];
          *(_QWORD *)&v126[16] = *(unsigned int *)(*(_QWORD *)&v126[8] + 16LL);
          if ( !(unsigned int)KiEnumerateNextSchedulerSubNodeInSystem(v126, &v118) )
            break;
        }
LABEL_106:
        v60 = HIDWORD(v113);
        v128[0] = v11;
        v61 = v11 ^ ((unsigned __int8)v11 ^ BYTE4(v113)) & 1;
        v115 = v61;
        if ( !HIDWORD(v113) )
        {
          v64 = v128;
          v63 = 1;
LABEL_111:
          v65 = v63;
          do
          {
            v66 = *v64;
            v123 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(&v123);
              while ( *(_QWORD *)(v66 + 48) );
            }
            ++v64;
            --v65;
          }
          while ( v65 );
          v60 = HIDWORD(v113);
          v61 = v115;
          goto LABEL_118;
        }
        if ( HIDWORD(v113) == 1 )
        {
          v62 = *(_BYTE **)(v11 + 34904);
          v63 = (unsigned __int8)*v62;
          v64 = (__int64 *)(v62 + 8);
          if ( *v62 )
            goto LABEL_111;
        }
LABEL_118:
        v67 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
        v68 = 0LL;
        v128[1] = v61 & 0xFFFFFFFFFFFFFFFEuLL;
        v69 = 0;
        v70 = v61 & 1;
        if ( (v61 & 1) != 0 )
        {
          if ( v70 == 1 )
          {
            v68 = (__int64 *)(*(_QWORD *)(v67 + 34904) + 8LL);
            v69 = **(unsigned __int8 **)(v67 + 34904);
          }
          LOBYTE(v73) = 1;
          if ( !v69 )
            goto LABEL_127;
          v75 = v69;
          do
          {
            v76 = *v68++;
            v73 = ((*(_BYTE *)(v76 + 35) & 1) == 0) & (unsigned __int8)v73;
            --v75;
          }
          while ( v75 );
          if ( v73 )
            goto LABEL_127;
          v127 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
          v71 = 0LL;
          v72 = 0;
          if ( (v61 & 1) == 0 )
            goto LABEL_121;
          if ( v70 == 1 )
          {
            v71 = (unsigned __int64 *)(*(_QWORD *)(v67 + 34904) + 8LL);
            v72 = **(unsigned __int8 **)(v67 + 34904);
          }
          v7 = v116;
          v5 = v117;
          v6 = v119;
          if ( v72 )
          {
            do
LABEL_122:
              _InterlockedAnd64((volatile signed __int64 *)(v71[--v72] + 48), 0LL);
            while ( v72 );
            v7 = v116;
            v5 = v117;
            v6 = v119;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v67 + 35) & 1) != 0 )
          {
            v127 = v61 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_121:
            v71 = &v127;
            v72 = 1;
            goto LABEL_122;
          }
LABEL_127:
          v74 = *(_BYTE *)(v11 + 35);
          if ( (v74 & 8) == 0 )
            goto LABEL_212;
          if ( !BYTE1(v113) || (v74 & 1) != 0 || (v74 & 0xC) != 0xC )
            goto LABEL_205;
          KiReleasePrcbLocksForIsolationUnit(&v115);
          if ( (unsigned __int8)KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule(
                                  v11,
                                  *(_QWORD *)(v11 + 192),
                                  v60,
                                  &v115) )
          {
            v61 = v115;
LABEL_212:
            v111 = v125;
            *(_QWORD *)v125 = v61;
            result = 12LL;
            *(_DWORD *)(v111 + 8) = 1;
            *(_DWORD *)(v111 + 12) = 0;
            return result;
          }
          v7 = v116;
          v5 = v117;
          v6 = v119;
        }
      }
      v57 = v130[0];
      while ( 1 )
      {
        v58 = v118;
        if ( v118 != (_QWORD *)v14 && v118 != (_QWORD *)v12 && v118 != *(_QWORD **)(v48 + 192) )
        {
          v11 = KiSelectIdleProcessor((_DWORD)v117, v48, v13, (_DWORD)v118, 0LL, (__int64)&v113);
          if ( v11 )
            goto LABEL_106;
          v59 = *((unsigned __int16 *)v58 + 68);
          if ( (unsigned __int16)v59 >= v57
            || (v130[v59 + 1] &= ~v58[16], v57 = v130[0], (unsigned __int16)v59 >= LOWORD(v130[0]))
            || !v130[v59 + 1] )
          {
            if ( (unsigned int)KeIsEmptyAffinityEx(v130) )
              break;
          }
        }
        if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem(v126, &v118) )
          goto LABEL_106;
      }
LABEL_90:
      if ( BYTE1(v113) )
        goto LABEL_152;
      if ( !KeSoftParkedQueueThreshold || (unsigned __int8)KiAreSoftUnparkingElectionsEnabled(v54) )
        break;
      v121 = 0LL;
      KiAcquirePrcbLocksForIsolationUnit(v13, 0, &v121);
      if ( (*(_BYTE *)(v13 + 35) & 8) != 0 )
      {
        KiReleasePrcbLocksForIsolationUnit(&v121);
        v6 = v119;
        v55 = (_QWORD *)KiSelectCandidateProcessor(v13, (_DWORD)v119, -1, 0, (__int64)&v121);
      }
      else
      {
        v6 = v119;
        v55 = (_QWORD *)v13;
      }
      v77 = v55[4143];
      if ( v55[4360] )
      {
        v78 = v55[4361];
        v124 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
        {
          do
            KeYieldProcessorEx(&v124);
          while ( *(_QWORD *)v78 );
        }
        v77 += *(_QWORD *)(v78 + 680);
        _InterlockedAnd64((volatile signed __int64 *)v78, 0LL);
      }
      KiReleasePrcbLocksForIsolationUnit(&v121);
      if ( v77 <= (unsigned int)KeSoftParkedQueueThreshold )
        break;
      v7 = v116;
      v5 = v117;
      BYTE1(v113) = 1;
    }
    BYTE1(v113) = 0;
LABEL_152:
    v79 = *(unsigned __int8 *)(v13 + 208);
    if ( (unsigned __int16)v79 >= *v117 )
      v80 = 0LL;
    else
      v80 = *(_QWORD *)&v117[4 * v79 + 4];
    v81 = v120;
    v118 = (_QWORD *)v80;
    v82 = v80 & *(_QWORD *)(v120 + 34880);
    if ( ((v82 - 1) & v82) != 0 )
    {
      v83 = *(unsigned __int8 **)(v120 + 34888);
      v84 = v83[657];
      v85 = v83[656];
      v86 = (unsigned __int8 *)&v130[34] + v84;
      memmove((char *)&v130[34] + v84, v83 + 528, v83[656]);
      v81 = v120;
      v87 = v84 + v85;
      v88 = -1;
      v53 = *((unsigned __int8 *)v119 + 195);
      if ( (KiHeteroSchedulerOptionsMask & 2) != 0 )
      {
        v89 = (KiHeteroSchedulerOptions & 2) == 0;
      }
      else
      {
        if ( (KiVelocityFlags & 0x800) == 0 )
          goto LABEL_171;
        v89 = KeHeteroSystemQos == 0;
      }
      if ( !v89 )
      {
        v90 = v82 & *(_QWORD *)(*(_QWORD *)(v120 + 192) + 264LL);
        if ( v90 )
        {
          if ( (((unsigned __int8)v119[128] - 1) & 0xFFFFFFFA) == 0 )
          {
            v91 = v84;
            if ( (unsigned int)v84 >= v87 )
              goto LABEL_177;
            v18 = __ROL8__(1LL, v84);
            v92 = (unsigned __int8 *)&v130[34] + v84;
            do
            {
              if ( (v90 & v18) != 0 )
              {
                v93 = *v92;
                if ( (*v92 & 0x7F) < (char)v53 )
                {
                  v53 = v93;
                  v88 = v91;
                  LOBYTE(v53) = v93 & 0x7F;
                }
              }
              ++v91;
              v18 = __ROL8__(v18, 1);
              ++v92;
            }
            while ( v91 < v87 );
            if ( v88 >= 0 )
              goto LABEL_178;
            v81 = v120;
          }
        }
      }
LABEL_171:
      if ( (unsigned int)v84 < v87 )
      {
        v18 = __ROL8__(1LL, v84);
        do
        {
          if ( (v82 & v18) != 0 )
          {
            v94 = *v86;
            if ( (*v86 & 0x7F) < (char)v53 )
            {
              v53 = v94;
              v88 = v84;
              LOBYTE(v53) = v94 & 0x7F;
            }
          }
          LODWORD(v84) = v84 + 1;
          v18 = __ROL8__(v18, 1);
          ++v86;
        }
        while ( (unsigned int)v84 < v87 );
      }
LABEL_177:
      if ( v88 < 0 )
      {
LABEL_179:
        v80 = (unsigned __int64)v118;
        v120 = v81;
        goto LABEL_180;
      }
LABEL_178:
      v53 = 0x140000000uLL;
      v81 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v120 + 208) + v88]];
      goto LABEL_179;
    }
LABEL_180:
    v118 = *(_QWORD **)(v81 + 192);
    v95 = **(_BYTE **)(v81 + 56);
    v96 = HIDWORD(v113);
    v129 = v81;
    if ( SHIDWORD(v113) < v95 >> 7 )
      v96 = v95 >> 7;
    v115 = v81 ^ ((unsigned __int8)v81 ^ (unsigned __int8)v96) & 1;
    if ( v96 )
    {
      if ( v96 != 1 )
        goto LABEL_185;
      v97 = *(_BYTE **)(v81 + 34904);
      v98 = (unsigned __int8)*v97;
      v99 = (__int64 *)(v97 + 8);
      if ( !*v97 )
        goto LABEL_185;
    }
    else
    {
      v99 = &v129;
      v98 = 1;
    }
    v101 = v98;
    do
    {
      v102 = *v99;
      v103 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v102 + 48), 0LL) )
      {
        do
        {
          if ( (++v103 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v103);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v102 + 48) );
      }
      ++v99;
      --v101;
    }
    while ( v101 );
    v81 = v120;
LABEL_185:
    if ( ((**(_BYTE **)(v81 + 56) ^ v95) & 0x80u) != 0 )
    {
      KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v81, HIDWORD(v113), &v115);
      v81 = v120;
    }
    v100 = BYTE1(v113) ? v118[2] & v118[12] : 0LL;
    if ( a5 )
      break;
    if ( (v118[SHIDWORD(v113) + 2] & (v100 | v118[1]) & v80) == 0 )
    {
      v104 = v125;
      *(_DWORD *)(v125 + 8) = 0;
      goto LABEL_208;
    }
LABEL_205:
    KiReleasePrcbLocksForIsolationUnit(&v115);
    v7 = v116;
    v5 = v117;
    v6 = v119;
  }
  IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v115, v53, v18, v100);
  v104 = v125;
  *(_DWORD *)(v125 + 8) = IsIsolationUnitIdleByHandle;
LABEL_208:
  if ( (*(_BYTE *)(v81 + 35) & 8) != 0 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v115);
    KiSelectCandidateProcessor(v106, (_DWORD)v119, -1, HIDWORD(v113), (__int64)&v115);
    *(_DWORD *)(v104 + 8) = KiIsIsolationUnitIdleByHandle(&v115, v107, v108, v109) != 0;
  }
  *(_QWORD *)v104 = v115;
  result = 12LL;
  *(_DWORD *)(v104 + 12) = 0;
  return result;
}
