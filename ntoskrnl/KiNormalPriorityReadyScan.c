/*
 * XREFs of KiNormalPriorityReadyScan @ 0x1402AC070
 * Callers:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402AC388 (KiShouldScanSharedReadyQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402AE13C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiSetPriorityBoost @ 0x1403512FC (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1403BD0A8 (KiRemoveThreadFromReadyQueue.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14040A618 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x14040C6E0 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(_DWORD *a1)
{
  _DWORD *v1; // r13
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  int v4; // r12d
  int v5; // edi
  int v6; // edx
  __int64 v7; // r8
  char v8; // cl
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // edi
  _QWORD **v12; // r13
  _QWORD *v13; // r15
  _QWORD *v14; // rsi
  bool v15; // cl
  bool v16; // zf
  int v17; // r14d
  _QWORD *v18; // rsi
  char v19; // al
  int v20; // ebx
  unsigned int v22; // ebx
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rcx
  char v25; // r15
  int v26; // r14d
  int GuestSchedulerAssistPriority; // eax
  int v28; // ecx
  _DWORD *v29; // r8
  int v30; // r11d
  int v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // eax
  unsigned int v34; // esi
  _QWORD **v35; // r12
  _QWORD *v36; // r14
  _QWORD *v37; // rdi
  bool v38; // cl
  _QWORD *v39; // r9
  int v40; // eax
  int v41; // r15d
  int v42; // r15d
  _QWORD *v43; // rdi
  __int64 v44; // r8
  int v45; // esi
  volatile signed __int32 *v46; // rbx
  _QWORD *v47; // r12
  __int64 v48; // rcx
  char v49; // r15
  int v50; // r14d
  int v51; // eax
  unsigned int v52; // esi
  int v53; // [rsp+30h] [rbp-49h]
  unsigned int v54; // [rsp+30h] [rbp-49h]
  unsigned int v55; // [rsp+34h] [rbp-45h]
  int v56; // [rsp+34h] [rbp-45h]
  char v57; // [rsp+38h] [rbp-41h]
  __int64 v58; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v59[2]; // [rsp+50h] [rbp-29h] BYREF
  int v60; // [rsp+58h] [rbp-21h]
  _DWORD v61[2]; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v62; // [rsp+64h] [rbp-15h] BYREF
  _QWORD *v63; // [rsp+68h] [rbp-11h] BYREF
  _QWORD *v64; // [rsp+70h] [rbp-9h]
  _QWORD *v65; // [rsp+78h] [rbp-1h] BYREF
  _QWORD *v66; // [rsp+80h] [rbp+7h] BYREF
  _QWORD *v67; // [rsp+88h] [rbp+Fh] BYREF
  int v69; // [rsp+E0h] [rbp+67h]
  int v70; // [rsp+E0h] [rbp+67h]
  int v71; // [rsp+E8h] [rbp+6Fh]
  int v72; // [rsp+E8h] [rbp+6Fh]
  int v73; // [rsp+E8h] [rbp+6Fh]
  unsigned int v74; // [rsp+F0h] [rbp+77h]
  _QWORD *v75; // [rsp+F0h] [rbp+77h]
  char v76; // [rsp+F0h] [rbp+77h]
  int v77; // [rsp+F8h] [rbp+7Fh]

  v1 = a1;
  v58 = 0LL;
  v77 = 16;
  if ( (unsigned int)KiShouldScanSharedReadyQueue(a1) )
  {
    v3 = *(_QWORD **)(v2 + 34888);
    v64 = v3;
    if ( (v3[1] & 0x300) != 0 )
    {
      v4 = KiNormalPriorityBoostMaximumThreadReadyCount * *((unsigned __int8 *)v3 + 660);
      v57 = *((_BYTE *)v3 + 659);
      v63 = 0LL;
      v59[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      {
        do
          KeYieldProcessorEx(v59);
        while ( *v3 );
      }
      v5 = v3[1] & 0x300;
      if ( v5 )
      {
        v6 = 16;
        v7 = (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks);
        v8 = v57;
        v63 = 0LL;
        v53 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
        v71 = 16;
        v74 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
        v9 = __ROR4__(v5, v57);
        do
        {
          _BitScanForward(&v10, v9);
          v59[1] = v10;
          v60 = v9 ^ (1 << v10);
          v11 = ((_BYTE)v10 + v8) & 0x1F;
          v55 = v11;
          v12 = (_QWORD **)&v3[2 * (((unsigned __int8)v10 + v8) & 0x1F) + 2];
          v13 = *v12;
          do
          {
            v14 = v13 - 27;
            v15 = 0;
            v16 = (*(_DWORD *)(v13 - 12) & 0x400000) == 0;
            v13 = (_QWORD *)*v13;
            if ( !v16 )
            {
              GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v14, 0LL);
              v6 = v71;
              v7 = v74;
              v15 = GuestSchedulerAssistPriority != *((_DWORD *)v14 + 256);
            }
            v17 = v7 - *((_DWORD *)v14 + 109);
            if ( v17 > 0 || v15 )
            {
              KiRemoveThreadFromSharedReadyQueue(v3, v14, v11);
              KiInsertDeferredReadyList(&v63, v14);
              v6 = v71;
              v7 = v74;
              if ( v17 > 0 )
                --v4;
            }
            v71 = --v6;
          }
          while ( v13 != v12 && v4 && v6 );
          v9 = v60;
          if ( !v60 )
            break;
          if ( !v4 )
            break;
          v8 = v57;
        }
        while ( v6 );
        _InterlockedAnd64(v3, 0LL);
        v18 = v63;
        v1 = a1;
        if ( v63 )
        {
          v22 = v74;
          do
          {
            v23 = (volatile signed __int32 *)(v18 - 27);
            v75 = v18;
            v24 = *(v18 - 18);
            v25 = 0;
            v18 = (_QWORD *)*v18;
            v69 = v24;
            v61[0] = 0;
            while ( _interlockedbittestandset64(v23 + 16, 0LL) )
            {
              do
                KeYieldProcessorEx(v61);
              while ( *((_QWORD *)v23 + 8) );
            }
            v26 = *((char *)v23 + 195);
            if ( (int)(v22 - *((_DWORD *)v23 + 109)) > 0 && v26 < 11 )
            {
              LOBYTE(v7) = 11;
              v25 = 1;
              KiSetPriorityBoost(0, (_DWORD)v23, v7, v69, v53);
            }
            *((_QWORD *)v23 + 8) = 0LL;
            if ( v25 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v23, (unsigned int)v26, v7);
            v66 = v75;
            *v75 = 0LL;
            KiReadyDeferredReadyList((__int64)v1, &v66);
          }
          while ( v18 );
          v3 = v64;
          v6 = v71;
        }
        if ( v6 && v4 )
        {
          v19 = 8;
        }
        else
        {
          v19 = 8;
          if ( v55 + 1 <= 9 )
            v19 = v55 + 1;
        }
      }
      else
      {
        _InterlockedAnd64(v3, 0LL);
        v19 = 8;
      }
      *((_BYTE *)v3 + 659) = v19;
    }
  }
  KiAcquirePrcbLocksForIsolationUnit((__int64)v1, 0, &v58);
  v20 = v1[8118] & 0x300;
  if ( v20 )
  {
    v28 = v1[8121];
    v29 = v1 + 8144;
    v30 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v31 = KiNormalPriorityBoostMaximumThreadReadyCount;
    v76 = v28;
    v56 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
    v70 = KiNormalPriorityBoostMaximumThreadReadyCount;
    v65 = 0LL;
    v72 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v32 = __ROR4__(v20, v28);
    do
    {
      _BitScanForward(&v33, v32);
      v32 ^= 1 << v33;
      v61[1] = v33;
      v34 = ((_BYTE)v33 + (_BYTE)v28) & 0x1F;
      v35 = (_QWORD **)&v29[4 * (((_BYTE)v33 + (_BYTE)v28) & 0x1F)];
      v54 = v34;
      v36 = *v35;
      do
      {
        v37 = v36 - 27;
        v64 = v36;
        v38 = 0;
        v39 = v36;
        v16 = (*(_DWORD *)(v36 - 12) & 0x400000) == 0;
        v36 = (_QWORD *)*v36;
        if ( !v16 )
        {
          v40 = KiReadGuestSchedulerAssistPriority(v37, 0LL);
          v31 = v70;
          v39 = v64;
          v38 = v40 != *((_DWORD *)v37 + 256);
          v30 = v72;
        }
        v41 = v30 - *((_DWORD *)v37 + 109);
        if ( v41 > 0 || v38 )
        {
          KiRemoveThreadFromReadyQueue(v1, v39, v34);
          KiInsertDeferredReadyList(&v65, v37);
          v31 = v70;
          v30 = v72;
          if ( v41 > 0 )
            v31 = --v70;
        }
        v42 = --v77;
      }
      while ( v36 != v35 && v31 && v42 );
      if ( !v32 )
        break;
      if ( !v31 )
        break;
      LOBYTE(v28) = v76;
      v29 = v1 + 8144;
    }
    while ( v42 );
    v43 = v65;
    if ( v65 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v58);
      v45 = v72;
      do
      {
        v46 = (volatile signed __int32 *)(v43 - 27);
        v47 = v43;
        v48 = *(v43 - 18);
        v49 = 0;
        v43 = (_QWORD *)*v43;
        v73 = v48;
        v62 = 0;
        while ( _interlockedbittestandset64(v46 + 16, 0LL) )
        {
          do
            KeYieldProcessorEx(&v62);
          while ( *((_QWORD *)v46 + 8) );
        }
        v50 = *((char *)v46 + 195);
        if ( v45 - *((_DWORD *)v46 + 109) > 0 && v50 < 11 )
        {
          LOBYTE(v44) = 11;
          v49 = 1;
          KiSetPriorityBoost(0, (_DWORD)v46, v44, v73, v56);
        }
        *((_QWORD *)v46 + 8) = 0LL;
        if ( v49 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v46, (unsigned int)v50, v44);
        v67 = v47;
        *v47 = 0LL;
        KiReadyDeferredReadyList((__int64)v1, &v67);
      }
      while ( v43 );
      KiAcquirePrcbLocksForIsolationUnit((__int64)v1, 0, &v58);
      v34 = v54;
      v42 = v77;
    }
    if ( v42 && v70 )
    {
      v51 = 8;
    }
    else
    {
      v52 = v34 + 1;
      v51 = 8;
      if ( v52 <= 9 )
        v51 = v52;
    }
    v1[8121] = v51;
  }
  v1[8122] = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
  return KiReleasePrcbLocksForIsolationUnit(&v58);
}
