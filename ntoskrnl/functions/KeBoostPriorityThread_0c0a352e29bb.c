char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  int v5; // r14d
  int v6; // r13d
  unsigned __int8 CurrentIrql; // r15
  __int64 CurrentPrcb; // rsi
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // r14
  bool v15; // zf
  int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  int v18; // ecx
  struct _KPRCB *v19; // rdi
  __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r11
  unsigned int FrequencyBucket; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rax
  struct _KPRCB *v42; // r8
  signed __int32 *v43; // rdx
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  struct _KPRCB *v46; // r8
  signed __int32 *v47; // rdx
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  __int16 v57; // r12
  unsigned int *v58; // rbx
  unsigned __int64 v59; // rdi
  unsigned __int8 v60; // si
  __int64 (__fastcall *v61)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v62)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v63)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v65[2]; // [rsp+40h] [rbp-338h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v67; // [rsp+4Ch] [rbp-32Ch]
  __int128 v68; // [rsp+50h] [rbp-328h] BYREF
  int v69; // [rsp+60h] [rbp-318h]
  int v70; // [rsp+68h] [rbp-310h] BYREF
  int v71; // [rsp+6Ch] [rbp-30Ch] BYREF
  int v72; // [rsp+70h] [rbp-308h]
  _QWORD *v73; // [rsp+78h] [rbp-300h] BYREF
  _QWORD *v74; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 *v75; // [rsp+88h] [rbp-2F0h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v77[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v78[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v79[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v80[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v81[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v82[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  __int128 v83; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-2A0h]
  int v85; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v86; // [rsp+E4h] [rbp-294h]
  __int128 v87; // [rsp+F8h] [rbp-280h] BYREF
  _QWORD v88[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v89[34]; // [rsp+220h] [rbp-158h] BYREF
  int v90; // [rsp+370h] [rbp-8h]

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v5 = 0;
  v74 = 0LL;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= (unsigned __int8)((_BYTE)v74 + 15) )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v28) = 4;
    else
      v28 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v28;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v70 = 0;
  v9 = *(_QWORD *)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v70);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(char *)(a1 + 195);
  v72 = v10;
  if ( v10 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v11 = a2 + *(char *)(a1 + 563);
    if ( v11 > v10 )
    {
      v6 = a2 + *(char *)(a1 + 563);
      if ( v11 >= 16 )
        v6 = 15;
      if ( a1 != v9 || *(_BYTE *)(CurrentPrcb + 32) )
      {
        v12 = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v29 = __rdtsc();
        v30 = v29 - *(_QWORD *)(CurrentPrcb + 33152);
        v12 = v30 + *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        v31 = *(unsigned int *)(a1 + 80);
        v32 = v30 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v29;
        v33 = (v32 >> 16) + v31;
        if ( v33 > 0xFFFFFFFF )
          LODWORD(v33) = -1;
        v15 = (*(_BYTE *)(a1 + 2) & 0xBE) == 0;
        *(_DWORD *)(a1 + 80) = v33;
        if ( !v15 )
          KiEndThreadAccountingPeriodEx(CurrentPrcb, a1, v30, 0LL);
        v34 = __rdtsc();
        *(_QWORD *)(CurrentPrcb + 33400) += v34 - *(_QWORD *)(CurrentPrcb + 33152);
        if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
        {
          FrequencyBucket = PoGetFrequencyBucket(CurrentPrcb);
          ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(CurrentPrcb, v36, v37, FrequencyBucket);
          *(_QWORD *)(CurrentPrcb + 8 * (ProcessorEfficiencyClass + 2 * v39) + 33408) += v40;
        }
        if ( (*(_BYTE *)(a1 + 2) & 0x40) != 0 )
        {
          v41 = *(_QWORD *)(a1 + 968);
          if ( v41 )
            *(_BYTE *)(v41 + 64) = 1;
        }
        *(_QWORD *)(CurrentPrcb + 33152) = v34;
        if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
          KiBeginCounterAccumulation(a1, 0LL);
        *(_BYTE *)(CurrentPrcb + 32) = 0;
        if ( *(_BYTE *)(CurrentPrcb + 6) )
        {
          *(_BYTE *)(CurrentPrcb + 6) = 0;
          HalRequestSoftwareInterrupt(2);
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
            KiRemoveSystemWorkPriorityKick(v42);
        }
        _enable();
      }
      v13 = v12 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v13;
      KiSetPriorityThread(a1, (unsigned __int64)&v74, v6);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  LOBYTE(v2) = KiReadyDeferredReadyList(CurrentPrcb, &v74);
  v76 = 0LL;
  if ( CurrentIrql >= 2u )
  {
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      LOBYTE(v2) = *(_BYTE *)(CurrentPrcb + 13242);
      if ( !(_BYTE)v2 )
      {
        if ( *(_BYTE *)(CurrentPrcb + 32) )
        {
          LOBYTE(v2) = 1;
          *(_BYTE *)(CurrentPrcb + 6) = 1;
        }
        else
        {
          memset(&v88[1], 0, 0x100uLL);
          v86 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
          {
            LODWORD(v88[0]) = 2097153;
            memset((char *)v88 + 4, 0, 0x104uLL);
            KeAddProcessorAffinityEx((unsigned __int16 *)v88, KeGetPcr()->Prcb.Number);
            v65[0] = 0;
            v84 = 0LL;
            v87 = 0LL;
            v83 = 0LL;
            memset(&v89[1], 0, 0x100uLL);
            v69 = 0;
            v68 = 0LL;
            if ( qword_140C621C8 )
            {
              LOBYTE(v2) = qword_140C621C8(v88, 47LL);
            }
            else
            {
              LODWORD(v89[0]) = 2097153;
              memset((char *)v89 + 4, 0, 0x104uLL);
              KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v88, v89, 0x20u);
              v57 = v90;
              if ( HalpInterruptClusterModeEnabled )
              {
                v58 = (unsigned int *)HalpInterruptClusterData;
                ProcNumber = 0;
                while ( (unsigned __int64)v58 < HalpInterruptClusterDataEnd )
                {
                  if ( (unsigned int)KeAndGroupAffinityEx(v88, (__int64)(v58 + 2), (char *)&v87) )
                  {
                    v59 = v87;
                    v60 = 0;
                    LODWORD(v68) = 6;
                    *((_QWORD *)&v68 + 1) = *v58;
                    ProcNumber.Group = WORD4(v87);
                    for ( ProcNumber.Number = 0; v59; ProcNumber.Number = v60 )
                    {
                      if ( (v59 & 1) != 0 )
                      {
                        v65[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                        v5 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v65[0] + 12);
                        HIDWORD(v68) = v5;
                      }
                      ++v60;
                      v59 >>= 1;
                    }
                    v78[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v78[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v77[0] = -1;
                    v77[1] = 1;
                    v61 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    LODWORD(v2) = v61(*(_QWORD *)(HalpInterruptController + 16), v78, &v68, 47LL, v77);
                    if ( (v57 & 0x200) != 0 )
                      _enable();
                    v5 = 0;
                    if ( (int)v2 < 0 )
                      goto LABEL_21;
                  }
                  v58 += 6;
                }
              }
              else if ( !HalpInterruptPhysicalModeOnly )
              {
                *((_QWORD *)&v83 + 1) = v88[1];
                *(_QWORD *)&v83 = v88;
                LODWORD(v68) = 5;
                DWORD2(v68) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(v65, (unsigned __int16 **)&v83) )
                {
                  if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v65[0]) == 5 )
                    DWORD2(v68) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v65[0] + 8);
                }
                if ( DWORD2(v68) )
                {
                  v79[0] = -1;
                  v79[1] = 1;
                  v80[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v80[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v63 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  LODWORD(v2) = v63(*(_QWORD *)(HalpInterruptController + 16), v80, &v68, 47LL, v79);
                  if ( (v57 & 0x200) != 0 )
                    _enable();
                  if ( (int)v2 < 0 )
                    goto LABEL_21;
                }
              }
              *((_QWORD *)&v83 + 1) = v89[1];
              *(_QWORD *)&v83 = v89;
              v65[0] = 0;
              LOWORD(v84) = 0;
              do
              {
                LODWORD(v2) = KeEnumerateNextProcessor(v65, (unsigned __int16 **)&v83);
                if ( (_DWORD)v2 )
                  break;
                LODWORD(v68) = 4;
                v81[0] = -1;
                v81[1] = 1;
                DWORD2(v68) = *(_DWORD *)(HalpInterruptTargets + 24LL * v65[0] + 8);
                v82[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v82[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v62 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                LODWORD(v2) = v62(*(_QWORD *)(HalpInterruptController + 16), v82, &v68, 47LL, v81);
                if ( (v57 & 0x200) != 0 )
                  _enable();
              }
              while ( (int)v2 >= 0 );
            }
          }
          else
          {
            v85 = 3;
            v65[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v16 = *(_DWORD *)(HalpInterruptIpiLines + 16);
            ProcNumber = (struct _PROCESSOR_NUMBER)-1;
            v65[0] = v16;
            v17 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
            v67 = 1;
            _disable();
            LOBYTE(v2) = v17(*(_QWORD *)(HalpInterruptController + 16), v65, &v85, 47LL, &ProcNumber);
            if ( (v90 & 0x200) != 0 )
              _enable();
          }
        }
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v18 = *(unsigned __int8 *)(v14 + 792) | *(unsigned __int8 *)(v14 + 870);
      v73 = 0LL;
      v75 = 0LL;
      if ( v18 != 63 )
      {
        v19 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v14, 1u, 1, 1, (__int64)&v73, (__int64)&v75, (__int64)&v19->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v75, (__int64)&v19->AbSelfIoBoostsList, (__int64)&v73);
        KiReadyDeferredReadyList((__int64)v19, &v73);
      }
      v71 = 0;
      v76 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v71);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v20 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v21 = __rdtsc();
      v22 = v21 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v14 + 72) += v22;
      v23 = *(unsigned int *)(v14 + 80);
      v24 = v22 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v21;
      v25 = (v24 >> 16) + v23;
      if ( v25 > 0xFFFFFFFF )
        LODWORD(v25) = -1;
      v15 = (*(_BYTE *)(v14 + 2) & 0xBE) == 0;
      *(_DWORD *)(v14 + 80) = v25;
      if ( !v15 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v14, v22, 1LL);
      v46 = KeGetCurrentPrcb();
      v47 = (signed __int32 *)v46->SchedulerAssist;
      if ( v47 )
      {
        _m_prefetchw(v47);
        v48 = *v47;
        do
        {
          v49 = v48;
          v48 = _InterlockedCompareExchange(v47, v48 & 0xFFDFFFFF, v48);
        }
        while ( v49 != v48 );
        if ( (v48 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v20;
      if ( *(_BYTE *)(v20 + 388) == 1 )
        *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v20 + 388) = 2;
      *(_BYTE *)(v14 + 643) = 32;
      *(_BYTE *)(v14 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v76, v14);
      LOBYTE(v26) = CurrentIrql;
      v15 = (unsigned __int8)KiSwapContext(v14, v20, v26) == 0;
    }
    else
    {
      v15 = (*(_DWORD *)(v14 + 116) & 0x40) == 0;
    }
    if ( !v15 )
    {
      if ( KiIrqlFlags )
      {
        v50 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v50 - 2) <= 0xDu )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v15 = (v52[5] & 0xFFFF0003) == 0;
          v52[5] &= 0xFFFF0003;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v14 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v53 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v53 - 2) <= 0xDu )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    LOBYTE(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v6 )
    LOBYTE(v2) = EtwTracePriority(a1, 1328, v72, v6, 0LL);
  return (char)v2;
}
