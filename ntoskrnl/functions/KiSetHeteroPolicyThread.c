__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  int v7; // edx
  int v8; // r9d
  __int64 v9; // r8
  char v10; // cl
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // r13
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  char v18; // cl
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // r12d
  unsigned __int8 v23; // r14
  __int64 v24; // rdi
  volatile signed __int32 *v25; // rsi
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 CurrentPrcb; // rsi
  __int64 v32; // r9
  ULONG_PTR v33; // rbp
  int v34; // ecx
  struct _KPRCB *v35; // rdi
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  signed __int32 *v43; // r8
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  unsigned int v46; // r8d
  bool v47; // zf
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  void (__fastcall *v55)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int16 v56; // bp
  unsigned int *i; // rbx
  unsigned __int64 v58; // rdi
  bool v59; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v61)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v62; // eax
  __int64 (__fastcall *v63)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v64; // eax
  __int64 (__fastcall *v66)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v67; // eax
  __int64 v68; // [rsp+20h] [rbp-3A8h]
  _DWORD v69[2]; // [rsp+40h] [rbp-388h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-380h] BYREF
  int v71; // [rsp+4Ch] [rbp-37Ch]
  unsigned int v72; // [rsp+50h] [rbp-378h]
  __int64 v73; // [rsp+58h] [rbp-370h] BYREF
  int v74; // [rsp+60h] [rbp-368h] BYREF
  __int128 v75; // [rsp+68h] [rbp-360h] BYREF
  int v76; // [rsp+78h] [rbp-350h]
  _DWORD v77[2]; // [rsp+80h] [rbp-348h] BYREF
  int v78; // [rsp+88h] [rbp-340h] BYREF
  unsigned int v79; // [rsp+8Ch] [rbp-33Ch]
  unsigned int v80; // [rsp+90h] [rbp-338h]
  unsigned int v81; // [rsp+94h] [rbp-334h]
  int v82; // [rsp+98h] [rbp-330h] BYREF
  _QWORD *v83; // [rsp+A0h] [rbp-328h] BYREF
  _QWORD *v84; // [rsp+A8h] [rbp-320h] BYREF
  __int64 *v85; // [rsp+B0h] [rbp-318h] BYREF
  unsigned __int64 v86; // [rsp+B8h] [rbp-310h] BYREF
  _DWORD v87[2]; // [rsp+C0h] [rbp-308h] BYREF
  _DWORD v88[2]; // [rsp+C8h] [rbp-300h] BYREF
  int v89; // [rsp+D0h] [rbp-2F8h] BYREF
  int v90; // [rsp+D4h] [rbp-2F4h]
  _DWORD v91[2]; // [rsp+D8h] [rbp-2F0h] BYREF
  _DWORD v92[2]; // [rsp+E0h] [rbp-2E8h] BYREF
  _DWORD v93[2]; // [rsp+E8h] [rbp-2E0h] BYREF
  __int128 v94; // [rsp+F0h] [rbp-2D8h] BYREF
  __int64 v95; // [rsp+100h] [rbp-2C8h]
  __int128 v96; // [rsp+108h] [rbp-2C0h] BYREF
  __int128 v97; // [rsp+118h] [rbp-2B0h] BYREF
  __int64 v98; // [rsp+128h] [rbp-2A0h]
  int v99; // [rsp+130h] [rbp-298h] BYREF
  __int128 v100; // [rsp+134h] [rbp-294h]
  __int128 v101; // [rsp+148h] [rbp-280h] BYREF
  unsigned __int16 v102[136]; // [rsp+160h] [rbp-268h] BYREF
  _QWORD v103[34]; // [rsp+270h] [rbp-158h] BYREF
  int v104; // [rsp+3C0h] [rbp-8h]

  v74 = 0;
  v97 = 0LL;
  v98 = 0LL;
  v73 = 0LL;
  v96 = 0LL;
  v84 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v77[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(v77);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(unsigned __int8 *)(a1 + 125);
  v8 = v7;
  v9 = *(unsigned int *)(a1 + 588);
  v10 = *(_BYTE *)(a1 + 126) ^ (*(_BYTE *)(a1 + 126) ^ a2) & 0x7F;
  v11 = *(_DWORD *)(a1 + 196);
  if ( v10 >= 0 )
    v8 = a2;
  v79 = *(_DWORD *)(a1 + 588);
  v81 = v11;
  *(_BYTE *)(a1 + 126) = v10;
  if ( v8 == 8 )
    v8 = KiDefaultHeteroCpuPolicy;
  v72 = v8;
  if ( !KeHeteroSystem )
  {
    v72 = 0;
    *(_BYTE *)(a1 + 126) = v10 & 0x7F;
    v8 = 0;
  }
  if ( v7 == v8 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_58;
  }
  v12 = v8;
  v13 = KiProcessorBlock[v9];
  if ( v8 >= 5 )
    v12 = KiConvertDynamicHeteroPolicy(a1);
  v14 = *(_WORD **)(a1 + 576);
  v15 = *(unsigned __int8 *)(v13 + 208);
  if ( (unsigned __int16)v15 >= *v14 )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)&v14[4 * v15 + 4];
  v17 = KiComputeHeteroThreadQos(a1, &v74);
  KiGenerateHeteroSets(*(_QWORD *)(v13 + 192), v16, v12, *(_BYTE *)(a1 + 516), v17, v74, (__int64 *)&v97);
  if ( ((unsigned __int64)v97 & *(_QWORD *)(v13 + 200)) == 0 )
  {
    v18 = *(_BYTE *)(v13 + 209);
    _BitScanForward64(&v19, __ROR8__(v97, v18));
    v20 = *(unsigned __int8 *)(v13 + 208) << 6;
    v77[1] = v19;
    v21 = KiProcessorNumberToIndexMappingTable[v20 + ((v18 + (_BYTE)v19) & 0x3F)];
    LODWORD(v19) = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 588) = v21;
    if ( (v19 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v21;
  }
  v22 = *(_DWORD *)(a1 + 588);
  v80 = *(_DWORD *)(a1 + 196);
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = *(_BYTE *)(a1 + 388);
      v24 = 0LL;
      v25 = 0LL;
      if ( v23 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_35:
          v27 = *(unsigned int *)(a1 + 536);
          if ( (int)v27 >= 0 )
          {
            v24 = KiProcessorBlock[v27];
            KiAcquirePrcbLocksForIsolationUnit(v24, 0, &v73);
            if ( a1 == *(_QWORD *)(v24 + 8) )
              goto LABEL_54;
            goto LABEL_37;
          }
          break;
        case 3:
          v28 = *(unsigned int *)(a1 + 536);
          if ( (int)v28 >= 0 )
          {
            v24 = KiProcessorBlock[v28];
            KiAcquirePrcbLocksForIsolationUnit(v24, 0, &v73);
            if ( a1 == *(_QWORD *)(v24 + 16) )
              goto LABEL_54;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v28 )
              __fastfail(0x1Eu);
LABEL_37:
            KiReleasePrcbLocksForIsolationUnit(&v73);
          }
          break;
        case 5:
          v26 = *(_BYTE *)(a1 + 112) & 7;
          if ( v26 == 1 || (unsigned __int8)(v26 - 3) <= 3u )
            goto LABEL_54;
          v23 = 2;
          goto LABEL_35;
        default:
          goto LABEL_54;
      }
    }
    v29 = *(unsigned int *)(a1 + 536);
    if ( (int)v29 >= 0 )
      break;
    v30 = (unsigned int)v29;
    LODWORD(v30) = v29 & 0x7FFFFFFF;
    v78 = 0;
    v25 = *(volatile signed __int32 **)(KiProcessorBlock[v30] + 34888);
    while ( _interlockedbittestandset64(v25, 0LL) )
    {
      do
        KeYieldProcessorEx(&v78);
      while ( *(_QWORD *)v25 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v29 )
      goto LABEL_54;
    _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
  }
  v24 = KiProcessorBlock[v29];
  KiAcquirePrcbLocksForIsolationUnit(v24, 0, &v73);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v29 )
    goto LABEL_37;
LABEL_54:
  *(_BYTE *)(a1 + 125) = v72;
  WORD4(v96) = *(unsigned __int8 *)(v13 + 208);
  *(_QWORD *)&v96 = v98;
  KiRescheduleThreadAfterAffinityChange(a1, 0LL, (__int64)&v96, v23, v24, &v73, (volatile signed __int64 *)v25, &v84);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1350LL, v79, v22, v68);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1351LL, v81, v80, v68);
LABEL_58:
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  KiReadyDeferredReadyList(CurrentPrcb, &v84);
  v86 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v33 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v34 = *(unsigned __int8 *)(v33 + 792) | *(unsigned __int8 *)(v33 + 870);
      v83 = 0LL;
      v85 = 0LL;
      if ( v34 != 63 )
      {
        v35 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v33, 1u, 1, 1, (__int64)&v83, (__int64)&v85, (__int64)&v35->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v85, (__int64)&v35->AbSelfIoBoostsList, (__int64)&v83);
        KiReadyDeferredReadyList((__int64)v35, &v83);
      }
      v82 = 0;
      v86 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v82);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v36 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v37 = __rdtsc();
      v38 = v37 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v33 + 72) += v38;
      v39 = *(unsigned int *)(v33 + 80);
      v40 = v38 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v37;
      v41 = (v40 >> 16) + v39;
      if ( v41 > 0xFFFFFFFF )
        LODWORD(v41) = -1;
      v47 = (*(_BYTE *)(v33 + 2) & 0xBE) == 0;
      *(_DWORD *)(v33 + 80) = v41;
      if ( !v47 )
      {
        LOBYTE(v32) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v33, v38, v32);
      }
      v42 = KeGetCurrentPrcb();
      v43 = (signed __int32 *)v42->SchedulerAssist;
      if ( v43 )
      {
        _m_prefetchw(v43);
        v44 = *v43;
        do
        {
          v45 = v44;
          v44 = _InterlockedCompareExchange(v43, v44 & 0xFFDFFFFF, v44);
        }
        while ( v45 != v44 );
        if ( (v44 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v42);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v36;
      if ( *(_BYTE *)(v36 + 388) == 1 )
        *(_DWORD *)(v36 + 132) = *(_DWORD *)(v36 + 132) - *(_DWORD *)(v36 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v36 + 388) = 2;
      *(_BYTE *)(v33 + 643) = 32;
      *(_BYTE *)(v33 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v86, v33);
      LOBYTE(v46) = CurrentIrql;
      v47 = (unsigned __int8)KiSwapContext(v33, v36, v46) == 0;
    }
    else
    {
      v47 = (*(_DWORD *)(v33 + 116) & 0x40) == 0;
    }
    if ( !v47 )
    {
      if ( KiIrqlFlags )
      {
        v48 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v48 - 2) <= 0xDu )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v47 = (v50[5] & 0xFFFF0003) == 0;
          v50[5] &= 0xFFFF0003;
          if ( v47 )
            KiRemoveSystemWorkPriorityKick((__int64)v49);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v33 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v51 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v51 - 2) <= 0xDu )
      {
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v47 = (v54 & v53[5]) == 0;
        v53[5] &= v54;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick((__int64)v52);
      }
    }
    __writecr8(CurrentIrql);
    return v72;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
    return v72;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return v72;
  }
  memset(v102, 0, 0x108uLL);
  v100 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v99 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v69[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v69[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v55 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                              + 120);
    v71 = 1;
    _disable();
    v55(*(_QWORD *)(HalpInterruptController + 16), v69, &v99, 47LL, &ProcNumber);
    if ( (v104 & 0x200) != 0 )
      _enable();
    return v72;
  }
  KeInitializeAffinityEx2((__int64)v102, 0x20u);
  KeAddProcessorAffinityEx(v102, KeGetPcr()->Prcb.Number);
  v69[0] = 0;
  ProcNumber = 0;
  v95 = 0LL;
  v101 = 0LL;
  v94 = 0LL;
  memset(v103, 0, 0x108uLL);
  v76 = 0;
  v75 = 0LL;
  if ( qword_140C621C8 )
  {
    qword_140C621C8(v102, 47LL);
    return v72;
  }
  KeInitializeAffinityEx2((__int64)v103, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v102, v103, WORD1(v103[0]));
  v56 = v104;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v102, (__int64)(i + 2), (char *)&v101) )
      {
        v58 = v101;
        LODWORD(v75) = 6;
        v59 = (_QWORD)v101 == 0LL;
        *((_QWORD *)&v75 + 1) = *i;
        ProcNumber.Group = WORD4(v101);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v59 )
            break;
          if ( (v58 & 1) != 0 )
          {
            v69[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v75) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 12);
            j = ProcNumber.Number;
          }
          v58 >>= 1;
          v59 = v58 == 0;
        }
        v87[0] = -1;
        v87[1] = 1;
        v88[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v88[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v61 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v62 = v61(*(_QWORD *)(HalpInterruptController + 16), v88, &v75, 47LL, v87);
        if ( (v56 & 0x200) != 0 )
          _enable();
        if ( v62 < 0 )
          return v72;
      }
    }
LABEL_116:
    *((_QWORD *)&v94 + 1) = v103[1];
    *(_QWORD *)&v94 = v103;
    v69[0] = 0;
    LOWORD(v95) = 0;
    do
    {
      if ( (unsigned int)KeEnumerateNextProcessor(v69, (unsigned __int16 **)&v94) )
        break;
      LODWORD(v75) = 4;
      v92[0] = -1;
      v92[1] = 1;
      DWORD2(v75) = *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 8);
      v93[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v93[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v63 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v64 = v63(*(_QWORD *)(HalpInterruptController + 16), v93, &v75, 47LL, v92);
      if ( (v56 & 0x200) != 0 )
        _enable();
    }
    while ( v64 >= 0 );
  }
  else
  {
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_116;
    LODWORD(v75) = 5;
    DWORD2(v75) = 0;
    KeInitializeEnumerationContext((__int64)&v94, (__int64)v102);
    while ( !(unsigned int)KeEnumerateNextProcessor(v69, (unsigned __int16 **)&v94) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0]) == 5 )
        DWORD2(v75) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v69[0] + 8);
    }
    if ( !DWORD2(v75) )
      goto LABEL_116;
    v89 = -1;
    v90 = 1;
    v91[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v91[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v66 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
    _disable();
    v67 = v66(*(_QWORD *)(HalpInterruptController + 16), v91, &v75, (unsigned int)(v90 + 46), &v89);
    if ( (v56 & 0x200) != 0 )
      _enable();
    if ( v67 >= 0 )
      goto LABEL_116;
  }
  return v72;
}
