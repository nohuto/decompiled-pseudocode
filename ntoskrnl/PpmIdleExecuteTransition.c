__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int16 v9; // bp
  ULONG_PTR v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // r14
  bool v13; // r13
  char v14; // r8
  _BYTE *v15; // r15
  unsigned int v16; // edi
  unsigned __int16 *v17; // rbx
  __int64 v18; // rdx
  unsigned __int16 v19; // cx
  unsigned __int8 v20; // r11
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned int v25; // edi
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v31; // edi
  int v32; // r9d
  __int64 v33; // rdi
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // edi
  volatile unsigned __int8 v39; // r15
  unsigned __int16 v40; // r8
  __int16 v41; // bx
  int v42; // edi
  __int64 v43; // r15
  __int64 v44; // rdi
  __int64 InternalData; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  signed __int64 v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  _BYTE *v53; // rbx
  __int64 v54; // r8
  unsigned int v55; // ecx
  char v56; // di
  char v57; // r12
  char v58; // r13
  unsigned int v59; // ebx
  unsigned int v60; // r15d
  __int64 *v61; // rax
  __int64 v62; // r9
  __int64 i; // r10
  unsigned __int16 *v64; // rdi
  unsigned int v65; // r13d
  unsigned __int64 v66; // r12
  unsigned __int16 v67; // bx
  unsigned int v68; // ecx
  int v69; // esi
  __int64 result; // rax
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  signed __int64 v73; // rax
  __int64 v74; // r9
  char v75; // r12
  int v76; // ebx
  signed __int64 v77; // r15
  int v78; // r8d
  unsigned __int64 *v79; // r10
  __int64 v80; // rbx
  unsigned __int64 v81; // rdx
  int v82; // ecx
  signed __int64 v83; // r15
  __int64 v84; // rdi
  __int64 v85; // rbx
  unsigned __int8 v86; // r11
  int *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  struct _KPRCB *v90; // rbx
  __int64 Number; // rdx
  volatile unsigned __int8 DeepSleep; // al
  char v93; // al
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v95; // bl
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  KSPIN_LOCK *v98; // rcx
  KSPIN_LOCK *v99; // rcx
  int v100; // ecx
  signed __int16 v101; // tt
  int v102; // eax
  int v103; // eax
  int ExitSamplingCountdown; // eax
  __int64 v105; // r9
  __int64 v106; // r15
  unsigned int v107; // edi
  struct _KPRCB *CurrentPrcb; // rbx
  int v109; // edi
  struct _KPRCB *v110; // r8
  signed __int32 *v111; // rdx
  signed __int32 v112; // eax
  signed __int32 v113; // ett
  __int64 v114; // r15
  __int64 v115; // rdx
  __int64 v116; // rdx
  int v117; // ecx
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rax
  unsigned __int16 v121; // ax
  unsigned __int16 v122; // ax
  __int64 v123; // rdx
  __int64 v124; // rdx
  signed __int16 v125; // tt
  __int16 v126; // ax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r12
  signed __int64 v130; // rdx
  unsigned __int64 v131; // rbx
  __int64 v132; // rax
  unsigned __int64 v133; // r11
  signed __int64 v134; // rax
  int v135; // r8d
  __int64 v136; // r9
  __int64 v137; // r10
  __int64 v138; // rdx
  unsigned __int64 v139; // rbx
  __int64 v140; // rax
  unsigned __int64 v141; // r11
  signed __int64 v142; // rax
  int v143; // r8d
  __int64 v144; // r9
  __int64 v145; // r10
  __int64 v146; // rdx
  __int64 v147; // r8
  volatile signed __int32 *v148; // rcx
  bool v149; // r15
  __int64 v150; // rax
  ULONG_PTR v151; // rbx
  struct _KPRCB *v152; // r8
  signed __int32 *v153; // rdx
  signed __int32 v154; // eax
  signed __int32 v155; // ett
  unsigned __int8 v156; // al
  int v157; // eax
  int v158; // ecx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v160; // r8
  __int64 v161; // r9
  unsigned __int8 v162; // al
  struct _KPRCB *v163; // r10
  _DWORD *v164; // r9
  int v165; // eax
  bool v166; // zf
  unsigned int v167; // r9d
  __int64 v168; // r10
  __int64 v169; // rdx
  unsigned int v170; // eax
  __int64 v171; // rdx
  ULONG_PTR v172; // rax
  unsigned int v173; // edx
  __int64 v174; // rcx
  int v175; // r9d
  int v176; // ecx
  __int64 v177; // rdx
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  _BYTE *v180; // rcx
  unsigned __int64 v181; // rdx
  __int64 Prcb; // rdx
  unsigned __int32 v183; // eax
  unsigned __int32 v184; // r9d
  signed __int32 v185; // ecx
  signed __int32 v186[8]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int8 v187; // [rsp+40h] [rbp-408h]
  volatile unsigned __int8 v188; // [rsp+41h] [rbp-407h]
  char v189; // [rsp+42h] [rbp-406h]
  char v190; // [rsp+43h] [rbp-405h] BYREF
  char v191; // [rsp+44h] [rbp-404h]
  int v192; // [rsp+48h] [rbp-400h]
  unsigned __int8 v193; // [rsp+4Ch] [rbp-3FCh]
  char v194; // [rsp+4Dh] [rbp-3FBh]
  unsigned int v195; // [rsp+50h] [rbp-3F8h]
  signed __int64 v196; // [rsp+58h] [rbp-3F0h]
  int v197; // [rsp+60h] [rbp-3E8h]
  int v198; // [rsp+64h] [rbp-3E4h] BYREF
  unsigned int v199; // [rsp+68h] [rbp-3E0h]
  __int64 v200; // [rsp+70h] [rbp-3D8h]
  int v201; // [rsp+78h] [rbp-3D0h]
  int v202; // [rsp+7Ch] [rbp-3CCh] BYREF
  unsigned __int64 v203; // [rsp+80h] [rbp-3C8h]
  _BYTE *v204; // [rsp+90h] [rbp-3B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-3B0h]
  int v206; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 v207; // [rsp+A8h] [rbp-3A0h] BYREF
  unsigned __int64 v208; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE *v209; // [rsp+B8h] [rbp-390h]
  __int64 v210; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v211; // [rsp+C8h] [rbp-380h]
  __int64 v212; // [rsp+D0h] [rbp-378h]
  ULONG_PTR v213; // [rsp+D8h] [rbp-370h]
  PKSPIN_LOCK SpinLock; // [rsp+E0h] [rbp-368h]
  __int128 v215; // [rsp+E8h] [rbp-360h] BYREF
  _QWORD v216[2]; // [rsp+F8h] [rbp-350h] BYREF
  _QWORD v217[3]; // [rsp+108h] [rbp-340h] BYREF
  _OWORD v218[8]; // [rsp+120h] [rbp-328h] BYREF
  __int64 v219; // [rsp+1A0h] [rbp-2A8h]
  _QWORD v220[34]; // [rsp+1B0h] [rbp-298h] BYREF
  _DWORD v221[68]; // [rsp+2C0h] [rbp-188h] BYREF
  __int64 v222; // [rsp+3D0h] [rbp-78h] BYREF
  int v223; // [rsp+3D8h] [rbp-70h]
  int v224; // [rsp+3DCh] [rbp-6Ch]
  int v225; // [rsp+440h] [rbp-8h]

  v9 = 0;
  v213 = BugCheckParameter4;
  v10 = BugCheckParameter4;
  v198 = a3;
  v210 = 0LL;
  memset(v218, 0, sizeof(v218));
  v11 = a3;
  v219 = 0LL;
  v12 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v13 = 0;
  v14 = a8;
  v15 = (_BYTE *)(v12 + 344LL * (unsigned int)a2);
  v188 = 0;
  v16 = 0;
  v191 = 0;
  LOBYTE(v195) = 0;
  v190 = 0;
  v189 = 0;
  v208 = a4;
  v199 = a2;
  v207 = 0LL;
  v203 = 0LL;
  v201 = 0;
  LODWORD(v210) = 11;
  v202 = 130;
  v206 = -1;
  BugCheckParameter2 = (unsigned int)a2;
  v204 = v15;
  v194 = 0;
  LODWORD(v196) = 0;
  v211 = *(_QWORD *)(v12 + 688);
  if ( !a8 || *(_BYTE *)(v12 + 739) || v15[1453] )
  {
    v187 = 0;
    v193 = 3;
  }
  else
  {
    v187 = 1;
    v193 = 4;
  }
  v197 = 3;
  if ( *(_BYTE *)v12 )
  {
    v17 = (unsigned __int16 *)(v12 + 344);
  }
  else
  {
    if ( a8 )
    {
      LOBYTE(a2) = 1;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 33672, a2);
    }
    v17 = (unsigned __int16 *)(v12 + 344);
    *(_QWORD *)(v12 + 344) = 2097153LL;
    memset((void *)(v12 + 352), 0, 0x100uLL);
    LODWORD(v196) = PpmTestAndLockProcessors(v12 + 344, *(unsigned int *)(v12 + 748), *(_QWORD *)(v12 + 752));
    if ( (int)v196 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(v10 + 33672, 0LL);
      LOBYTE(v89) = 1;
      v197 = 1;
      ((void (__fastcall *)(__int64))off_140C01DB8[0])(v89);
      v55 = 1;
      goto LABEL_153;
    }
    v14 = a8;
  }
  v18 = *v17;
  v19 = 0;
  if ( (_WORD)v18 )
  {
    while ( !*(_QWORD *)&v17[4 * v19 + 4] )
    {
      if ( ++v19 >= (unsigned __int16)v18 )
        goto LABEL_8;
    }
    *(_WORD *)(v12 + 56) |= 0x20u;
  }
LABEL_8:
  v20 = v187;
  v21 = v199;
  *(_BYTE *)(v10 + 33656) = v187;
  *(_DWORD *)(v10 + 33660) = v21;
  if ( v14 )
  {
    LOBYTE(v18) = 2;
    *(_BYTE *)(v10 + 33657) = v15[1450] == 0;
    PpmIdleSetSynchronizationState(v10 + 33672, v18);
  }
  v22 = *(_QWORD *)(v12 + 8);
  if ( v22 != -1 )
  {
    v23 = v22 + a7;
    v190 = 1;
    v207 = v22 + a7;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      KiSetClockTimer(v10, v23, 0, 5, 0, *(_BYTE *)(v12 + 740) == 0);
      v20 = v187;
    }
    else
    {
      *(_QWORD *)(v10 + 33648) = v23;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
        *(unsigned __int8 *)(v10 + 209));
    }
  }
  v209 = v15 + 1449;
  v212 = 2LL;
  if ( v15[1449] || a9 && !KiClockTimerPerCpuTickScheduling )
    goto LABEL_14;
  v71 = *(_QWORD *)(v10 + 200);
  v72 = *(_QWORD *)(v10 + 192);
  v191 = 1;
  _m_prefetchw((const void *)(v72 + 64));
  v73 = _InterlockedOr64((volatile signed __int64 *)(v72 + 64), v71);
  v74 = *(_QWORD *)(v10 + 33600);
  v75 = 0;
  v196 = v73;
  v76 = 0;
  v201 = 0;
  v77 = v73;
  v200 = v74;
  if ( v20 )
  {
    v76 = 1;
  }
  else
  {
    if ( v198 != -1 )
      goto LABEL_172;
    v78 = 0;
    if ( *(_WORD *)(v74 + 344) )
    {
      v79 = (unsigned __int64 *)(v74 + 352);
      v80 = *(unsigned __int16 *)(v74 + 344);
      do
      {
        v81 = *v79++;
        v78 += (unsigned int)((0x101010101010101LL
                             * ((((v81 - ((v81 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v81 - ((v81 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v81 - ((v81 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v81 - ((v81 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v80;
      }
      while ( v80 );
      v10 = v213;
      v74 = v200;
      v75 = 0;
      v77 = v196;
    }
    if ( v78 != (_DWORD)KeNumberProcessors_0 - 1 )
      goto LABEL_95;
    v20 = v187;
    v76 = 2;
  }
  v201 = v76;
LABEL_172:
  v102 = *(_DWORD *)(v74 + 20);
  v75 = 0;
  if ( v102 && (v103 = v102 - 1, (*(_DWORD *)(v74 + 20) = v103) != 0)
    || (ExitSamplingCountdown = PpmGetExitSamplingCountdown(), (*(_DWORD *)(v105 + 20) = ExitSamplingCountdown) == 0) )
  {
    v201 = v76;
    if ( v20 )
      goto LABEL_96;
    goto LABEL_95;
  }
  v75 = 1;
  *(_BYTE *)(v105 + 3) = 1;
  if ( !v20 )
  {
LABEL_95:
    v16 = 1;
    goto LABEL_96;
  }
  *(_QWORD *)(v105 + 64) = -1LL;
LABEL_96:
  v82 = ((__int64 (__fastcall *)(_QWORD))off_140C01B50[0])(v16);
  LODWORD(v196) = v82;
  if ( *(_DWORD *)(v10 + 13144) )
  {
    LODWORD(v196) = -2147483631;
    goto LABEL_150;
  }
  if ( v82 < 0 )
  {
LABEL_150:
    if ( a8 )
      PpmIdleSetSynchronizationState(v10 + 33672, 0LL);
    v197 = 0;
    v200 = 0x8000LL;
    goto LABEL_113;
  }
  if ( *(_BYTE *)v12 != 1 )
    goto LABEL_100;
  v83 = *(_QWORD *)(v10 + 200) | v77;
  v84 = *(unsigned __int8 *)(v10 + 208);
  memset(v220, 0, 0x108uLL);
  v85 = PpmPlatformStates;
  if ( !PpmPlatformStates )
    goto LABEL_100;
  LODWORD(v220[0]) = 2097153;
  memset((char *)v220 + 4, 0, 0x104uLL);
  if ( (_WORD)v84 )
  {
    if ( WORD1(v220[0]) <= (unsigned __int16)v84 )
      goto LABEL_181;
    LOWORD(v220[0]) = v84 + 1;
  }
  v220[v84 + 1] |= v83;
LABEL_181:
  v106 = *(_QWORD *)(v12 + 1048);
  v107 = 0;
  if ( *(_DWORD *)(v106 + 4) )
  {
    while ( *(_DWORD *)(v106 + 4LL * v107 + 8) != -1
         || !(unsigned int)KeIsSubsetAffinityEx(
                             v85 + 448LL * *(unsigned int *)(*(_QWORD *)(v12 + 1080) + 24LL * v107 + 4) + 128,
                             v220) )
    {
      if ( ++v107 >= *(_DWORD *)(v106 + 4) )
        goto LABEL_100;
    }
    LODWORD(v196) = -1073741802;
    goto LABEL_150;
  }
LABEL_100:
  if ( v75 )
    *(_WORD *)(v12 + 56) |= 0x200u;
  v86 = v187;
  if ( v187 )
  {
    v194 = 1;
    _InterlockedIncrement(&PpmNonInterruptibleCount);
    CurrentPrcb = KeGetCurrentPrcb();
    v109 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_140C01C98[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
      v86 = v187;
      CurrentPrcb->ClockTimerState.ClockActive = 0;
    }
    if ( CurrentPrcb->Number == v109 )
      ++dword_140C417C8;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v207 = -1LL;
  if ( *(_BYTE *)(v12 + 740) )
  {
    LOBYTE(v100) = v195;
    if ( v75 )
    {
      v100 = (unsigned __int8)v195;
      if ( !v86 )
        v100 = 1;
      v195 = v100;
    }
    if ( a5 && v198 != -1 && PpmDripsStateIndex != -1 )
      v13 = *(_BYTE *)v12 == 1;
    KePrepareClockTimerForIdle(a5, v13, *(_QWORD *)(v12 + 720), (unsigned __int8)v100, (__int64)&v210, (__int64)&v207);
  }
  else if ( (_DWORD)KiClockTimerOwner != *(_DWORD *)(v10 + 36) )
  {
    if ( !KiClockTimerPerCpuTickScheduling )
    {
      v15 = v204;
      v11 = v198;
      goto LABEL_14;
    }
    KePrepareNonClockOwnerForIdle(&v207);
    LODWORD(v210) = 10;
  }
  v15 = v204;
  v11 = v198;
  if ( KiClockTimerPerCpuTickScheduling )
    *(_QWORD *)(v10 + 33648) = v207;
LABEL_14:
  v24 = *(_QWORD *)(v10 + 34040);
  SpinLock = (PKSPIN_LOCK)v24;
  if ( v24 )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v95 = (v225 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)v24);
    v96 = *(_QWORD *)(v24 + 16);
    v97 = *(unsigned int *)(v24 + 12);
    if ( a6 > v96 )
    {
      *(_QWORD *)(v24 + 16) = a6;
      *(_QWORD *)(v24 + 24) += a6 - v96;
      *(_QWORD *)(v24 + 8 * v97 + 328) += a6 - v96;
    }
    *(_DWORD *)(v24 + 12) = v97 - 1;
    KxReleaseSpinLock(v24);
    if ( v95 )
    {
      v110 = KeGetCurrentPrcb();
      v111 = (signed __int32 *)v110->SchedulerAssist;
      if ( v111 )
      {
        _m_prefetchw(v111);
        v112 = *v111;
        do
        {
          v113 = v112;
          v112 = _InterlockedCompareExchange(v111, v112 & 0xFFDFFFFF, v112);
        }
        while ( v113 != v112 );
        if ( (v112 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v110);
      }
      _enable();
    }
    v98 = *(KSPIN_LOCK **)(v10 + 34048);
    if ( v98 )
      PpmIdleUpdateConcurrency(v98);
  }
  v25 = v199;
  *(_DWORD *)(v12 + 28) = v199;
  v26 = __rdtsc();
  if ( (*(_QWORD *)(v10 + 35232) & 0x8000000000LL) != 0 )
    v27 = __readmsr(0xDB2u);
  else
    v27 = 0LL;
  v28 = a6 - *(_QWORD *)(v10 + 33720);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 33736), v28);
  if ( (*(_QWORD *)(v10 + 35232) & 0x8000000000LL) != 0 )
    *(_QWORD *)(v10 + 33808) += PpmConvertTime(v28, v26 - *(_QWORD *)(v10 + 33688), v27 - *(_QWORD *)(v10 + 33800));
  v29 = *(_QWORD *)(v10 + 33688);
  *(_QWORD *)(v10 + 33720) = a6;
  if ( v26 > v29 )
    *(_QWORD *)(v10 + 33696) += v26 - v29;
  *(_QWORD *)(v10 + 33688) = v26;
  if ( (*(_QWORD *)(v10 + 35232) & 0x8000000000LL) != 0 )
    *(_QWORD *)(v10 + 33800) = v27;
  LOBYTE(v28) = 1;
  PpmUpdatePerformanceFeedback(v10, 0, 0, v28, 0LL);
  if ( PopSnapEnergyCounters )
    PopSnapEnergyCounters(*(unsigned int *)(v10 + 36), 0LL, 0LL);
  *(_QWORD *)(v10 + 33640) = a6;
  _InterlockedIncrement64((volatile signed __int64 *)(v10 + 33632));
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v12 + 616);
  if ( v30 )
  {
    v31 = v30(v211, v25, v11, *(unsigned int *)(v12 + 1092), *(_QWORD *)(v12 + 1104));
    LODWORD(v196) = v31;
  }
  else
  {
    v31 = v196;
  }
  if ( v11 != -1 && v11 == PpmDripsStateIndex && *(int *)(v10 + 33824) >= 2 )
    HvlSetPlatformIdleState(1LL);
  v32 = 0x8000;
  v200 = 0x8000LL;
  if ( v31 >= 0 )
  {
    v33 = *(_QWORD *)(v12 + 1104);
    v34 = *(_DWORD *)(v12 + 1092);
    v189 = 1;
    if ( v11 != -1 )
    {
      v114 = PpmPlatformStates + 448LL * v11;
      PpmEventEnterPlatformIdleState(v11);
      if ( !qword_140CF79C0 && v11 == dword_140CF7A00 )
        _InterlockedCompareExchange64(&qword_140CF79C0, MEMORY[0xFFFFF78000000008], 0LL);
      if ( a5 )
      {
        *(_BYTE *)(PpmPlatformStates + 56) = 1;
        ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
      }
      if ( *(_BYTE *)(v114 + 120) )
      {
        LOBYTE(v115) = 1;
        KdPowerTransitionEx(2147483652LL, v115);
        KdCallPowerHandlers(4LL);
      }
      v32 = v200;
      v15 = v204;
    }
    if ( v34 )
    {
      if ( (v32 & DWORD2(PerfGlobalGroupMask)) != 0 )
      {
        v222 = v33;
        v223 = 4 * v34;
        v224 = 0;
        EtwTraceKernelEvent((unsigned int)&v222, 1, 1073774592, 4671, 1538);
        v32 = v200;
      }
      do
      {
        v116 = PpmPlatformStates + 448LL * *(unsigned int *)(v33 + 4LL * (unsigned int)--v34);
        *(_QWORD *)(v116 + 424) = a6;
        v117 = *(_DWORD *)(v116 + 416);
        if ( !*(_DWORD *)(PpmPlatformStates + 4) )
          v117 ^= ((unsigned __int16)v117 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
        *(_DWORD *)(v116 + 416) = v117 & 0xF8FFFFFF | 0x4000000;
      }
      while ( v34 );
    }
    if ( v11 != -1 )
      *(_WORD *)(v12 + 56) |= 0x10u;
    v35 = *(_QWORD *)(v12 + 712);
    v36 = *(unsigned __int8 *)(v12 + 741);
    v37 = *(unsigned __int16 *)(v12 + 56);
    v38 = v199;
    v215 = 0LL;
    if ( (v32 & DWORD2(PerfGlobalGroupMask)) != 0 )
    {
      WORD2(v215) = v37;
      WORD3(v215) = (unsigned __int8)v36;
      *((_QWORD *)&v215 + 1) = v35;
      v216[0] = &v215;
      LODWORD(v215) = v199;
      v216[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v216, 1, 1073774592, 4665, 1538);
    }
    if ( a8 )
      PpmIdleSetSynchronizationState(v10 + 33672, v193);
    if ( v191 )
    {
      if ( v15[1448] < 2u )
      {
        v39 = 0;
        v188 = 0;
      }
      else
      {
        v188 = 0;
        if ( (HvlEnlightenments & 4) == 0 && !(unsigned __int8)HviIsXboxNanovisorPresent(v35, v36, v37) )
        {
          v90 = KeGetCurrentPrcb();
          if ( v90->CpuVendor == 1 )
          {
            DeepSleep = 0;
          }
          else
          {
            Number = v90->Number;
            v90->DeepSleep = 1;
            KeInterlockedSetProcessorAffinityEx(&KeSleepingProcessors, Number);
            if ( !v90->DeepSleep )
            {
              KeInterlockedClearProcessorAffinityEx(&KeSleepingProcessors, v90->Number);
              if ( KiFlushPcid )
              {
                v118 = __readcr3();
                __writecr3(v118);
                if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  KiSetUserTbFlushPending();
              }
              else
              {
                v119 = __readcr4();
                if ( (v119 & 0x20080) != 0 )
                {
                  __writecr4(v119 ^ 0x80);
                  __writecr4(v119);
                }
                else
                {
                  v120 = __readcr3();
                  __writecr3(v120);
                }
              }
            }
            DeepSleep = v90->DeepSleep;
          }
          v188 = DeepSleep;
        }
        v39 = v188;
      }
    }
    else
    {
      v39 = 0;
    }
    if ( (*(_BYTE *)(v10 + 1762) & 1) != 0 && (v121 = *(_WORD *)(v10 + 1764)) != 0 )
    {
      *(_WORD *)(v10 + 1760) |= 1u;
      v40 = v121;
    }
    else
    {
      v40 = 0;
    }
    _m_prefetchw((const void *)(v10 + 1772));
    v41 = *(_WORD *)(v10 + 1772) & 4;
    if ( v41 )
    {
      if ( (*(_BYTE *)(v10 + 1760) & 1) != 0 )
      {
        v122 = *(_WORD *)(v10 + 1764);
        if ( (v122 & 3) == 0 )
        {
          v40 |= 2u;
          *(_WORD *)(v10 + 1764) = v122 | 2;
          __writemsr(0x48u, v122 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(v10 + 1772), 2u);
      v123 = *(_QWORD *)(v10 + 11696);
      _m_prefetchw((const void *)(v123 + 1772));
      do
        v101 = *(_WORD *)(v123 + 1772);
      while ( v101 != _InterlockedCompareExchange16((volatile signed __int16 *)(v123 + 1772), v101 & 0xFFE4 | 0xA, v101) );
    }
    LODWORD(v196) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(v12 + 624))(
                      v211,
                      v208,
                      v38,
                      v11,
                      v40,
                      *(_DWORD *)(v12 + 1092),
                      *(_QWORD *)(v12 + 1104));
    v42 = v196;
    if ( v41 )
    {
      v124 = *(_QWORD *)(v10 + 11696);
      _m_prefetchw((const void *)(v124 + 1772));
      do
        v125 = *(_WORD *)(v124 + 1772);
      while ( v125 != _InterlockedCompareExchange16((volatile signed __int16 *)(v124 + 1772), v125 & 0xFFF5 | 2, v125) );
      if ( (*(_WORD *)(v10 + 1772) & 0x10) == 0 )
      {
        v126 = *(_WORD *)(v10 + 1764);
        if ( (v126 & 2) != 0 )
        {
          *(_WORD *)(v10 + 1764) = v126 & 0xFFFD;
          __writemsr(0x48u, v126 & 0xFFFD);
        }
      }
    }
    *(_WORD *)(v10 + 1760) &= ~1u;
    if ( v39 )
    {
      v93 = *(_BYTE *)(v10 + 33114);
      v188 = 0;
      if ( v93 )
        KeWakeProcessor();
    }
    if ( *(int *)(v12 + 72) < 0 )
    {
      if ( v42 >= 0 )
        v42 = *(_DWORD *)(v12 + 72);
      LODWORD(v196) = v42;
    }
    v208 = 0LL;
    if ( ((unsigned int)v200 & DWORD2(PerfGlobalGroupMask)) != 0 )
    {
      v208 = __PAIR64__(v42, v199);
      v217[0] = &v208;
      v217[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v217, 1, 1073774592, 4666, 1538);
    }
  }
  v43 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v44 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
      v46 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(InternalData);
      v47 = *(_QWORD *)(v43 + 208);
      v48 = v46;
    }
    else
    {
      do
      {
        v47 = *(_QWORD *)(v43 + 208);
        do
        {
          v139 = *(_QWORD *)(v43 + 200);
          v140 = HalpTimerGetInternalData(v43);
          v141 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v140);
          _InterlockedOr(v186, 0);
          v142 = *(_QWORD *)(v43 + 200);
        }
        while ( v139 != v142 );
      }
      while ( v47 != *(_QWORD *)(v43 + 208) );
      v143 = *(_DWORD *)(v43 + 220);
      if ( ((v139 ^ v141) & (1LL << ((unsigned __int8)v143 - 1))) != 0 )
      {
        if ( v143 == 64 )
          v144 = -1LL;
        else
          v144 = (1LL << v143) - 1;
        v145 = 0LL;
        if ( v143 != 64 )
          v145 = 1LL << v143;
        v48 = v141 | v139 ^ v144 & v139;
        if ( v141 < (v144 & v139) )
          v48 += v145;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v48, v142);
      }
      else
      {
        if ( v143 == 64 )
          v146 = -1LL;
        else
          v146 = (1LL << v143) - 1;
        v48 = v141 | v139 & ~v146;
      }
    }
    v49 = v47 + v48;
    goto LABEL_51;
  }
  v44 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    v88 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v49 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v43 + 112))(v88)
          * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
        + MEMORY[0xFFFFF780000003B8];
LABEL_51:
    v203 = v49;
    goto LABEL_52;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    v127 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v128 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v127);
    v129 = *(_QWORD *)(v43 + 208);
    v130 = v128;
  }
  else
  {
    do
    {
      v129 = *(_QWORD *)(v43 + 208);
      do
      {
        v131 = *(_QWORD *)(v43 + 200);
        v132 = HalpTimerGetInternalData(v43);
        v133 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v132);
        _InterlockedOr(v186, 0);
        v134 = *(_QWORD *)(v43 + 200);
      }
      while ( v131 != v134 );
    }
    while ( v129 != *(_QWORD *)(v43 + 208) );
    v135 = *(_DWORD *)(v43 + 220);
    if ( ((v131 ^ v133) & (1LL << ((unsigned __int8)v135 - 1))) != 0 )
    {
      if ( v135 == 64 )
        v136 = -1LL;
      else
        v136 = (1LL << v135) - 1;
      v137 = 0LL;
      if ( v135 != 64 )
        v137 = 1LL << v135;
      v130 = v133 | v131 ^ v136 & v131;
      if ( v133 < (v136 & v131) )
        v130 += v137;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v130, v134);
    }
    else
    {
      if ( v135 == 64 )
        v138 = -1LL;
      else
        v138 = (1LL << v135) - 1;
      v130 = v133 | v131 & ~v138;
    }
  }
  v49 = HalpTimerScaleCounter(v129 + v130, *(_QWORD *)(v43 + 192), 10000000LL);
  v203 = v49;
LABEL_52:
  if ( v43 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v147 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v147 = 10000000LL;
    v49 = HalpTimerScaleCounter(v49, v44, v147);
    v203 = v49;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v10 + 33632));
  *(_QWORD *)(v10 + 33640) = 0LL;
  if ( *(_BYTE *)(v10 + 33817) )
  {
    _disable();
    v148 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v148 )
      _InterlockedOr(v148, 0x200000u);
    v149 = (v225 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 33680));
    v150 = 2LL;
    v151 = v10 + 33704;
    do
    {
      if ( *(_QWORD *)v151 && *(_BYTE *)(*(_QWORD *)v151 + 34LL) )
      {
        PpmPerfFeedbackCounterUpdate();
        v150 = v212;
      }
      v151 += 8LL;
      v212 = --v150;
    }
    while ( v150 );
    KxReleaseSpinLock(v10 + 33680);
    if ( v149 )
    {
      v152 = KeGetCurrentPrcb();
      v153 = (signed __int32 *)v152->SchedulerAssist;
      if ( v153 )
      {
        _m_prefetchw(v153);
        v154 = *v153;
        do
        {
          v155 = v154;
          v154 = _InterlockedCompareExchange(v153, v154 & 0xFFDFFFFF, v154);
        }
        while ( v155 != v154 );
        if ( (v154 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v152);
      }
      _enable();
    }
    v49 = v203;
  }
  v50 = __rdtsc();
  if ( _bittest64((const signed __int64 *)(v10 + 35232), 0x27u) )
    v51 = __readmsr(0xDB2u);
  else
    v51 = 0LL;
  *(_QWORD *)(v10 + 33720) = v49;
  *(_QWORD *)(v10 + 33688) = v50;
  if ( _bittest64((const signed __int64 *)(v10 + 35232), 0x27u) )
    *(_QWORD *)(v10 + 33800) = v51;
  if ( SpinLock )
  {
    PpmIdleUpdateConcurrency(SpinLock);
    v99 = *(KSPIN_LOCK **)(v10 + 34048);
    if ( v99 )
      PpmIdleUpdateConcurrency(v99);
  }
  *(_QWORD *)(v10 + 33616) = v49 - a6;
  if ( a8 )
  {
    v156 = PpmIdleSetSynchronizationState(v10 + 33672, 0LL);
    v52 = (unsigned int)v196;
    if ( (int)v196 >= 0 && v156 != 8 && v187 )
      KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v156, v10);
    *(_BYTE *)(v10 + 33657) = 0;
  }
  else
  {
    v52 = (unsigned int)v196;
  }
  if ( v191 )
  {
    if ( v189
      && (int)v52 >= 0
      && PpmPlatformStates
      && PpmDripsStateIndex != -1
      && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
    {
      v157 = KeQueryWakeSource(&v210, &v202, v218);
      v158 = v202;
      if ( v157 < 0 )
        v158 = 3;
      v202 = v158;
    }
LABEL_113:
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 64LL),
      *(unsigned __int8 *)(v10 + 209));
    if ( v188 && *(_BYTE *)(v10 + 33114) )
      KeWakeProcessor();
    if ( (_BYTE)v195 && (int)v196 >= 0 )
      v87 = &v206;
    else
      v87 = 0LL;
    KeResumeClockTimerFromIdle(v87);
    off_140C01B60();
    KeAccumulateTicks(v10, *(_DWORD *)(v10 + 13248), MEMORY[0xFFFFF78000000320], 0, 0, 3);
  }
  LOBYTE(v52) = 1;
  v53 = v209;
  ((void (__fastcall *)(__int64))off_140C01DB8[0])(v52);
  if ( v190 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( *v53 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v160 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v161) = v200;
          else
            v161 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          v160[5] |= v161;
        }
        KiCancelClockTimer(v10, 5LL);
        if ( KiIrqlFlags )
        {
          v162 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v162 <= 0xFu && CurrentIrql <= 0xFu && v162 >= 2u )
          {
            v163 = KeGetCurrentPrcb();
            v164 = v163->SchedulerAssist;
            v165 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v166 = (v165 & v164[5]) == 0;
            v54 = (unsigned int)v165 & v164[5];
            v164[5] = v54;
            if ( v166 )
              KiRemoveSystemWorkPriorityKick(v163);
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        KiCancelClockTimer(v10, 5LL);
      }
    }
    else
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
        *(unsigned __int8 *)(v10 + 209));
    }
    *(_QWORD *)(v10 + 33648) = -1LL;
  }
  v55 = v197;
  if ( v197 == 3 )
  {
    v56 = 0;
    v57 = 0;
    v58 = 0;
    LOBYTE(v54) = 0;
    goto LABEL_68;
  }
LABEL_153:
  v56 = 1;
  v57 = 1;
  v58 = 1;
  v54 = 1LL;
LABEL_68:
  v59 = 0;
  v190 = 0;
  v60 = -1;
  v198 = -1;
  if ( PpmPlatformStates )
  {
    if ( !v189 )
    {
      v167 = 0;
      if ( *(_DWORD *)(v12 + 1092) )
      {
        do
        {
          v168 = *(unsigned int *)(*(_QWORD *)(v12 + 1104) + 4LL * v167);
          v169 = PpmPlatformStates + 448 * v168;
          if ( (*(_DWORD *)(v169 + 416) & 0x3000000) == 0x1000000 )
            *(_DWORD *)(v169 + 416) = *(_DWORD *)(v169 + 416) & 0xFE000FFF | ((*(_DWORD *)(v169 + 416) & 0xFFF | 0x2000) << 12);
          if ( (_BYTE)v54 )
            ++*(_DWORD *)(1016 * v168 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
          ++v167;
        }
        while ( v167 < *(_DWORD *)(v12 + 1092) );
        v55 = v197;
      }
    }
    v170 = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v171 = *(unsigned int *)(v10 + 36);
        v172 = v170 - 1;
        v195 = v172;
        BugCheckParameter2 = v172;
        LOBYTE(v192) = 0;
        v200 = 448 * v172 + PpmPlatformStates + 64;
        if ( (unsigned int)KeCheckProcessorAffinityEx(v200 + 64, v171)
          && (unsigned __int8)PpmExitCoordinatedIdleState(v200 + 352, &v190) )
        {
          v173 = v195;
          v54 = v200;
          v174 = v59++;
          *(_DWORD *)(*(_QWORD *)(v12 + 1104) + 4 * v174) = v195;
          if ( v59 == 1 && *(_BYTE *)(v54 + 57) )
          {
            v60 = v173;
            LOBYTE(v175) = v192;
            if ( v189 )
            {
              v176 = v196;
              if ( (int)v196 >= 0 && !v58 && v173 == PpmDripsStateIndex )
              {
                v175 = (unsigned __int8)v192;
                if ( v202 != 130 )
                  v175 = 1;
                v192 = v175;
              }
              if ( *(_BYTE *)(v54 + 56) )
              {
                KdCallPowerHandlers(1LL);
                LOBYTE(v177) = 1;
                KdPowerTransitionEx(2147483649LL, v177);
                v54 = v200;
                v173 = v60;
                LOBYTE(v175) = v192;
                v176 = v196;
              }
              if ( (PopSimulate & 0x100) != 0 && v176 >= 0 && !v57 && a5 && v173 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x599uLL, BugCheckParameter2, 0LL, 0LL);
            }
            *(_BYTE *)(PpmPlatformStates + 56) = 0;
          }
          else
          {
            LOBYTE(v175) = v192;
          }
          if ( !v56 )
          {
            v178 = 1016LL * v173 + *(_QWORD *)(PpmPlatformStates + 48) + 24LL;
            v179 = *(_QWORD *)(v54 + 360);
            v54 = v203;
            BugCheckParameter2 = v178;
            if ( v203 >= v179 )
            {
              v180 = (_BYTE *)(v203 - v179);
              *(_QWORD *)(v178 + 32) += v203 - v179;
            }
            else
            {
              v180 = 0LL;
            }
            v209 = v180;
            if ( (_BYTE)v175 )
            {
              PopIdleWakeNotifyWakeSource(v60, v202, (unsigned int)v218, v179, v54, (__int64)&v198);
              v178 = BugCheckParameter2;
              v180 = v209;
            }
            if ( (int)v196 < 0 && v190 )
            {
              ++*(_DWORD *)(v178 + 4);
            }
            else
            {
              ++*(_DWORD *)(v178 + 8);
              PpmUpdatePlatformIdleAccounting(v178, v180);
            }
          }
        }
        v170 = v195;
      }
      while ( v195 );
      v55 = v197;
    }
    if ( v189 )
    {
      PpmEventCoordinatedIdleTransition(0LL, v59, *(_QWORD *)(v12 + 1104), &v198);
      v55 = v197;
    }
  }
  *(_DWORD *)(v12 + 1092) = v59;
  if ( v55 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v12 + 656))(
      v211,
      v199,
      v60,
      v59,
      *(_QWORD *)(v12 + 1104));
    v61 = (__int64 *)(v12 + 1104);
    if ( v60 == -1 )
      goto LABEL_71;
    v61 = (__int64 *)(v12 + 1104);
    if ( v60 != PpmDripsStateIndex )
      goto LABEL_71;
    v61 = (__int64 *)(v12 + 1104);
    if ( *(int *)(v10 + 33824) < 2 )
      goto LABEL_71;
    HvlSetPlatformIdleState(0LL);
  }
  else if ( !*(_BYTE *)v12 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v12 + 664))(v211, v55, v54);
  }
  v61 = (__int64 *)(v12 + 1104);
LABEL_71:
  LODWORD(v62) = *(_DWORD *)(v12 + 1092);
  for ( i = *v61; (_DWORD)v62; *(_DWORD *)(448LL * *(unsigned int *)(i + 4 * v62) + PpmPlatformStates + 416) = 0 )
    v62 = (unsigned int)(v62 - 1);
  if ( v194 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v64 = (unsigned __int16 *)(v12 + 344);
  v221[0] = 2097153;
  memset(&v221[1], 0, 0x104uLL);
  v65 = KeGetPcr()->Prcb.Number;
  v66 = *(_QWORD *)(v12 + 352);
  v67 = 0;
  while ( 1 )
  {
    LODWORD(v204) = 0;
    v68 = v12 == -344 ? v67 + 1 : *v64;
    if ( !v66 )
      break;
LABEL_379:
    _BitScanForward64(&v181, v66);
    v66 &= ~(1LL << v181);
    LODWORD(v204) = v181;
    v195 = KiProcessorNumberToIndexMappingTable[64 * v67 + (unsigned __int8)v181];
    Prcb = KeGetPrcb(v195);
    BugCheckParameter2 = *(_QWORD *)(Prcb + 33600);
    _m_prefetchw((const void *)(Prcb + 33672));
    v183 = *(_DWORD *)(Prcb + 33672);
    do
    {
      v184 = v183;
      v185 = v183 ^ (v183 ^ (v183 - 1)) & 0xFFFFFF;
      if ( (v185 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v183) == 5 )
        {
          v185 = v185 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v183) == 7 )
        {
          v185 = v185 & 0xFFFFFF | 0x6000000;
        }
      }
      v183 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 33672), v185, v183);
    }
    while ( v183 != v184 );
    if ( HIBYTE(v185) == 6 )
      KeAddProcessorAffinityEx(v221, v195);
    KeInterlockedClearProcessorAffinityEx(BugCheckParameter2 + 80, v65);
    KeRemoveProcessorAffinityEx(v12 + 344, v195);
  }
  while ( ++v67 < v68 )
  {
    v66 = *(_QWORD *)&v64[4 * v67 + 4];
    if ( v66 )
      goto LABEL_379;
  }
  v69 = v213;
  if ( LOWORD(v221[0]) )
  {
    while ( !*(_QWORD *)&v221[2 * v9 + 2] )
    {
      if ( ++v9 >= LOWORD(v221[0]) )
        goto LABEL_82;
    }
    HalRequestIpi(0LL, v221);
  }
LABEL_82:
  if ( *(_BYTE *)(v12 + 3) )
    PpmIdleCompleteExitLatencyTrace(v69, v196, v187, v203, v206, v201, v199, v60);
  *(_DWORD *)(v12 + 76) = v197;
  result = (unsigned int)v196;
  *(_DWORD *)(v12 + 72) = v196;
  return result;
}
