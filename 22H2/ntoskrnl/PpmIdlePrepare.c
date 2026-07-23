/*
 * XREFs of PpmIdlePrepare @ 0x140224F50
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x140225560 (KiGetNextTimerExpirationDueTime.c)
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140229340 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402293C0 (KeEnumerateNextProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     MmGetNextNode @ 0x1402F0F74 (MmGetNextNode.c)
 *     PpmGetIdleConstrainedMask @ 0x1403900C0 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        _BYTE *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rsi
  __int64 v14; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v16; // r11
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rax
  int v21; // ecx
  char v22; // al
  unsigned __int64 v23; // rax
  char v24; // bl
  __int64 v25; // r13
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  int v29; // edx
  char v30; // r9
  char v31; // cl
  unsigned __int64 v32; // rsi
  int v33; // r14d
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int i; // eax
  ULONG v40; // eax
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // r14
  bool v45; // zf
  unsigned int v46; // edx
  char v47; // si
  unsigned int *v48; // rdi
  char v49; // cl
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  unsigned int v53; // r10d
  int NextNode; // eax
  signed __int64 v56; // rax
  unsigned __int64 v57; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // r15
  __int64 v61; // r12
  char v62; // al
  unsigned __int64 v63; // rcx
  __int64 v64; // rsi
  int v65; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v68; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  int v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v73; // [rsp+74h] [rbp-8Ch]
  __int64 v74; // [rsp+78h] [rbp-88h]
  unsigned __int64 v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v78; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER *v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B0h] [rbp-50h]
  _BYTE *v82; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v83; // [rsp+C0h] [rbp-40h]
  __int128 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D8h] [rbp-28h]
  _QWORD v86[22]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = 0LL;
  v8 = a1;
  v83 = a5;
  LOBYTE(v6) = 0;
  v80 = a6;
  v76 = a1;
  v9 = *(_QWORD *)(a1 + 0x8000);
  v73 = PpmDripsStateIndex;
  v78 = a4;
  v79 = a3;
  v82 = a2;
  v74 = v9 + 488;
  v69 = 0;
  v65 = v6;
  v70 = v9;
  v81 = PpmPlatformStates;
  v75 = 0LL;
  if ( *(_BYTE *)(v8 + 33) )
  {
    if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
    {
      if ( PpmPlatformStates )
        LODWORD(v17) = 1;
      else
        LODWORD(v17) = *(_DWORD *)(v9 + 32) > 1u;
      goto LABEL_82;
    }
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v8 + 0x8000);
    while ( 1 )
    {
      v12 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v13.QuadPart = MEMORY[0xFFFFF78000000350];
        v14 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v12 )
          break;
      }
      _mm_pause();
    }
    v8 = v76;
    v16 = PerformanceCounter;
    LODWORD(v17) = v65;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v13.QuadPart )
    {
      v77 = 0LL;
      v18 = -1 - v13.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v18 <<= MEMORY[0xFFFFF78000000369];
      v7 = ((unsigned __int64)v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v77 = v7;
    }
    v19 = v78;
    v20 = v7 + v14;
    v7 = 0LL;
    *v78 = v20;
    *(LARGE_INTEGER *)(v11 + 496) = v16;
    *(_QWORD *)(v11 + 504) = *(_QWORD *)(v8 + 32792) + *(_QWORD *)(v8 + 32968);
    *(_BYTE *)(v11 + 538) = *(_BYTE *)(v8 + 33212);
    *(_BYTE *)(v11 + 536) = *(_BYTE *)(v8 + 32824);
    *(_BYTE *)(v11 + 537) = *(_BYTE *)(v8 + 32825);
    *(_BYTE *)(v11 + 539) = 1;
    if ( *(_BYTE *)(v8 + 33)
      && (CurrentPrcb = KeGetCurrentPrcb(),
          v72 = 0,
          ParentNode = CurrentPrcb->ParentNode,
          v53 = ParentNode->Affinity.Reserved[0],
          (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)))) )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v53, &v72);
        if ( NextNode == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
          goto LABEL_12;
      }
      *(_BYTE *)(v11 + 540) = 1;
      *(_WORD *)(v11 + 48) |= 0x80u;
    }
    else
    {
LABEL_12:
      *(_BYTE *)(v11 + 540) = 0;
    }
    if ( *(_BYTE *)(v11 + 1) )
    {
      *(_WORD *)(v11 + 48) |= 0x100u;
      v21 = *(_DWORD *)(v11 + 28);
    }
    else
    {
      v21 = -1;
    }
    *(_DWORD *)(v11 + 528) = v21;
    if ( PpmIdleRespectIdleStateMax )
    {
      v22 = BYTE6(PpmCurrentProfile[342 * dword_140C2334C + 24]);
      *(_BYTE *)(v11 + 542) = v22;
      if ( v22 )
        *(_WORD *)(v11 + 48) |= 0x4000u;
    }
    else
    {
      *(_BYTE *)(v11 + 542) = 0;
    }
    *v79 = v16;
    if ( (_BYTE)v65 && !*(_BYTE *)(v70 + 540) )
    {
      *(_WORD *)(v70 + 48) = 0;
      LOBYTE(v17) = 0;
      goto LABEL_82;
    }
    v23 = *v19;
    v24 = *(_BYTE *)(v8 + 33);
    v25 = *(_QWORD *)(v8 + 0x8000);
    v66 = v23;
    if ( v24 || !KiSerializeTimerExpiration )
    {
      v26 = 0LL;
      v28 = *(_QWORD *)(v8 + 0x8000);
    }
    else
    {
      v26 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v27 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v56 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v27 ^ (unsigned __int16)(v27 ^ (v27 - 1)), v27);
          if ( v27 == v56 )
            break;
          v27 = v56;
          _mm_pause();
          if ( !(_WORD)v56 )
            goto LABEL_22;
        }
        v26 = v27 >> 16;
      }
LABEL_22:
      v28 = *(_QWORD *)(v8 + 0x8000);
      v24 = *(_BYTE *)(v8 + 33);
    }
    v85 = 0LL;
    v84 = 0LL;
    memset(v86, 0, 0xA8uLL);
    v30 = v65;
    v31 = *(_BYTE *)(v28 + 540);
    v32 = -1LL;
    v68 = 0;
    v33 = v24 != 0 ? 8 : 0;
    if ( (_BYTE)v65 )
      LOWORD(v33) = v33 | 4;
    v34 = KiClockTimerNextTickTime;
    v71 = 0LL;
    v67 = 2;
    if ( *(_BYTE *)(v8 + 33) )
    {
      if ( !v31 || (_BYTE)KiDynamicTickDisableReason || KiClockState )
      {
        v35 = v66;
      }
      else
      {
        LOBYTE(v29) = 1;
        KiGetNextTimerExpirationDueTime(v8, v29, v66, v65, 0, (__int64)&v71, (__int64)&v67);
        v35 = v66;
        v30 = v65;
        if ( v66 + (unsigned int)KiLastRequestedTimeIncrement < v71 )
          v34 = v71;
        else
          v67 = 2;
      }
    }
    else
    {
      KiGetNextTimerExpirationDueTime(v8, 0, v66, v65, 0, (__int64)&v71, (__int64)&v67);
      v35 = v66;
      v30 = v65;
      if ( v34 <= v71 )
        v34 = v71;
    }
    if ( v34 == -1LL )
    {
      v36 = -1LL;
    }
    else
    {
      v36 = 0LL;
      if ( v34 > v35 )
        v36 = v34 - v35;
    }
    v37 = *(_DWORD *)(v8 + 11684);
    v38 = 0;
    for ( i = v37; i; i >>= 4 )
      v38 += KeMaximumIncrement;
    if ( !v30 && v37 )
    {
      v40 = KeMaximumIncrement / (v37 + 1);
      if ( !v40 )
        v40 = 1;
      v32 = v40;
    }
    if ( v36 <= v32 )
    {
      v32 = v36;
    }
    else
    {
      LOWORD(v33) = v33 | 1;
      if ( v36 >= v38 )
        v36 = v38;
    }
    if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v8 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v86) )
    {
      v57 = 0LL;
      *((_QWORD *)&v84 + 1) = v86[1];
      *(_QWORD *)&v84 = v86;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v68, &v84) )
      {
        Prcb = KeGetPrcb(v68);
        v59 = *(_QWORD *)(Prcb + 32808);
        if ( v59 != -1LL && v59 > v57 )
          v57 = *(_QWORD *)(Prcb + 32808);
      }
      if ( v57 && v36 + v66 > v57 )
      {
        LOWORD(v33) = v33 | 0x2000;
        v36 = v57 > v66 ? (unsigned int)(v57 - v66) : 1LL;
        if ( v36 < v32 )
          v32 = v36;
      }
    }
    if ( v32 < v26 )
    {
      v32 = v26;
      v36 = v26;
      LOWORD(v33) = v33 | 0x1000;
    }
    *(_WORD *)(v25 + 48) |= v33;
    v41 = v74;
    *(_BYTE *)(v25 + 541) = v67;
    v42 = v70;
    *(_QWORD *)(v25 + 520) = v36;
    *(_QWORD *)(v25 + 512) = v32;
    (*(void (__fastcall **)(__int64))(v42 + 408))(v41);
    v43 = *(_DWORD *)(v41 + 76);
    v17 = *(unsigned int *)(v41 + 72);
    if ( v43 == -2 || v43 == -1 )
      break;
    v44 = *(_QWORD *)(v8 + 32776);
    v45 = !_BitScanForward(&v46, *(_DWORD *)(v41 + 80));
    v69 = v46;
    if ( !v45 )
    {
      do
      {
        *(_DWORD *)(v41 + 80) &= *(_DWORD *)(v41 + 80) - 1;
        ++*(_DWORD *)(1000LL * v46 + v44 + 52);
        v45 = !_BitScanForward(&v46, *(_DWORD *)(v41 + 80));
      }
      while ( !v45 );
      v69 = v46;
    }
    v47 = 0;
    v48 = *(unsigned int **)(v41 + 64);
    if ( *(_DWORD *)(v41 + 60) )
    {
      v60 = v80;
      v61 = *(unsigned int *)(v41 + 60);
      do
      {
        if ( *((_BYTE *)v48 + 4) == 0xFF )
        {
          v62 = v47;
          if ( !v47 )
            v62 = 1;
          v47 = v62;
          KeAddProcessorAffinityEx(v60, *v48);
        }
        v48 += 2;
        --v61;
      }
      while ( v61 );
      v8 = v76;
      v41 = v74;
      if ( v47 && *(_BYTE *)(v74 + 52) )
      {
        v63 = v75;
        if ( v75 < *(_QWORD *)(v74 + 24) )
          v63 = *(_QWORD *)(v74 + 24);
        v75 = v63;
      }
    }
    v49 = v65;
    if ( !(_BYTE)v65 )
      goto LABEL_48;
    v64 = v81;
    if ( v81 )
    {
      if ( (_DWORD)v17 != -1 && (unsigned int)v17 >= v73 )
        goto LABEL_48;
    }
    else if ( v43 == *(_DWORD *)(v70 + 32) - 1 )
    {
      goto LABEL_48;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v70 + 464))(*(_QWORD *)v41, 0LL);
    ++*(_DWORD *)(1000LL * v43 + v44 + 48);
    if ( (_DWORD)v17 != -1 && v64 )
      ++*(_DWORD *)(1008 * v17 + *(_QWORD *)(v64 + 48) + 24);
    LOBYTE(v17) = 0;
    v7 = 0LL;
    *(_WORD *)(v70 + 48) = 2;
LABEL_82:
    v65 = v17;
  }
  v49 = 0;
LABEL_48:
  *v82 = v49;
  *v83 = v75;
  return v43;
}
