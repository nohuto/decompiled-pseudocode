__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  ULONG_PTR v11; // rbp
  bool v12; // zf
  int v13; // ecx
  struct _KPRCB *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int16 v21; // bp
  unsigned int *i; // rbx
  unsigned __int64 v23; // rdi
  bool v24; // zf
  unsigned __int8 j; // al
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  struct _KPRCB *v28; // rcx
  signed __int32 *v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  __int64 v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  void (__fastcall *v40)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
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
  _QWORD *v53; // [rsp+70h] [rbp-308h] BYREF
  _QWORD *v54; // [rsp+78h] [rbp-300h] BYREF
  __int64 *v55; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-2F0h] BYREF
  _DWORD v57[2]; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v58[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v59[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v60[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v61[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v62[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-2A8h]
  int v65; // [rsp+D8h] [rbp-2A0h] BYREF
  __int128 v66; // [rsp+DCh] [rbp-29Ch]
  __int128 v67; // [rsp+F0h] [rbp-288h] BYREF
  unsigned __int16 v68[136]; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v69[34]; // [rsp+210h] [rbp-168h] BYREF
  int v70; // [rsp+370h] [rbp-8h]

  ProcNumber = 0;
  v54 = 0LL;
  result = KiValidateCpuSetMasks(a3);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &ProcNumber);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        v27 = 4;
      else
        v27 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v27;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, *(unsigned int *)&ProcNumber, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, &v54);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    KiReadyDeferredReadyList(CurrentPrcb, &v54);
    v56 = 0LL;
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
          memset(v68, 0, 0x108uLL);
          v66 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
          {
            v65 = 3;
            ProcNumber = (struct _PROCESSOR_NUMBER)-1;
            v48 = 1;
            v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v40 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
            _disable();
            v40(*(_QWORD *)(HalpInterruptController + 16), v49, &v65, 47LL, &ProcNumber);
            if ( (v70 & 0x200) != 0 )
              _enable();
            return 0LL;
          }
          KeInitializeAffinityEx2((__int64)v68, 0x20u);
          KeAddProcessorAffinityEx(v68, KeGetPcr()->Prcb.Number);
          v49[0] = 0;
          ProcNumber = 0;
          v64 = 0LL;
          v67 = 0LL;
          v63 = 0LL;
          memset(v69, 0, 0x108uLL);
          v51 = 0;
          v50 = 0LL;
          if ( qword_140C621C8 )
          {
            qword_140C621C8(v68, 47LL);
          }
          else
          {
            KeInitializeAffinityEx2((__int64)v69, 0x20u);
            KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v68, v69, WORD1(v69[0]));
            v21 = v70;
            if ( HalpInterruptClusterModeEnabled )
            {
              for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
              {
                if ( (unsigned int)KeAndGroupAffinityEx(v68, (__int64)(i + 2), (char *)&v67) )
                {
                  v23 = v67;
                  LODWORD(v50) = 6;
                  v24 = (_QWORD)v67 == 0LL;
                  *((_QWORD *)&v50 + 1) = *i;
                  ProcNumber.Group = WORD4(v67);
                  for ( j = 0; ; ++j )
                  {
                    ProcNumber.Number = j;
                    if ( v24 )
                      break;
                    if ( (v23 & 1) != 0 )
                    {
                      v49[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                      HIDWORD(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 12);
                      j = ProcNumber.Number;
                    }
                    v23 >>= 1;
                    v24 = v23 == 0;
                  }
                  v57[0] = -1;
                  v57[1] = 1;
                  v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v41 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v42 = v41(*(_QWORD *)(HalpInterruptController + 16), v58, &v50, 47LL, v57);
                  if ( (v21 & 0x200) != 0 )
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
              KeInitializeEnumerationContext((__int64)&v63, (__int64)v68);
              while ( !(unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v63) )
              {
                if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0]) == 5 )
                  DWORD2(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
              }
              if ( DWORD2(v50) )
              {
                v59[0] = -1;
                v59[1] = 1;
                v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v43 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v44 = v43(*(_QWORD *)(HalpInterruptController + 16), v60, &v50, 47LL, v59);
                if ( (v21 & 0x200) != 0 )
                  _enable();
                if ( v44 < 0 )
                  return 0LL;
              }
            }
            *((_QWORD *)&v63 + 1) = v69[1];
            *(_QWORD *)&v63 = v69;
            v49[0] = 0;
            LOWORD(v64) = 0;
            do
            {
              if ( (unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v63) )
                break;
              LODWORD(v50) = 4;
              v61[0] = -1;
              v61[1] = 1;
              DWORD2(v50) = *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
              v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v46 = v45(*(_QWORD *)(HalpInterruptController + 16), v62, &v50, 47LL, v61);
              if ( (v21 & 0x200) != 0 )
                _enable();
            }
            while ( v46 >= 0 );
          }
        }
      }
    }
    else
    {
      v11 = *(_QWORD *)(CurrentPrcb + 8);
      if ( *(_QWORD *)(CurrentPrcb + 16) )
      {
        v13 = *(unsigned __int8 *)(v11 + 792) | *(unsigned __int8 *)(v11 + 870);
        v53 = 0LL;
        v55 = 0LL;
        if ( v13 != 63 )
        {
          v14 = KeGetCurrentPrcb();
          KiAbProcessThreadLocks(v11, 1u, 1, 1, (__int64)&v53, (__int64)&v55, (__int64)&v14->AbSelfIoBoostsList);
          KiAbPropagateBoosts(&v55, (__int64)&v14->AbSelfIoBoostsList, (__int64)&v53);
          KiReadyDeferredReadyList((__int64)v14, &v53);
        }
        v52 = 0;
        v56 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v52);
          while ( *(_QWORD *)(CurrentPrcb + 48) );
        }
        v15 = *(_QWORD *)(CurrentPrcb + 16);
        *(_QWORD *)(CurrentPrcb + 16) = 0LL;
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v16 = __rdtsc();
        v17 = v16 - *(_QWORD *)(CurrentPrcb + 33152);
        *(_QWORD *)(v11 + 72) += v17;
        v18 = *(unsigned int *)(v11 + 80);
        v19 = v17 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v16;
        v20 = (v19 >> 16) + v18;
        if ( v20 > 0xFFFFFFFF )
          LODWORD(v20) = -1;
        v12 = (*(_BYTE *)(v11 + 2) & 0xBE) == 0;
        *(_DWORD *)(v11 + 80) = v20;
        if ( !v12 )
        {
          LOBYTE(v16) = 1;
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v11, v17, v16);
        }
        v28 = KeGetCurrentPrcb();
        v29 = (signed __int32 *)v28->SchedulerAssist;
        if ( v29 )
        {
          _m_prefetchw(v29);
          v30 = *v29;
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange(v29, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
        _enable();
        *(_QWORD *)(CurrentPrcb + 8) = v15;
        if ( *(_BYTE *)(v15 + 388) == 1 )
          *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v15 + 388) = 2;
        *(_BYTE *)(v11 + 643) = 32;
        *(_BYTE *)(v11 + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, (__int64 *)&v56, v11);
        LOBYTE(v32) = CurrentIrql;
        v12 = (unsigned __int8)KiSwapContext(v11, v15, v32) == 0;
      }
      else
      {
        v12 = (*(_DWORD *)(v11 + 116) & 0x40) == 0;
      }
      if ( !v12 )
      {
        if ( KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v12 = (v35[5] & 0xFFFF0003) == 0;
            v35[5] &= 0xFFFF0003;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
