/*
 * XREFs of PpmRegisterPerfStates @ 0x1407BA470
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x1407BA260 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F6AE0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeFirstGroupAffinityEx @ 0x140240B10 (KeFirstGroupAffinityEx.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140392D7C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x1403C20B4 (PpmParkApplyPolicy.c)
 *     PpmCheckResetProcessors @ 0x1403C2494 (PpmCheckResetProcessors.c)
 *     KeIsEqualAffinityEx @ 0x1403C2680 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C2860 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14078CA90 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x1407BA278 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407BAE24 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 *     PpmPerfResizeHistory @ 0x1408E6428 (PpmPerfResizeHistory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterPerfStates(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  unsigned int v5; // r14d
  LARGE_INTEGER *v6; // rdi
  unsigned int v7; // r13d
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r9d
  __int64 *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v23; // r15d
  LARGE_INTEGER *PoolWithTag; // rax
  __int64 v25; // r8
  LARGE_INTEGER *v26; // r15
  __int64 v27; // r14
  char *v28; // r8
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  __int64 v31; // r15
  char *v32; // r14
  __int64 v33; // r12
  __int64 v34; // rax
  ULONG v35; // r13d
  int v36; // ebx
  __int64 v37; // rbx
  ULONGLONG v38; // rcx
  bool v39; // al
  __int64 *v40; // r10
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LONG v49; // edx
  __int64 v50; // rcx
  LONG *p_HighPart; // rax
  char v52; // al
  unsigned int v53; // r15d
  int v54; // esi
  LARGE_INTEGER *v55; // r14
  LARGE_INTEGER v56; // rbx
  __int64 *v57; // rdx
  __int64 v58; // r8
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  LARGE_INTEGER **v62; // rax
  char v63; // r8
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rcx
  __int64 v67; // rdx
  char v68; // si
  char *v70; // r13
  __int64 v71; // rax
  LARGE_INTEGER *v72; // rcx
  __int64 v73; // rdx
  LONGLONG v74; // rbx
  _QWORD *v75; // rax
  PVOID *v76; // rsi
  signed __int32 v77[8]; // [rsp+8h] [rbp-100h] BYREF
  int v78; // [rsp+28h] [rbp-E0h]
  unsigned int v79; // [rsp+2Ch] [rbp-DCh]
  __int64 v80; // [rsp+30h] [rbp-D8h]
  __int64 v81; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v82; // [rsp+40h] [rbp-C8h]
  LONG v83; // [rsp+44h] [rbp-C4h]
  __int64 v84; // [rsp+48h] [rbp-C0h]
  __int64 v85; // [rsp+50h] [rbp-B8h]
  __int64 v86; // [rsp+58h] [rbp-B0h]
  char *v87; // [rsp+60h] [rbp-A8h]
  _QWORD v88[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+80h] [rbp-88h]
  __int64 v90; // [rsp+88h] [rbp-80h]
  __int128 v91; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v92[3]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v93[44]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v94[176]; // [rsp+168h] [rbp+60h] BYREF

  v90 = a1;
  v3 = a1;
  memset(v94, 0, 0xA8uLL);
  v91 = 0LL;
  memset(&v93[2], 0, 0xA0uLL);
  v4 = *(unsigned int *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 36);
  v6 = 0LL;
  LOBYTE(v78) = 0;
  v83 = *(_DWORD *)(v3 + 20);
  LODWORD(v86) = v4;
  *(_OWORD *)&v88[1] = 0LL;
  v93[0] = 1310721;
  memset(&v93[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v94);
  v87 = 0LL;
  v7 = 0;
  v79 = 0;
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = -1;
  v81 = -1LL;
  v9 = 0;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v3 + 408);
    do
    {
      v11 = *(unsigned int *)(v10 + 24LL * v9 + 12);
      if ( (unsigned int)v11 >= 2 )
        goto LABEL_116;
      if ( *((_DWORD *)&v81 + v11) == -1 )
        *((_DWORD *)&v81 + v11) = v9;
      ++v9;
    }
    while ( v9 < v5 );
    v8 = v81;
  }
  if ( v8 == -1 && HIDWORD(v81) == -1 )
  {
LABEL_116:
    v36 = -1073741811;
    goto LABEL_125;
  }
  v12 = 0;
  v13 = &v81;
  v14 = 2LL;
  do
  {
    v22 = *(_DWORD *)v13 == -1;
    v15 = v12 + 1;
    v13 = (__int64 *)((char *)v13 + 4);
    if ( v22 )
      v15 = v12;
    v12 = v15;
    --v14;
  }
  while ( v14 );
  LODWORD(v84) = v15;
  if ( (_DWORD)v4 )
  {
    v16 = v4;
    v17 = (_DWORD *)(*(_QWORD *)(v3 + 416) + 28LL);
    do
    {
      v22 = *v17 == 1;
      v18 = v7 + 1;
      v17 += 8;
      if ( !v22 )
        v18 = v7;
      v7 = v18;
      --v16;
    }
    while ( v16 );
    v79 = v18;
  }
  v19 = (136 * v4 + 775) & 0xFFFFFFF8;
  v20 = v19 + 48 * v12 * v4;
  v21 = v20;
  v22 = v7 == 0;
  if ( v7 )
  {
    v21 = v20 + (v7 << 7);
    v22 = v7 == 0;
  }
  v23 = v21;
  if ( v22 )
    v20 = 0;
  PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x704D5050u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v36 = -1073741670;
    goto LABEL_125;
  }
  memset(PoolWithTag, 0, v23);
  v25 = v20;
  v26 = v6 + 96;
  v27 = 0LL;
  v28 = (char *)v6 + v25;
  v29 = 0;
  v88[0] = (char *)v6 + v19;
  v82 = 0;
  v87 = v28;
  if ( *(_BYTE *)(v3 + 11) )
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(v3 + 48);
  v30 = 0;
  LODWORD(v80) = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_48:
    if ( (unsigned int)KeIsEmptyAffinityEx(v93) )
    {
      v6[26].LowPart = 2;
      v71 = 0LL;
      if ( (_DWORD)v4 )
      {
        v72 = v26 + 2;
        while ( v72->LowPart != 1 )
        {
          v71 = (unsigned int)(v71 + 1);
          v72 += 17;
          if ( (unsigned int)v71 >= (unsigned int)v4 )
            goto LABEL_50;
        }
        v6[2] = v26[17 * v71];
        v6[26].LowPart = 1;
      }
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v91, v93);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v91);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      v6[2].QuadPart = Prcb + 33128;
      BYTE4(v6[25].QuadPart) = *(_BYTE *)(Prcb + 33208);
    }
LABEL_50:
    KeCopyAffinityEx((__int64)&v6[3], (unsigned __int16 *)v93);
    v6[28] = *(LARGE_INTEGER *)(v3 + 256);
    v6[30] = *(LARGE_INTEGER *)(v3 + 272);
    v6[31] = *(LARGE_INTEGER *)(v3 + 280);
    v6[32] = *(LARGE_INTEGER *)(v3 + 288);
    v6[33] = *(LARGE_INTEGER *)(v3 + 296);
    v6[29] = *(LARGE_INTEGER *)(v3 + 264);
    v6[24] = *(LARGE_INTEGER *)(v3 + 80);
    v6[27].QuadPart = (LONGLONG)v26;
    v6[68].HighPart = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v49 = v83;
    v50 = 5LL;
    v6[94] = PerformanceCounter;
    v6[39].HighPart = v49;
    v6[25].LowPart = v4;
    v6[41].HighPart = *(_DWORD *)(v3 + 44);
    v6[40].LowPart = *(_DWORD *)(v3 + 24);
    v6[40].HighPart = *(_DWORD *)(v3 + 28);
    v6[41].LowPart = *(_DWORD *)(v3 + 32);
    BYTE1(v6[44].LowPart) = *(_BYTE *)(v3 + 4);
    v6[36] = *(LARGE_INTEGER *)(v3 + 336);
    v6[37] = *(LARGE_INTEGER *)(v3 + 344);
    v6[38] = *(LARGE_INTEGER *)(v3 + 352);
    v6[34] = *(LARGE_INTEGER *)(v3 + 320);
    v6[35] = *(LARGE_INTEGER *)(v3 + 328);
    HIBYTE(v6[44].QuadPart) = *(_BYTE *)(v3 + 52);
    p_HighPart = &v6[70].HighPart;
    do
    {
      *(p_HighPart - 1) = 100;
      *p_HighPart = v49;
      p_HighPart += 10;
      --v50;
    }
    while ( v50 );
    BYTE2(v6[44].u.LowPart) = *(_BYTE *)(v3 + 6);
    BYTE3(v6[44].QuadPart) = *(_BYTE *)(v3 + 7);
    BYTE4(v6[44].QuadPart) = *(_BYTE *)(v3 + 8);
    if ( *(_WORD *)(v3 + 4) == 253 || (v52 = 1, *(_QWORD *)(v3 + 352)) )
      v52 = 0;
    BYTE6(v6[44].QuadPart) = v52;
    BYTE5(v6[44].QuadPart) = *(_BYTE *)(v3 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *(_BYTE *)(v3 + 12) != 0;
    v6[42] = *(LARGE_INTEGER *)(v3 + 56);
    v6[43] = *(LARGE_INTEGER *)(v3 + 64);
    LOBYTE(v6[44].LowPart) = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)*(unsigned int *)(v3 + 40) )
      PpmCheckMinimumPeriod = *(unsigned int *)(v3 + 40);
    if ( v6[31].QuadPart )
      PpmAllowedActions |= 0x40u;
    if ( v6[30].QuadPart )
      PpmAllowedActions |= 0x20u;
    if ( v6[29].QuadPart )
      PpmAllowedActions |= 0x200u;
    if ( v6[33].QuadPart )
      PpmAllowedActions |= 0x80u;
    if ( v6[32].QuadPart )
      PpmAllowedActions |= 0x100u;
    if ( *(_BYTE *)(v3 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *(_BYTE *)(v3 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    _InterlockedOr(v77, 0);
    v53 = 0;
    if ( (_DWORD)v4 )
    {
      v54 = v84;
      v55 = v6 + 98;
      do
      {
        if ( v55->LowPart != 2 )
        {
          v56 = v55[-2];
          v57 = &v81;
          *(_OWORD *)&v88[1] = 0LL;
          *(_DWORD *)(v56.QuadPart + 56) = 0x10000;
          v58 = 2LL;
          *(_QWORD *)v56.QuadPart = v6;
          *(_QWORD *)(v56.QuadPart + 8) = &v6[17 * v53 + 96];
          v59 = &v88[1];
          v60 = v88[0] + 48LL * v54 * v53;
          do
          {
            if ( *(_DWORD *)v57 != -1 )
            {
              *v59 = v60;
              v60 += 48LL;
            }
            v57 = (__int64 *)((char *)v57 + 4);
            ++v59;
            --v58;
          }
          while ( v58 );
          if ( v55->LowPart )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))PpmPerfResizeHistory)((LARGE_INTEGER)v56.QuadPart, v57);
            v73 = 2LL;
            v74 = v56.QuadPart - (_QWORD)&v88[1];
            v75 = &v88[1];
            do
            {
              if ( *v75 )
                *(_QWORD *)((char *)v75 + v74 + 88) = *v75;
              ++v75;
              --v73;
            }
            while ( v73 );
          }
          else
          {
            PpmInstallFeedbackCounters(v56.QuadPart - 33128, &v88[1]);
          }
        }
        ++v53;
        v55 += 17;
      }
      while ( v53 < (unsigned int)v4 );
      v3 = v90;
      v27 = 0LL;
      v7 = v79;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *(_QWORD *)(v3 + 72);
    v61 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v61 = *(_QWORD *)(v3 + 360);
      PpmPerfControlReadFeedback = v61;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *(_QWORD *)(v3 + 368);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *(_QWORD *)(v3 + 376);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v3 + 384);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v3 + 392);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v3 + 400);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = *(__int64 (**)(void))(v3 + 304);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = *(__int64 (**)(void))(v3 + 312);
    if ( v61 )
      PpmCheckPollForFeedback = 1;
    v62 = (LARGE_INTEGER **)qword_140CFC4F8;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_140CFC4F8 != &PpmPerfDomainHead )
      __fastfail(3u);
    v6->QuadPart = (LONGLONG)&PpmPerfDomainHead;
    v63 = 1;
    v6[1].QuadPart = (LONGLONG)v62;
    *v62 = v6;
    v64 = PpmPerfDomainHead;
    qword_140CFC4F8 = (__int64)v6;
    LOBYTE(v78) = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v65 = *(_BYTE *)(v64 + 357);
        v64 = *(_QWORD *)v64;
        v63 = v65 != 0 ? v63 : 0;
      }
      while ( (__int64 *)v64 != &PpmPerfDomainHead );
      LOBYTE(v78) = v63;
    }
    KeOrAffinityEx((unsigned __int16 *)v93, (unsigned __int16 *)&PpmPerfStatesRegistered, &PpmPerfStatesRegistered);
    WORD2(v6[95].QuadPart) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v6);
    PpmCheckResetProcessors((__int64)v6);
    v66 = KiProcessorIndexToNumberMappingTable[0] & 0x3F;
    v67 = *(_QWORD *)&v93[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    if ( (v67 & 1) != 0 )
      PpmParkApplyPolicy();
    PpmCheckReInit(v66, v67);
    v6 = 0LL;
    v36 = 0;
    PpmPerfUpdateDomainPolicy(1);
    goto LABEL_110;
  }
  v31 = 0LL;
  v32 = (char *)&v6[98].QuadPart + 4;
  while ( 1 )
  {
    v33 = *(_QWORD *)(v3 + 416);
    *((_DWORD *)v32 - 1) = *(_DWORD *)(v31 + v33 + 28);
    v34 = *(unsigned int *)(v31 + v33);
    if ( !*(_DWORD *)(v31 + v33 + 28) )
      break;
    v35 = -1;
    *(_DWORD *)v32 = v34;
    v22 = *(_DWORD *)(v31 + v33 + 28) == 1;
    LODWORD(v85) = -1;
    if ( !v22 )
      goto LABEL_38;
    v82 = v29 + 1;
    v70 = &v28[128 * (unsigned __int64)v29];
    *((_WORD *)v70 + 27) = 100;
    v36 = PpmAllocatePerfCheck(v70);
    if ( v36 < 0 )
      goto LABEL_124;
    *(_QWORD *)(v32 - 20) = v70;
    v35 = v85;
LABEL_37:
    v30 = v80;
LABEL_38:
    *((_DWORD *)v32 + 7) = 100;
    *(_QWORD *)(v32 - 12) = *(_QWORD *)(v31 + v33 + 8);
    *((_DWORD *)v32 + 1) = *(_DWORD *)(v31 + v33 + 16);
    *((_DWORD *)v32 + 2) = *(_DWORD *)(v31 + v33 + 20);
    *((_DWORD *)v32 + 3) = *(_DWORD *)(v31 + v33 + 24);
    *((_DWORD *)v32 + 14) = v83;
    v39 = 0;
    *(_QWORD *)(v32 + 108) = 0LL;
    *((_DWORD *)v32 + 9) = 100;
    *((_DWORD *)v32 + 13) = 100;
    *((_DWORD *)v32 + 15) = 1;
    *((_DWORD *)v32 + 16) = 100;
    *((_DWORD *)v32 + 17) = 100;
    *((_DWORD *)v32 + 24) = 100;
    *((_DWORD *)v32 + 25) = 100;
    if ( !*(_BYTE *)(v3 + 7) )
      v39 = *(_BYTE *)(v3 + 11) != 0;
    v32[105] = v39;
    if ( *(_DWORD *)(v31 + v33 + 16) < 0x64u )
    {
      *(_QWORD *)(v32 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v31 + v33 + 16), v35);
    }
    v40 = &v81;
    v41 = (unsigned int)v84 * v30;
    v42 = 2LL;
    v43 = v88[0] + 48 * v41;
    do
    {
      v44 = *(unsigned int *)v40;
      if ( (_DWORD)v44 != -1 )
      {
        v45 = *(_QWORD *)(v3 + 408);
        *(_QWORD *)(v43 + 40) = *(_QWORD *)(*(_QWORD *)(v3 + 424) + 8LL * (unsigned int)(v41 + v44));
        *(_BYTE *)(v43 + 33) = *(_BYTE *)(v45 + 24 * v44 + 17);
        *(_BYTE *)(v43 + 32) = *(_BYTE *)(v45 + 24 * v44 + 16);
        *(_BYTE *)(v43 + 34) = *(_BYTE *)(v45 + 24 * v44 + 18);
        *(_BYTE *)(v43 + 35) = *(_BYTE *)(v45 + 24 * v44 + 8);
        *(_QWORD *)v43 = *(_QWORD *)(v45 + 24 * v44);
        v43 += 48LL;
      }
      v40 = (__int64 *)((char *)v40 + 4);
      --v42;
    }
    while ( v42 );
    LODWORD(v4) = v86;
    v30 = v80 + 1;
    v29 = v82;
    v31 += 32LL;
    v28 = v87;
    v32 += 136;
    LODWORD(v80) = v30;
    if ( v30 >= (unsigned int)v86 )
    {
      v7 = v79;
      v26 = v6 + 96;
      v27 = 0LL;
      goto LABEL_48;
    }
  }
  v35 = *(_DWORD *)(v31 + v33);
  if ( (_DWORD)v34 != -1
    && ((*((_QWORD *)&PpmPerfStatesRegistered
         + ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v34] >> 6)
         + 1) >> (KiProcessorIndexToNumberMappingTable[v34] & 0x3F)) & 1) == 0 )
  {
    v89 = KeGetPrcb(v34);
    v85 = v89 + 33128;
    v36 = PpmAllocatePerfCheck(v89 + 33128);
    if ( v36 < 0 )
      goto LABEL_124;
    KeAddProcessorAffinityEx(v93, v35);
    v37 = v89;
    *(_QWORD *)(v32 - 20) = v85;
    v38 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v38 = (unsigned int)PpmPerfQosTransitionHysteresis;
    *(_QWORD *)(v37 + 33256) = PpmConvertTime(v38, 1000000LL, 1000000LL * *(unsigned int *)(v37 + 68));
    goto LABEL_37;
  }
  v36 = -1073741811;
LABEL_124:
  v7 = v79;
LABEL_125:
  PpmReleaseLock(&PpmPerfPolicyLock);
  v27 = 0LL;
LABEL_110:
  v68 = v78;
  if ( ((unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v78)
    && (unsigned int)KeIsEqualAffinityEx(
                       (unsigned __int16 *)&PpmPerfStatesRegistered,
                       (unsigned __int16 *)PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v68;
    PpmReinitializeHeteroEngine(1);
  }
  if ( v6 )
  {
    if ( v7 )
    {
      v76 = (PVOID *)(v87 + 16);
      v27 = v7;
      do
      {
        if ( *v76 )
        {
          ExFreePoolWithTag(*v76, 0x704D5050u);
          *v76 = 0LL;
        }
        v76 += 16;
        --v27;
      }
      while ( v27 );
    }
    ExFreePoolWithTag(v6, 0x704D5050u);
  }
  v92[1] = -1LL;
  v92[0] = v27;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)v92);
  return (unsigned int)v36;
}
