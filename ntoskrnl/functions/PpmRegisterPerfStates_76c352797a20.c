__int64 __fastcall PpmRegisterPerfStates(__int64 a1, char a2)
{
  __int64 v4; // r13
  unsigned int v5; // r14d
  char *v6; // rdi
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r9d
  __int64 *v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  _DWORD *v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  unsigned int v22; // eax
  bool v23; // zf
  __int64 Pool2; // rax
  char *v25; // r15
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // eax
  unsigned int v33; // r14d
  int v34; // r14d
  __int64 v35; // r11
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // r11
  ULONG v39; // edx
  char v40; // al
  __int64 *v41; // r10
  __int64 v42; // r12
  int v43; // r11d
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  char v49; // cl
  LARGE_INTEGER PerformanceCounter; // rax
  int v51; // edx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  char v54; // al
  unsigned int v55; // r15d
  int v56; // r12d
  char *v57; // rdx
  _DWORD *v58; // r14
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 *v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  _QWORD *v66; // rax
  char v67; // r8
  __int64 v68; // rdx
  char v69; // al
  __int64 v70; // rcx
  char v71; // dl
  __int64 v72; // rcx
  char v73; // bl
  __int64 v75; // rcx
  unsigned int v76; // ecx
  _DWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int128 *v80; // rax
  PVOID *v81; // rbx
  __int64 v82; // rsi
  void *v83; // rcx
  void *v84; // rcx
  void *v85; // rcx
  signed __int32 v86[8]; // [rsp+8h] [rbp-100h] BYREF
  int v87; // [rsp+28h] [rbp-E0h]
  unsigned int v88; // [rsp+2Ch] [rbp-DCh]
  ULONG v89; // [rsp+30h] [rbp-D8h]
  unsigned int v90; // [rsp+34h] [rbp-D4h]
  __int64 v91; // [rsp+38h] [rbp-D0h]
  __int64 v92; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v93; // [rsp+48h] [rbp-C0h]
  int v94; // [rsp+4Ch] [rbp-BCh]
  __int64 v95; // [rsp+50h] [rbp-B8h]
  char *v96; // [rsp+58h] [rbp-B0h]
  __int64 v97; // [rsp+60h] [rbp-A8h]
  _QWORD v98[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v99; // [rsp+78h] [rbp-90h] BYREF
  __int64 v100; // [rsp+88h] [rbp-80h]
  __int128 v101; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v102[68]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v103[68]; // [rsp+1B8h] [rbp+B0h] BYREF

  memset(&v103[2], 0, 0x100uLL);
  v101 = 0LL;
  memset(&v102[2], 0, 0x100uLL);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = 0LL;
  v96 = 0LL;
  LOBYTE(v87) = 0;
  v94 = *(_DWORD *)(a1 + 20);
  v102[0] = 2097153;
  v99 = 0LL;
  memset(&v102[1], 0, 0x104uLL);
  v103[0] = 2097153;
  memset(&v103[1], 0, 0x104uLL);
  KeQueryActiveProcessorAffinity2((__int64)v103);
  v88 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = -1;
  v92 = -1LL;
  v10 = 0;
  if ( v5 )
  {
    v11 = *(_QWORD *)(a1 + 544);
    do
    {
      v12 = *(unsigned int *)(v11 + 24LL * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_125;
      if ( *((_DWORD *)&v92 + v12) == -1 )
        *((_DWORD *)&v92 + v12) = v10;
      ++v10;
    }
    while ( v10 < v5 );
    v9 = v92;
  }
  if ( HIDWORD(v92) == -1 && v9 == -1 )
  {
LABEL_125:
    v34 = -1073741811;
    goto LABEL_136;
  }
  v13 = 0;
  v14 = &v92;
  v15 = 2LL;
  do
  {
    v23 = *(_DWORD *)v14 == -1;
    v16 = v13 + 1;
    v14 = (__int64 *)((char *)v14 + 4);
    if ( v23 )
      v16 = v13;
    v13 = v16;
    --v15;
  }
  while ( v15 );
  LODWORD(v91) = v16;
  if ( (_DWORD)v4 )
  {
    v17 = v4;
    v18 = (_DWORD *)(*(_QWORD *)(a1 + 552) + 28LL);
    do
    {
      v19 = v8 + 1;
      if ( *v18 != 1 )
        v19 = v8;
      v18 += 8;
      v8 = v19;
      --v17;
    }
    while ( v17 );
    v13 = v91;
    v88 = v19;
  }
  v20 = (144 * v4 + 1071) & 0xFFFFFFF8;
  v21 = v20 + 48 * v13 * v4;
  v22 = v21;
  v23 = v8 == 0;
  if ( v8 )
  {
    v22 = v21 + 136 * v8;
    v23 = v8 == 0;
  }
  if ( v23 )
    v21 = 0;
  Pool2 = ExAllocatePool2(64LL, v22, 1884115024LL);
  v96 = (char *)Pool2;
  v6 = (char *)Pool2;
  if ( !Pool2 )
  {
    v34 = -1073741670;
    goto LABEL_136;
  }
  v25 = (char *)(Pool2 + 1064);
  v26 = Pool2 + v21;
  v95 = v26;
  v27 = 0;
  v98[0] = Pool2 + v20;
  v93 = 0;
  if ( *(_BYTE *)(a1 + 11) )
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(a1 + 48);
  v90 = 0;
  v28 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_48:
    v34 = 0;
    if ( (unsigned int)KeIsEmptyAffinityEx(v102) )
    {
      v76 = 0;
      if ( (_DWORD)v4 )
      {
        v77 = v25 + 16;
        while ( *v77 != 1 )
        {
          ++v76;
          v77 += 36;
          if ( v76 >= (unsigned int)v4 )
            goto LABEL_143;
        }
        *((_QWORD *)v6 + 2) = *(_QWORD *)&v25[144 * v76];
        *((_DWORD *)v6 + 76) = 1;
      }
LABEL_143:
      if ( v76 == (_DWORD)v4 )
        *((_DWORD *)v6 + 76) = 2;
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v101, v102);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v101);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      v23 = KeHeteroSystem == 0;
      *((_QWORD *)v6 + 2) = Prcb + 33968;
      if ( v23 )
        v49 = *(_BYTE *)(Prcb + 34059);
      else
        v49 = *(_BYTE *)(Prcb + 34056);
      v6[300] = v49;
    }
    *((_QWORD *)v6 + 3) = 2097153LL;
    memset(v6 + 32, 0, 0x100uLL);
    KiCopyAffinityEx((__int64)(v6 + 24), *((_WORD *)v6 + 13), (unsigned __int16 *)v102);
    *((_QWORD *)v6 + 40) = *(_QWORD *)(a1 + 368);
    *((_QWORD *)v6 + 42) = *(_QWORD *)(a1 + 384);
    *((_QWORD *)v6 + 43) = *(_QWORD *)(a1 + 392);
    *((_QWORD *)v6 + 44) = *(_QWORD *)(a1 + 400);
    *((_QWORD *)v6 + 45) = *(_QWORD *)(a1 + 408);
    *((_QWORD *)v6 + 41) = *(_QWORD *)(a1 + 376);
    *((_QWORD *)v6 + 36) = *(_QWORD *)(a1 + 96);
    *((_QWORD *)v6 + 39) = v25;
    *((_DWORD *)v6 + 191) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v51 = v94;
    v52 = 7LL;
    *((LARGE_INTEGER *)v6 + 131) = PerformanceCounter;
    *((_DWORD *)v6 + 110) = v51;
    *((_DWORD *)v6 + 74) = v4;
    *((_DWORD *)v6 + 114) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)v6 + 111) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v6 + 112) = *(_DWORD *)(a1 + 28);
    *((_DWORD *)v6 + 113) = *(_DWORD *)(a1 + 32);
    v6[488] = *(_BYTE *)(a1 + 15);
    v6[481] = *(_BYTE *)(a1 + 4);
    *((_QWORD *)v6 + 48) = *(_QWORD *)(a1 + 448);
    *((_QWORD *)v6 + 49) = *(_QWORD *)(a1 + 456);
    *((_QWORD *)v6 + 50) = *(_QWORD *)(a1 + 464);
    *((_QWORD *)v6 + 51) = *(_QWORD *)(a1 + 496);
    *((_QWORD *)v6 + 52) = *(_QWORD *)(a1 + 504);
    *((_QWORD *)v6 + 53) = *(_QWORD *)(a1 + 512);
    *((_QWORD *)v6 + 46) = *(_QWORD *)(a1 + 432);
    *((_QWORD *)v6 + 47) = *(_QWORD *)(a1 + 440);
    v6[509] = *(_BYTE *)(a1 + 52);
    v6[508] = *(_BYTE *)(a1 + 52) != 0;
    v53 = v6 + 780;
    do
    {
      *(v53 - 1) = 100;
      *v53 = v51;
      v53 += 10;
      --v52;
    }
    while ( v52 );
    v6[482] = *(_BYTE *)(a1 + 6);
    v6[483] = *(_BYTE *)(a1 + 7);
    v6[484] = *(_BYTE *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) == 253 || (v54 = 1, *(_QWORD *)(a1 + 464)) )
      v54 = 0;
    v6[486] = v54;
    v6[485] = *(_BYTE *)(a1 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *(_BYTE *)(a1 + 12) != 0;
    *((_QWORD *)v6 + 58) = *(_QWORD *)(a1 + 56);
    *((_QWORD *)v6 + 59) = *(_QWORD *)(a1 + 64);
    v6[480] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)*(unsigned int *)(a1 + 40) )
      PpmCheckMinimumPeriod = *(unsigned int *)(a1 + 40);
    if ( *((_QWORD *)v6 + 43) )
      PpmAllowedActions |= 0x40u;
    if ( *((_QWORD *)v6 + 42) )
      PpmAllowedActions |= 0x20u;
    if ( *((_QWORD *)v6 + 41) )
      PpmAllowedActions |= 0x200u;
    if ( *((_QWORD *)v6 + 45) )
      PpmAllowedActions |= 0x80u;
    if ( *((_QWORD *)v6 + 44) )
      PpmAllowedActions |= 0x100u;
    if ( *(_BYTE *)(a1 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *(_BYTE *)(a1 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    v6[487] = *(_BYTE *)(a1 + 13);
    *((_DWORD *)v6 + 123) = *(_DWORD *)(a1 + 72);
    *((_DWORD *)v6 + 124) = *(_DWORD *)(a1 + 76);
    *((_DWORD *)v6 + 125) = *(_DWORD *)(a1 + 80);
    *((_DWORD *)v6 + 126) = *(_DWORD *)(a1 + 84);
    _InterlockedOr(v86, 0);
    v55 = 0;
    if ( (_DWORD)v4 )
    {
      v56 = v91;
      v57 = v6 + 1064;
      v58 = v6 + 1080;
      do
      {
        if ( *v58 != 2 )
        {
          v59 = *((_QWORD *)v58 - 2);
          v60 = 2LL;
          v99 = 0LL;
          *(_DWORD *)(v59 + 64) = 0x10000;
          *(_QWORD *)v59 = v6;
          *(_QWORD *)(v59 + 8) = &v57[144 * v55];
          v61 = &v92;
          v62 = (__int64 *)&v99;
          v63 = v98[0] + 48LL * v56 * v55;
          do
          {
            if ( *(_DWORD *)v61 != -1 )
            {
              *v62 = v63;
              v63 += 48LL;
            }
            v61 = (__int64 *)((char *)v61 + 4);
            ++v62;
            --v60;
          }
          while ( v60 );
          if ( *v58 )
          {
            PpmPerfResizeHistory(v59, v61);
            v78 = 2LL;
            v79 = v59 - (_QWORD)&v99;
            v80 = &v99;
            do
            {
              if ( *(_QWORD *)v80 )
                *(_QWORD *)((char *)v80 + v79 + 96) = *(_QWORD *)v80;
              v80 = (__int128 *)((char *)v80 + 8);
              --v78;
            }
            while ( v78 );
          }
          else
          {
            PpmInstallFeedbackCounters(v59 - 33968, (__int64 *)&v99, *(_BYTE *)(a1 + 14));
          }
          v57 = v6 + 1064;
        }
        ++v55;
        v58 += 36;
      }
      while ( v55 < (unsigned int)v4 );
      v8 = v88;
      v34 = 0;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *(_QWORD *)(a1 + 88);
    v64 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v64 = *(_QWORD *)(a1 + 472);
      PpmPerfControlReadFeedback = v64;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *(_QWORD *)(a1 + 480);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *(_QWORD *)(a1 + 488);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 520);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 528);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 536);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = *(__int64 (**)(void))(a1 + 416);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = *(__int64 (**)(void))(a1 + 424);
    if ( v64 )
      PpmCheckPollForFeedback = 1;
    v65 = PpmPerfDomainCount + 1;
    *((_DWORD *)v6 + 108) = PpmPerfDomainCount + 1;
    PpmPerfDomainCount = v65;
    v66 = (_QWORD *)qword_140D1EB40;
    if ( *(__int64 **)qword_140D1EB40 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v6 = &PpmPerfDomainHead;
    v67 = 1;
    *((_QWORD *)v6 + 1) = v66;
    *v66 = v6;
    v68 = PpmPerfDomainHead;
    qword_140D1EB40 = (__int64)v6;
    LOBYTE(v87) = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v69 = *(_BYTE *)(v68 + 485);
        v68 = *(_QWORD *)v68;
        v67 = v69 != 0 ? v67 : 0;
      }
      while ( (__int64 *)v68 != &PpmPerfDomainHead );
      LOBYTE(v87) = v67;
    }
    KiOrAffinityEx((char *)v102, &PpmPerfStatesRegistered, &PpmPerfStatesRegistered, word_140C0BC62);
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered, (unsigned __int16 *)&PpmCheckRegistered) )
    {
      v70 = PpmPerfDomainHead;
      v71 = 1;
      while ( (__int64 *)v70 != &PpmPerfDomainHead )
      {
        if ( !*(_BYTE *)(v70 + 487)
          || *(_QWORD *)(v70 + 472) != *((_QWORD *)v6 + 59)
          || *(_DWORD *)(v70 + 452) != *((_DWORD *)v6 + 113)
          || *(_DWORD *)(v70 + 444) != *((_DWORD *)v6 + 111)
          || *(_DWORD *)(v70 + 492) != *((_DWORD *)v6 + 123)
          || *(_DWORD *)(v70 + 496) != *((_DWORD *)v6 + 124)
          || *(_DWORD *)(v70 + 500) != *((_DWORD *)v6 + 125)
          || *(_DWORD *)(v70 + 504) != *((_DWORD *)v6 + 126) )
        {
          v71 = 0;
          break;
        }
        v70 = *(_QWORD *)v70;
      }
      PpmPerfVmPerfSelectionSupported = v71;
    }
    *((_WORD *)v6 + 530) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v6);
    PpmCheckResetProcessors((__int64)v6);
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v102, 0) )
      PpmParkApplyPolicy(v72);
    PpmCheckReInit();
    v6 = 0LL;
    v96 = 0LL;
    PpmPerfUpdateDomainPolicy(1);
    v7 = v95;
    goto LABEL_119;
  }
  v29 = 0LL;
  v30 = Pool2 + 1084;
  while ( 1 )
  {
    v31 = *(_QWORD *)(a1 + 552);
    *(_DWORD *)(v30 - 4) = *(_DWORD *)(v29 + v31 + 28);
    v32 = *(_DWORD *)(v29 + v31);
    if ( !*(_DWORD *)(v29 + v31 + 28) )
      break;
    v39 = -1;
    *(_DWORD *)v30 = v32;
    v89 = -1;
    if ( *(_DWORD *)(v29 + v31 + 28) == 1 )
    {
      v93 = v27 + 1;
      v75 = v26 + 136LL * v27;
      v97 = v75;
      *(_WORD *)(v75 + 62) = 100;
      v34 = PpmAllocatePerfCheck(v75);
      if ( v34 < 0 )
        goto LABEL_135;
      *(_QWORD *)(v30 - 20) = v97;
      goto LABEL_37;
    }
LABEL_38:
    *(_QWORD *)(v30 + 116) = 0LL;
    *(_DWORD *)(v30 + 28) = 100;
    *(_QWORD *)(v30 - 12) = *(_QWORD *)(v29 + v31 + 8);
    *(_DWORD *)(v30 + 4) = *(_DWORD *)(v29 + v31 + 16);
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v29 + v31 + 20);
    *(_DWORD *)(v30 + 12) = *(_DWORD *)(v29 + v31 + 24);
    *(_DWORD *)(v30 + 56) = v94;
    *(_DWORD *)(v30 + 36) = 100;
    *(_DWORD *)(v30 + 52) = 100;
    *(_DWORD *)(v30 + 60) = 1;
    *(_DWORD *)(v30 + 64) = 100;
    *(_DWORD *)(v30 + 68) = 100;
    *(_DWORD *)(v30 + 96) = 100;
    *(_DWORD *)(v30 + 100) = 100;
    *(_QWORD *)(v30 + 108) = 0LL;
    if ( *(_BYTE *)(a1 + 7) || (v40 = 1, !*(_BYTE *)(a1 + 11)) )
      v40 = 0;
    *(_BYTE *)(v30 + 105) = v40;
    if ( *(_DWORD *)(v29 + v31 + 16) < 0x64u )
    {
      *(_QWORD *)(v30 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v29 + v31 + 16), v39);
    }
    v41 = &v92;
    v42 = 2LL;
    v43 = v91 * v28;
    v44 = v98[0] + 48LL * (unsigned int)v91 * v28;
    do
    {
      v45 = *(unsigned int *)v41;
      if ( (_DWORD)v45 != -1 )
      {
        v46 = *(_QWORD *)(a1 + 544);
        *(_QWORD *)(v44 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 560) + 8LL * (unsigned int)(v43 + v45));
        *(_BYTE *)(v44 + 33) = *(_BYTE *)(v46 + 24 * v45 + 17);
        *(_BYTE *)(v44 + 32) = *(_BYTE *)(v46 + 24 * v45 + 16);
        *(_BYTE *)(v44 + 34) = *(_BYTE *)(v46 + 24 * v45 + 18);
        *(_DWORD *)(v44 + 36) = *(_DWORD *)(v46 + 24 * v45 + 8);
        *(_QWORD *)v44 = *(_QWORD *)(v46 + 24 * v45);
        v44 += 48LL;
      }
      v41 = (__int64 *)((char *)v41 + 4);
      --v42;
    }
    while ( v42 );
    v27 = v93;
    ++v28;
    v29 += 32LL;
    v26 = v95;
    v30 += 144LL;
    v90 = v28;
    if ( v28 >= (unsigned int)v4 )
    {
      v8 = v88;
      v25 = v6 + 1064;
      goto LABEL_48;
    }
  }
  v89 = *(_DWORD *)(v29 + v31);
  v33 = v32;
  if ( v32 != -1 && !(unsigned int)KeCheckProcessorAffinityEx(&PpmPerfStatesRegistered, v32) )
  {
    v100 = KeGetPrcb(v33);
    v97 = v100 + 33968;
    v34 = PpmAllocatePerfCheck(v100 + 33968);
    if ( v34 < 0 )
      goto LABEL_135;
    KeAddProcessorAffinityEx((unsigned __int16 *)v102, v89);
    v35 = v100;
    *(_QWORD *)(v30 - 20) = v97;
    v36 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v36 = (unsigned int)PpmPerfQosTransitionHysteresis;
    v37 = PpmConvertTime(v36, 0xF4240uLL, 1000000LL * *(unsigned int *)(v35 + 68));
    *(_QWORD *)(v38 + 34104) = v37;
LABEL_37:
    v28 = v90;
    v39 = v89;
    goto LABEL_38;
  }
  v34 = -1073741811;
LABEL_135:
  v8 = v88;
  v7 = v95;
LABEL_136:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_119:
  v73 = v87;
  if ( ((unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v87)
    && (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered, (unsigned __int16 *)&PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v73;
    PpmReinitializeHeteroEngine(1LL, 0LL);
  }
  if ( v6 )
  {
    if ( v8 )
    {
      v81 = (PVOID *)(v7 + 16);
      v82 = v8;
      do
      {
        if ( *v81 )
        {
          v83 = (void *)*((_QWORD *)*v81 + 11);
          if ( v83 )
          {
            ExFreePoolWithTag(v83, 0x704D5050u);
            *((_QWORD *)*v81 + 11) = 0LL;
          }
          v84 = (void *)*((_QWORD *)*v81 + 19);
          if ( v84 )
          {
            ExFreePoolWithTag(v84, 0x704D5050u);
            *((_QWORD *)*v81 + 19) = 0LL;
          }
          v85 = (void *)*((_QWORD *)*v81 + 27);
          if ( v85 )
          {
            ExFreePoolWithTag(v85, 0x704D5050u);
            *((_QWORD *)*v81 + 27) = 0LL;
          }
          ExFreePoolWithTag(*v81, 0x704D5050u);
          *v81 = 0LL;
        }
        v81 += 17;
        --v82;
      }
      while ( v82 );
      v6 = v96;
    }
    ExFreePoolWithTag(v6, 0x704D5050u);
  }
  v98[1] = -1LL;
  v98[0] = 0LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)v98);
  return (unsigned int)v34;
}
