LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 CurrentPrcb; // rsi
  struct _KTHREAD *v7; // r12
  int BasePriority; // eax
  LONG v9; // ecx
  int Saturation; // eax
  int v11; // edi
  char v12; // r8
  int v13; // ecx
  int v14; // ebx
  int v15; // r14d
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v17; // r9
  ULONG_PTR v18; // r14
  bool v19; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  void (__fastcall *v23)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  volatile unsigned __int64 CycleTime; // rbx
  __int64 CurrentRunTime; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r11
  struct _KPRCB *v31; // r8
  signed __int32 *v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned __int64 v35; // rcx
  int v36; // r8d
  int v37; // ecx
  __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  struct _KPRCB *v44; // r8
  signed __int32 *v45; // rdx
  __int64 v46; // r8
  signed __int32 v47; // eax
  signed __int32 v48; // ett
  struct _KPRCB *v49; // rdi
  unsigned int FrequencyBucket; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v54; // r9
  __int64 v55; // r10
  _BYTE *v56; // rax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // rcx
  _DWORD *v59; // rdx
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  __int16 v64; // r12
  unsigned int *v65; // rbx
  int v66; // r14d
  unsigned __int8 v67; // si
  unsigned __int64 v68; // rdi
  bool i; // zf
  __int64 (__fastcall *v70)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  int v71; // eax
  __int64 (__fastcall *v72)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v73; // eax
  __int64 (__fastcall *v74)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v75; // eax
  int v76; // [rsp+40h] [rbp-338h] BYREF
  int v77; // [rsp+44h] [rbp-334h] BYREF
  _DWORD v78[2]; // [rsp+48h] [rbp-330h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-328h] BYREF
  int v80; // [rsp+54h] [rbp-324h]
  int v81; // [rsp+58h] [rbp-320h]
  LONG v82; // [rsp+5Ch] [rbp-31Ch]
  __int128 v83; // [rsp+60h] [rbp-318h] BYREF
  int v84; // [rsp+70h] [rbp-308h]
  int v85; // [rsp+78h] [rbp-300h] BYREF
  int v86; // [rsp+7Ch] [rbp-2FCh] BYREF
  _QWORD *v87; // [rsp+80h] [rbp-2F8h] BYREF
  _QWORD *v88; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 *v89; // [rsp+90h] [rbp-2E8h] BYREF
  unsigned __int64 v90; // [rsp+98h] [rbp-2E0h] BYREF
  int v91; // [rsp+A0h] [rbp-2D8h] BYREF
  int v92; // [rsp+A4h] [rbp-2D4h]
  _DWORD v93[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v94[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v95[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v96[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v97[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  __int128 v98; // [rsp+D0h] [rbp-2A8h] BYREF
  __int64 v99; // [rsp+E0h] [rbp-298h]
  int v100; // [rsp+E8h] [rbp-290h] BYREF
  __int128 v101; // [rsp+ECh] [rbp-28Ch]
  __int128 v102; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v103[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v104[34]; // [rsp+220h] [rbp-158h] BYREF
  int v105; // [rsp+370h] [rbp-8h]

  Process = Thread->Process;
  v77 = 0;
  v76 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v88 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v22) = 4;
    else
      v22 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v22;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v85 = 0;
  v7 = *(struct _KTHREAD **)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v85);
    while ( Thread->ThreadLock );
  }
  BasePriority = Process->BasePriority;
  v81 = Thread->BasePriority;
  v9 = v81 - BasePriority;
  Saturation = Thread->Saturation;
  v82 = v9;
  if ( (_BYTE)Saturation )
    v82 = 16 * Saturation;
  v11 = 16;
  Thread->Saturation = 0;
  v12 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v12 = 1;
    if ( Increment <= 0 )
      v12 = -1;
    Thread->Saturation = v12;
  }
  v13 = Process->BasePriority;
  v14 = Increment + v13;
  v77 = Increment + v13;
  if ( (char)v13 >= 16 )
  {
    if ( v14 >= 16 )
    {
      v11 = Increment + v13;
      if ( v14 > 31 )
        v11 = 31;
    }
    v77 = v11;
    goto LABEL_88;
  }
  if ( v14 >= 16 )
  {
    v14 = 15;
    v15 = 15;
  }
  else
  {
    v15 = Increment + v13;
    if ( v14 > 0 )
      goto LABEL_11;
    v14 = 1;
    v15 = 1;
  }
  v77 = v14;
LABEL_11:
  if ( v12 )
  {
    v76 = v14;
    v11 = v14;
    goto LABEL_15;
  }
  v14 = v15 - v81 + (char)KiComputeNewPriority(Thread, 0LL);
  v76 = v14;
  if ( v14 >= 16 )
  {
    v11 = 15;
LABEL_88:
    v14 = v11;
    v76 = v11;
    goto LABEL_15;
  }
  v11 = v14;
  if ( v14 <= 0 )
  {
    v14 = 1;
    v11 = 1;
    v76 = 1;
  }
LABEL_15:
  KiSetBasePriorityAndClearDecrement((__int64)Thread, &v77, 0);
  KiAdjustRealtimePriorityFloor((ULONG_PTR)Thread, v14);
  if ( v11 != Thread->Priority )
  {
    if ( Thread != v7 || *(_BYTE *)(CurrentPrcb + 32) )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v24 = __rdtsc();
      v25 = v24 - *(_QWORD *)(CurrentPrcb + 33152);
      CycleTime = v25 + Thread->CycleTime;
      Thread->CycleTime = CycleTime;
      CurrentRunTime = Thread->CurrentRunTime;
      v28 = v25 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v24;
      v29 = (v28 >> 16) + CurrentRunTime;
      if ( v29 > 0xFFFFFFFF )
        LODWORD(v29) = -1;
      v19 = (Thread->Header.Size & 0xBE) == 0;
      Thread->CurrentRunTime = v29;
      if ( !v19 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, (__int64)Thread, v25, 0LL);
      v30 = __rdtsc();
      *(_QWORD *)(CurrentPrcb + 33400) += v30 - *(_QWORD *)(CurrentPrcb + 33152);
      if ( (Thread->Header.Size & 0x20) != 0 )
      {
        FrequencyBucket = PoGetFrequencyBucket(CurrentPrcb);
        ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(CurrentPrcb, v51, v52, FrequencyBucket);
        *(_QWORD *)(CurrentPrcb + 8 * (ProcessorEfficiencyClass + 2 * v54) + 33408) += v55;
      }
      if ( (Thread->Header.Size & 0x40) != 0 )
      {
        v56 = Thread->SchedulerAssist;
        if ( v56 )
          v56[64] = 1;
      }
      *(_QWORD *)(CurrentPrcb + 33152) = v30;
      if ( (Thread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(Thread, 0LL);
      v19 = *(_BYTE *)(CurrentPrcb + 6) == 0;
      *(_BYTE *)(CurrentPrcb + 32) = 0;
      if ( !v19 )
      {
        *(_BYTE *)(CurrentPrcb + 6) = 0;
        HalRequestSoftwareInterrupt(2);
      }
      v31 = KeGetCurrentPrcb();
      v32 = (signed __int32 *)v31->SchedulerAssist;
      if ( v32 )
      {
        _m_prefetchw(v32);
        v33 = *v32;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(v32, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
      _enable();
    }
    v35 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v36 = v76;
    Thread->QuantumTarget = v35;
    KiSetPriorityThread((__int64)Thread, (unsigned __int64)&v88, v36);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    Thread->ThreadLock = 0LL;
  KiReadyDeferredReadyList(CurrentPrcb, &v88);
  v90 = 0LL;
  if ( CurrentIrql >= 2u )
  {
    if ( *(_QWORD *)(CurrentPrcb + 16) && !*(_BYTE *)(CurrentPrcb + 13242) )
    {
      if ( *(_BYTE *)(CurrentPrcb + 32) )
      {
        *(_BYTE *)(CurrentPrcb + 6) = 1;
      }
      else
      {
        memset(&v103[1], 0, 0x100uLL);
        v101 = 0LL;
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
        {
          LODWORD(v103[0]) = 2097153;
          memset((char *)v103 + 4, 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v103, KeGetPcr()->Prcb.Number);
          v78[0] = 0;
          v99 = 0LL;
          v102 = 0LL;
          v98 = 0LL;
          memset(&v104[1], 0, 0x100uLL);
          v84 = 0;
          v83 = 0LL;
          if ( qword_140C621C8 )
          {
            qword_140C621C8(v103, 47LL);
          }
          else
          {
            LODWORD(v104[0]) = 2097153;
            memset((char *)v104 + 4, 0, 0x104uLL);
            KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v103, v104, 0x20u);
            v64 = v105;
            if ( HalpInterruptClusterModeEnabled )
            {
              v65 = (unsigned int *)HalpInterruptClusterData;
              ProcNumber = 0;
              while ( (unsigned __int64)v65 < HalpInterruptClusterDataEnd )
              {
                if ( (unsigned int)KeAndGroupAffinityEx(v103, (__int64)(v65 + 2), (char *)&v102) )
                {
                  LODWORD(v83) = 6;
                  v66 = 0;
                  v67 = 0;
                  *((_QWORD *)&v83 + 1) = *v65;
                  v68 = v102;
                  ProcNumber.Group = WORD4(v102);
                  for ( i = (_QWORD)v102 == 0LL; ; i = v68 == 0 )
                  {
                    ProcNumber.Number = v67;
                    if ( i )
                      break;
                    if ( (v68 & 1) != 0 )
                    {
                      v78[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v66 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v78[0] + 12);
                      HIDWORD(v83) = v66;
                    }
                    ++v67;
                    v68 >>= 1;
                  }
                  v91 = -1;
                  v92 = 1;
                  v93[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v93[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v70 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController
                                                                                              + 120);
                  _disable();
                  v71 = v70(*(_QWORD *)(HalpInterruptController + 16), v93, &v83, (unsigned int)(v92 + 46), &v91);
                  if ( (v64 & 0x200) != 0 )
                    _enable();
                  if ( v71 < 0 )
                    goto LABEL_24;
                }
                v65 += 6;
              }
            }
            else if ( !HalpInterruptPhysicalModeOnly )
            {
              *((_QWORD *)&v98 + 1) = v103[1];
              *(_QWORD *)&v98 = v103;
              LODWORD(v83) = 5;
              DWORD2(v83) = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(v78, (unsigned __int16 **)&v98) )
              {
                if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v78[0]) == 5 )
                  DWORD2(v83) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v78[0] + 8);
              }
              if ( DWORD2(v83) )
              {
                v94[0] = -1;
                v94[1] = 1;
                v95[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v95[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v72 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v73 = v72(*(_QWORD *)(HalpInterruptController + 16), v95, &v83, 47LL, v94);
                if ( (v64 & 0x200) != 0 )
                  _enable();
                if ( v73 < 0 )
                  goto LABEL_24;
              }
            }
            *((_QWORD *)&v98 + 1) = v104[1];
            *(_QWORD *)&v98 = v104;
            v78[0] = 0;
            LOWORD(v99) = 0;
            do
            {
              if ( (unsigned int)KeEnumerateNextProcessor(v78, (unsigned __int16 **)&v98) )
                break;
              LODWORD(v83) = 4;
              v96[0] = -1;
              v96[1] = 1;
              DWORD2(v83) = *(_DWORD *)(HalpInterruptTargets + 24LL * v78[0] + 8);
              v97[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v97[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v74 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v75 = v74(*(_QWORD *)(HalpInterruptController + 16), v97, &v83, 47LL, v96);
              if ( (v64 & 0x200) != 0 )
                _enable();
            }
            while ( v75 >= 0 );
          }
        }
        else
        {
          v100 = 3;
          ProcNumber = (struct _PROCESSOR_NUMBER)-1;
          v80 = 1;
          v78[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v78[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v23 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
          _disable();
          v23(*(_QWORD *)(HalpInterruptController + 16), v78, &v100, 47LL, &ProcNumber);
          if ( (v105 & 0x200) != 0 )
            _enable();
        }
      }
    }
  }
  else
  {
    v18 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v37 = *(unsigned __int8 *)(v18 + 792) | *(unsigned __int8 *)(v18 + 870);
      v87 = 0LL;
      v89 = 0LL;
      if ( v37 != 63 )
      {
        v49 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v18, 1u, 1, 1, (__int64)&v87, (__int64)&v89, (__int64)&v49->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v89, (__int64)&v49->AbSelfIoBoostsList, (__int64)&v87);
        KiReadyDeferredReadyList((__int64)v49, &v87);
      }
      v86 = 0;
      v90 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v86);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v38 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v39 = __rdtsc();
      v40 = v39 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v18 + 72) += v40;
      v41 = *(unsigned int *)(v18 + 80);
      v42 = v40 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v39;
      v43 = (v42 >> 16) + v41;
      if ( v43 > 0xFFFFFFFF )
        LODWORD(v43) = -1;
      v19 = (*(_BYTE *)(v18 + 2) & 0xBE) == 0;
      *(_DWORD *)(v18 + 80) = v43;
      if ( !v19 )
      {
        LOBYTE(v17) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v18, v40, v17);
      }
      v44 = KeGetCurrentPrcb();
      v45 = (signed __int32 *)v44->SchedulerAssist;
      if ( v45 )
      {
        _m_prefetchw(v45);
        v47 = *v45;
        do
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange(v45, v47 & 0xFFDFFFFF, v47);
        }
        while ( v48 != v47 );
        if ( (v47 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v38;
      if ( *(_BYTE *)(v38 + 388) == 1 )
        *(_DWORD *)(v38 + 132) = *(_DWORD *)(v38 + 132) - *(_DWORD *)(v38 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v38 + 388) = 2;
      *(_BYTE *)(v18 + 643) = 32;
      *(_BYTE *)(v18 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v90, v18);
      LOBYTE(v46) = CurrentIrql;
      v19 = (unsigned __int8)KiSwapContext(v18, v38, v46) == 0;
    }
    else
    {
      v19 = (*(_DWORD *)(v18 + 116) & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( KiIrqlFlags )
      {
        v57 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v57 - 2) <= 0xDu )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v19 = (v59[5] & 0xFFFF0003) == 0;
          v59[5] &= 0xFFFF0003;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v18 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v60 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v60 - 2) <= 0xDu )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_24:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, v81, v77, (__int64)&v76);
  return v82;
}
