__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 *ThreadCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  __int64 CurrentPrcb; // rsi
  ULONG_PTR v13; // rbp
  int v14; // ecx
  struct _KPRCB *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned int v26; // r8d
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  void (__fastcall *v35)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int16 v36; // bp
  unsigned int *i; // rbx
  unsigned __int64 v38; // rdi
  bool v39; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v41)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v42; // eax
  __int64 (__fastcall *v43)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v44; // eax
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v46; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-338h] BYREF
  int v48; // [rsp+44h] [rbp-334h]
  _DWORD v49[2]; // [rsp+48h] [rbp-330h] BYREF
  __int128 v50; // [rsp+50h] [rbp-328h] BYREF
  int v51; // [rsp+60h] [rbp-318h]
  int v52; // [rsp+68h] [rbp-310h] BYREF
  int v53; // [rsp+6Ch] [rbp-30Ch] BYREF
  _QWORD *v54; // [rsp+70h] [rbp-308h] BYREF
  _QWORD *v55; // [rsp+78h] [rbp-300h] BYREF
  __int64 *v56; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-2F0h] BYREF
  _DWORD v58[2]; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v59[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v60[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v61[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v62[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v63[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  __int128 v64; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-2A8h]
  int v66; // [rsp+D8h] [rbp-2A0h] BYREF
  __int128 v67; // [rsp+DCh] [rbp-29Ch]
  __int128 v68; // [rsp+F0h] [rbp-288h] BYREF
  unsigned __int16 v69[136]; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v70[34]; // [rsp+210h] [rbp-168h] BYREF
  int v71; // [rsp+370h] [rbp-8h]

  ProcNumber = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v55 = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &ProcNumber);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        v11 = 4;
      else
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v11;
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, *(_DWORD *)&ProcNumber, (__int64)a3, a2);
    KiUpdateThreadCpuSets(a1, &v55);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    KiReadyDeferredReadyList(CurrentPrcb, &v55);
    v57 = 0LL;
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
          memset(v69, 0, 0x108uLL);
          v67 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
          {
            KeInitializeAffinityEx2((__int64)v69, 0x20u);
            KeAddProcessorAffinityEx(v69, KeGetPcr()->Prcb.Number);
            v49[0] = 0;
            ProcNumber = 0;
            v65 = 0LL;
            v68 = 0LL;
            v64 = 0LL;
            memset(v70, 0, 0x108uLL);
            v51 = 0;
            v50 = 0LL;
            if ( qword_140C621C8 )
            {
              qword_140C621C8(v69, 47LL);
            }
            else
            {
              KeInitializeAffinityEx2((__int64)v70, 0x20u);
              KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v69, v70, WORD1(v70[0]));
              v36 = v71;
              if ( HalpInterruptClusterModeEnabled )
              {
                for ( i = (unsigned int *)HalpInterruptClusterData;
                      (unsigned __int64)i < HalpInterruptClusterDataEnd;
                      i += 6 )
                {
                  if ( (unsigned int)KeAndGroupAffinityEx(v69, (__int64)(i + 2), (char *)&v68) )
                  {
                    v38 = v68;
                    LODWORD(v50) = 6;
                    v39 = (_QWORD)v68 == 0LL;
                    *((_QWORD *)&v50 + 1) = *i;
                    ProcNumber.Group = WORD4(v68);
                    for ( j = 0; ; ++j )
                    {
                      ProcNumber.Number = j;
                      if ( v39 )
                        break;
                      if ( (v38 & 1) != 0 )
                      {
                        v49[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                        HIDWORD(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 12);
                        j = ProcNumber.Number;
                      }
                      v38 >>= 1;
                      v39 = v38 == 0;
                    }
                    v58[0] = -1;
                    v58[1] = 1;
                    v59[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v59[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v41 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    v42 = v41(*(_QWORD *)(HalpInterruptController + 16), v59, &v50, 47LL, v58);
                    if ( (v36 & 0x200) != 0 )
                      _enable();
                    if ( v42 < 0 )
                      return 0LL;
                  }
                }
              }
              else if ( !HalpInterruptPhysicalModeOnly )
              {
                LODWORD(v50) = 5;
                DWORD2(v50) = 0;
                KeInitializeEnumerationContext((__int64)&v64, (__int64)v69);
                while ( !(unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v64) )
                {
                  if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0]) == 5 )
                    DWORD2(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
                }
                if ( DWORD2(v50) )
                {
                  v60[0] = -1;
                  v60[1] = 1;
                  v61[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v61[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v43 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v44 = v43(*(_QWORD *)(HalpInterruptController + 16), v61, &v50, 47LL, v60);
                  if ( (v36 & 0x200) != 0 )
                    _enable();
                  if ( v44 < 0 )
                    return 0LL;
                }
              }
              *((_QWORD *)&v64 + 1) = v70[1];
              *(_QWORD *)&v64 = v70;
              v49[0] = 0;
              LOWORD(v65) = 0;
              do
              {
                if ( (unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v64) )
                  break;
                LODWORD(v50) = 4;
                v62[0] = -1;
                v62[1] = 1;
                DWORD2(v50) = *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
                v63[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v63[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v46 = v45(*(_QWORD *)(HalpInterruptController + 16), v63, &v50, 47LL, v62);
                if ( (v36 & 0x200) != 0 )
                  _enable();
              }
              while ( v46 >= 0 );
            }
          }
          else
          {
            v66 = 3;
            ProcNumber = (struct _PROCESSOR_NUMBER)-1;
            v48 = 1;
            v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v35 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
            _disable();
            v35(*(_QWORD *)(HalpInterruptController + 16), v49, &v66, 47LL, &ProcNumber);
            if ( (v71 & 0x200) != 0 )
              _enable();
          }
        }
      }
    }
    else
    {
      v13 = *(_QWORD *)(CurrentPrcb + 8);
      if ( *(_QWORD *)(CurrentPrcb + 16) )
      {
        v14 = *(unsigned __int8 *)(v13 + 792) | *(unsigned __int8 *)(v13 + 870);
        v54 = 0LL;
        v56 = 0LL;
        if ( v14 != 63 )
        {
          v15 = KeGetCurrentPrcb();
          KiAbProcessThreadLocks(v13, 1u, 1, 1, (__int64)&v54, (__int64)&v56, (__int64)&v15->AbSelfIoBoostsList);
          KiAbPropagateBoosts(&v56, (__int64)&v15->AbSelfIoBoostsList, (__int64)&v54);
          KiReadyDeferredReadyList((__int64)v15, &v54);
        }
        v53 = 0;
        v57 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v53);
          while ( *(_QWORD *)(CurrentPrcb + 48) );
        }
        v16 = *(_QWORD *)(CurrentPrcb + 16);
        *(_QWORD *)(CurrentPrcb + 16) = 0LL;
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v17 = __rdtsc();
        v18 = v17 - *(_QWORD *)(CurrentPrcb + 33152);
        *(_QWORD *)(v13 + 72) += v18;
        v19 = *(unsigned int *)(v13 + 80);
        v20 = v18 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v17;
        v21 = (v20 >> 16) + v19;
        if ( v21 > 0xFFFFFFFF )
          LODWORD(v21) = -1;
        v27 = (*(_BYTE *)(v13 + 2) & 0xBE) == 0;
        *(_DWORD *)(v13 + 80) = v21;
        if ( !v27 )
        {
          LOBYTE(v17) = 1;
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v13, v18, v17);
        }
        v22 = KeGetCurrentPrcb();
        v23 = (signed __int32 *)v22->SchedulerAssist;
        if ( v23 )
        {
          _m_prefetchw(v23);
          v24 = *v23;
          do
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
          }
          while ( v25 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
        _enable();
        *(_QWORD *)(CurrentPrcb + 8) = v16;
        if ( *(_BYTE *)(v16 + 388) == 1 )
          *(_DWORD *)(v16 + 132) = *(_DWORD *)(v16 + 132) - *(_DWORD *)(v16 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v16 + 388) = 2;
        *(_BYTE *)(v13 + 643) = 32;
        *(_BYTE *)(v13 + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, (__int64 *)&v57, v13);
        LOBYTE(v26) = CurrentIrql;
        v27 = (unsigned __int8)KiSwapContext(v13, v16, v26) == 0;
      }
      else
      {
        v27 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
      }
      if ( !v27 )
      {
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v28 - 2) <= 0xDu )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v27 = (v30[5] & 0xFFFF0003) == 0;
            v30[5] &= 0xFFFF0003;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v29);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v13 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v31 - 2) <= 0xDu )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
