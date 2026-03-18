/*
 * XREFs of PpmIdlePrepare @ 0x1403086B0
 * Callers:
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14030A3C0 (KiGetNextTimerExpirationDueTime.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmGetIdleConstrainedMask @ 0x14039D6B0 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        bool *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  LARGE_INTEGER v10; // r14
  __int64 v11; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v13; // r13
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 *v16; // r11
  char v17; // al
  char v18; // bl
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // edx
  char v23; // cl
  unsigned __int64 v24; // r14
  int v25; // r12d
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int i; // eax
  unsigned int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // r13
  __int64 v37; // r15
  bool v38; // zf
  unsigned int v39; // edx
  char v40; // r14
  __int64 v41; // rsi
  bool v42; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v45; // r10
  _DWORD *v46; // r14
  unsigned int v47; // r15d
  unsigned int v48; // r9d
  __int64 v49; // rcx
  _KSCHEDULER_SUBNODE *v50; // rcx
  unsigned __int64 DeepIdleSet; // rdx
  unsigned __int64 Mask; // r8
  int NextNode; // eax
  bool v54; // cl
  signed __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v58; // rcx
  unsigned __int16 *v59; // rdi
  __int64 v60; // r12
  char v61; // al
  unsigned __int64 v62; // rcx
  __int64 v63; // r14
  bool v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v74; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  unsigned __int64 v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER *v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  __int64 v82; // [rsp+C0h] [rbp-40h]
  bool *v83; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v84; // [rsp+D0h] [rbp-30h]
  __int128 v85; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-18h]
  _QWORD v87[34]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a1;
  v84 = a5;
  v81 = a6;
  v83 = a2;
  v7 = *(_QWORD *)(a1 + 33600);
  v78 = a1;
  v74 = PpmDripsStateIndex;
  v80 = a3;
  v75 = a4;
  v76 = v7 + 680;
  v68 = 0;
  v64 = 0;
  v69 = v7;
  v82 = PpmPlatformStates;
  v77 = 0LL;
  if ( !*(_BYTE *)(a1 + 33) || !PopDeepSleepIsEnabled || !PopDeepSleepIsEngaged || PopDeepSleepEvaluateWorkItemQueued )
    goto LABEL_2;
  if ( PpmPlatformStates )
    v54 = 1;
  else
    v54 = *(_DWORD *)(v7 + 32) > 1u;
  while ( 1 )
  {
    while ( 1 )
    {
      v64 = v54;
LABEL_2:
      v70 = *(_QWORD *)(v6 + 33600);
      v8 = 0LL;
      while ( 1 )
      {
        v9 = MEMORY[0xFFFFF78000000340];
        if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        {
          v10.QuadPart = MEMORY[0xFFFFF78000000350];
          v11 = MEMORY[0xFFFFF78000000008];
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( MEMORY[0xFFFFF78000000340] == v9 )
            break;
        }
        _mm_pause();
      }
      v6 = v78;
      v13 = PerformanceCounter;
      v14 = v70;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v10.QuadPart )
      {
        v79 = 0LL;
        v15 = -1 - v10.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
          v15 <<= MEMORY[0xFFFFF78000000369];
        v8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v79 = v8;
      }
      v16 = v75;
      *v75 = v8 + v11;
      *(LARGE_INTEGER *)(v14 + 688) = v13;
      *(_QWORD *)(v14 + 696) = *(_QWORD *)(v6 + 33624) + *(_QWORD *)(v6 + 33808);
      *(_BYTE *)(v14 + 730) = *(_BYTE *)(v6 + 34060);
      *(_BYTE *)(v14 + 728) = *(_BYTE *)(v6 + 33664);
      *(_BYTE *)(v14 + 729) = *(_BYTE *)(v6 + 33665);
      *(_BYTE *)(v14 + 731) = 1;
      if ( *(_BYTE *)(v6 + 33) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v73 = 0;
        v45 = (unsigned __int16 *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]];
        v46 = &KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
        v47 = *v45;
        while ( 1 )
        {
          v48 = *((_DWORD *)v45 + 4);
          while ( v48 )
          {
            _BitScanForward((unsigned int *)&v49, v48);
            v72 = v49;
            v48 &= ~(1 << v49);
            v50 = *(_KSCHEDULER_SUBNODE **)&v45[4 * v49 + 12];
            DeepIdleSet = v50->DeepIdleSet;
            Mask = v50->Affinity.Mask;
            if ( v50 == CurrentPrcb->SchedulerSubNode )
            {
              DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
              _bittestandreset64((__int64 *)&Mask, *v46 & 0x3F);
            }
            if ( DeepIdleSet != Mask )
            {
              v16 = v75;
              goto LABEL_10;
            }
          }
          NextNode = MmGetNextNode(v47, &v73);
          if ( NextNode == -1 )
            break;
          v45 = (unsigned __int16 *)KeNodeBlock[NextNode];
        }
        v16 = v75;
        *(_BYTE *)(v14 + 732) = 1;
        *(_WORD *)(v14 + 48) |= 0x80u;
      }
      else
      {
LABEL_10:
        *(_BYTE *)(v14 + 732) = 0;
      }
      if ( *(_BYTE *)(v14 + 1) )
      {
        *(_WORD *)(v14 + 48) |= 0x100u;
        *(_DWORD *)(v14 + 720) = *(_DWORD *)(v14 + 28);
      }
      else
      {
        *(_DWORD *)(v14 + 720) = -1;
      }
      if ( PpmIdleRespectIdleStateMax )
      {
        v17 = BYTE6(PpmCurrentProfile[534 * dword_140C232CC + 24]);
        *(_BYTE *)(v14 + 734) = v17;
        if ( v17 )
          *(_WORD *)(v14 + 48) |= 0x4000u;
      }
      else
      {
        *(_BYTE *)(v14 + 734) = 0;
      }
      *v80 = v13;
      if ( !v64 || *(_BYTE *)(v69 + 732) )
        break;
      *(_WORD *)(v69 + 48) = 0;
      v54 = 0;
    }
    v18 = *(_BYTE *)(v6 + 33);
    v19 = *(_QWORD *)(v6 + 33600);
    v65 = *v16;
    if ( v18 || !KiSerializeTimerExpiration )
    {
      v70 = 0LL;
      v21 = v19;
    }
    else
    {
      v70 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v20 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v55 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v20 ^ (unsigned __int16)(v20 ^ (v20 - 1)), v20);
          if ( v20 == v55 )
            break;
          v20 = v55;
          _mm_pause();
          if ( !(_WORD)v55 )
            goto LABEL_20;
        }
        v70 = v20 >> 16;
      }
LABEL_20:
      v21 = *(_QWORD *)(v6 + 33600);
      v18 = *(_BYTE *)(v6 + 33);
    }
    v86 = 0LL;
    v85 = 0LL;
    memset(v87, 0, 0x108uLL);
    v23 = *(_BYTE *)(v21 + 732);
    v67 = 0;
    v24 = -1LL;
    v25 = v18 != 0 ? 8 : 0;
    if ( v64 )
      LOWORD(v25) = v25 | 4;
    v26 = KiClockTimerNextTickTime;
    v71 = 0LL;
    v66 = 2;
    if ( *(_BYTE *)(v6 + 33) )
    {
      if ( !v23 || (_BYTE)KiDynamicTickDisableReason || KiClockState )
      {
        v27 = v65;
      }
      else
      {
        LOBYTE(v22) = 1;
        KiGetNextTimerExpirationDueTime(v6, v22, v65, v64, 0, (__int64)&v71, (__int64)&v66);
        v27 = v65;
        if ( v65 + (unsigned int)KiLastRequestedTimeIncrement < v71 )
          v26 = v71;
        else
          v66 = 2;
      }
    }
    else
    {
      KiGetNextTimerExpirationDueTime(v6, 0, v65, v64, 0, (__int64)&v71, (__int64)&v66);
      v27 = v65;
      if ( v26 <= v71 )
        v26 = v71;
    }
    if ( v26 == -1LL )
    {
      v28 = -1LL;
    }
    else
    {
      v28 = 0LL;
      if ( v26 > v27 )
        v28 = v26 - v27;
    }
    v29 = *(_DWORD *)(v6 + 11684);
    v30 = 0;
    for ( i = v29; i; i >>= 4 )
      v30 += KeMaximumIncrement;
    if ( !v64 && v29 )
    {
      v32 = KeMaximumIncrement / (v29 + 1);
      if ( !v32 )
        v32 = 1;
      v24 = v32;
    }
    if ( v28 <= v24 )
    {
      v24 = v28;
    }
    else
    {
      LOWORD(v25) = v25 | 1;
      if ( v28 >= v30 )
        v28 = v30;
    }
    LODWORD(v87[0]) = 2097153;
    memset((char *)v87 + 4, 0, 0x104uLL);
    if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v6 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v87) )
    {
      v56 = 0LL;
      *((_QWORD *)&v85 + 1) = v87[1];
      *(_QWORD *)&v85 = v87;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v67, (unsigned __int16 **)&v85) )
      {
        Prcb = KeGetPrcb(v67);
        v58 = *(_QWORD *)(Prcb + 33648);
        if ( v58 != -1LL && v58 > v56 )
          v56 = *(_QWORD *)(Prcb + 33648);
      }
      if ( v56 && v28 + v65 > v56 )
      {
        LOWORD(v25) = v25 | 0x2000;
        v28 = v56 > v65 ? (unsigned int)(v56 - v65) : 1LL;
        if ( v28 < v24 )
          v24 = v28;
      }
    }
    if ( v24 < v70 )
    {
      v24 = v70;
      v28 = v70;
      LOWORD(v25) = v25 | 0x1000;
    }
    *(_WORD *)(v19 + 48) |= v25;
    v33 = v76;
    *(_BYTE *)(v19 + 733) = v66;
    v34 = v69;
    *(_QWORD *)(v19 + 712) = v28;
    *(_QWORD *)(v19 + 704) = v24;
    (*(void (__fastcall **)(__int64))(v34 + 600))(v33);
    v35 = *(_DWORD *)(v33 + 76);
    v36 = *(unsigned int *)(v33 + 72);
    if ( v35 == -2 || v35 == -1 )
      break;
    v37 = *(_QWORD *)(v6 + 33608);
    v38 = !_BitScanForward(&v39, *(_DWORD *)(v33 + 80));
    v68 = v39;
    if ( !v38 )
    {
      do
      {
        *(_DWORD *)(v33 + 80) &= *(_DWORD *)(v33 + 80) - 1;
        ++*(_DWORD *)(1000LL * v39 + v37 + 52);
        v38 = !_BitScanForward(&v39, *(_DWORD *)(v33 + 80));
      }
      while ( !v38 );
      v68 = v39;
    }
    v40 = 0;
    v41 = *(_QWORD *)(v33 + 64);
    if ( *(_DWORD *)(v33 + 60) )
    {
      v59 = (unsigned __int16 *)v81;
      v60 = *(unsigned int *)(v33 + 60);
      do
      {
        if ( *(_BYTE *)(v41 + 4) == 0xFF )
        {
          v61 = v40;
          if ( !v40 )
            v61 = 1;
          v40 = v61;
          KeAddProcessorAffinityEx(v59, *(_DWORD *)v41);
        }
        v41 += 8LL;
        --v60;
      }
      while ( v60 );
      v6 = v78;
      v33 = v76;
      if ( v40 && *(_BYTE *)(v76 + 52) )
      {
        v62 = v77;
        if ( v77 < *(_QWORD *)(v76 + 24) )
          v62 = *(_QWORD *)(v76 + 24);
        v77 = v62;
      }
    }
    v42 = v64;
    if ( !v64 )
      goto LABEL_46;
    v63 = v82;
    if ( v82 )
    {
      if ( (_DWORD)v36 != -1 && (unsigned int)v36 >= v74 )
        goto LABEL_46;
    }
    else if ( v35 == *(_DWORD *)(v69 + 32) - 1 )
    {
      goto LABEL_46;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v69 + 656))(*(_QWORD *)v33, 0LL);
    ++*(_DWORD *)(1000LL * v35 + v37 + 48);
    if ( (_DWORD)v36 != -1 && v63 )
      ++*(_DWORD *)(1008 * v36 + *(_QWORD *)(v63 + 48) + 24);
    v54 = 0;
    *(_WORD *)(v69 + 48) = 2;
  }
  v42 = 0;
LABEL_46:
  *v83 = v42;
  *v84 = v77;
  return v35;
}
