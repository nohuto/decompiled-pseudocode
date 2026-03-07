__int64 __fastcall KeSetUserGroupAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  __int64 v9; // r9
  ULONG_PTR v10; // rbp
  bool v11; // zf
  int v13; // ecx
  struct _KPRCB *v14; // rdi
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int16 v21; // bp
  unsigned int *i; // rbx
  unsigned __int64 v23; // rdi
  bool v24; // zf
  unsigned __int8 j; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  struct _KPRCB *v32; // rcx
  signed __int32 *v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // r8
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  void (__fastcall *v44)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v46; // eax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v48; // eax
  __int64 (__fastcall *v49)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v50; // eax
  _DWORD v51[2]; // [rsp+40h] [rbp-438h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-430h] BYREF
  int v53; // [rsp+4Ch] [rbp-42Ch]
  __int128 v54; // [rsp+50h] [rbp-428h] BYREF
  int v55; // [rsp+60h] [rbp-418h]
  int v56; // [rsp+68h] [rbp-410h] BYREF
  _QWORD *v57; // [rsp+70h] [rbp-408h] BYREF
  _QWORD *v58; // [rsp+78h] [rbp-400h] BYREF
  __int64 *v59; // [rsp+80h] [rbp-3F8h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-3F0h] BYREF
  _DWORD v61[2]; // [rsp+90h] [rbp-3E8h] BYREF
  _DWORD v62[2]; // [rsp+98h] [rbp-3E0h] BYREF
  _DWORD v63[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  _DWORD v64[2]; // [rsp+A8h] [rbp-3D0h] BYREF
  _DWORD v65[2]; // [rsp+B0h] [rbp-3C8h] BYREF
  _DWORD v66[2]; // [rsp+B8h] [rbp-3C0h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-3B8h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-3A8h]
  int v69; // [rsp+D8h] [rbp-3A0h] BYREF
  __int128 v70; // [rsp+DCh] [rbp-39Ch]
  __int128 v71; // [rsp+F0h] [rbp-388h] BYREF
  _DWORD v72[68]; // [rsp+100h] [rbp-378h] BYREF
  _DWORD v73[68]; // [rsp+210h] [rbp-268h] BYREF
  _QWORD v74[34]; // [rsp+320h] [rbp-158h] BYREF
  int v75; // [rsp+470h] [rbp-8h]

  memset(&v72[2], 0, 0x100uLL);
  if ( !KeVerifyGroupAffinity(a2, 1) )
    return 3221225485LL;
  v72[0] = 2097153;
  memset(&v72[1], 0, 0x104uLL);
  v4 = *(unsigned __int16 *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  if ( !(_WORD)v4 )
    goto LABEL_3;
  if ( HIWORD(v72[0]) > (unsigned __int16)v4 )
  {
    LOWORD(v72[0]) = v4 + 1;
LABEL_3:
    *(_QWORD *)&v72[2 * v4 + 2] |= v5;
  }
  v6 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v27) = 4;
    else
      v27 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v27;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v6 + 64));
  if ( (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)v72, (unsigned __int16 *)(v6 + 80)) )
  {
    if ( (unsigned int)KeIsEmptyAffinityEx(v72) )
      KiCopyAffinityEx((__int64)v72, HIWORD(v72[0]), (unsigned __int16 *)(v6 + 80));
    v58 = 0LL;
    KiSetAffinityThread(a1, (__int64)&v58, (unsigned __int16 *)v72);
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v6 + 64));
    KiReadyDeferredReadyList(CurrentPrcb, &v58);
    v60 = 0LL;
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
          memset(&v73[2], 0, 0x100uLL);
          v70 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
          {
            v69 = 3;
            ProcNumber = (struct _PROCESSOR_NUMBER)-1;
            v53 = 1;
            v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v44 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
            _disable();
            v44(*(_QWORD *)(HalpInterruptController + 16), v51, &v69, (unsigned int)(v53 + 46), &ProcNumber);
            if ( (v75 & 0x200) != 0 )
              _enable();
            return 0LL;
          }
          v73[0] = 2097153;
          memset(&v73[1], 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v73, KeGetPcr()->Prcb.Number);
          v51[0] = 0;
          ProcNumber = 0;
          v68 = 0LL;
          v71 = 0LL;
          v67 = 0LL;
          memset(&v74[1], 0, 0x100uLL);
          v55 = 0;
          v54 = 0LL;
          if ( qword_140C621C8 )
          {
            qword_140C621C8(v73, 47LL);
          }
          else
          {
            LODWORD(v74[0]) = 2097153;
            memset((char *)v74 + 4, 0, 0x104uLL);
            KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v73, v74, 0x20u);
            v21 = v75;
            if ( HalpInterruptClusterModeEnabled )
            {
              for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
              {
                if ( (unsigned int)KeAndGroupAffinityEx(v73, (__int64)(i + 2), (char *)&v71) )
                {
                  v23 = v71;
                  LODWORD(v54) = 6;
                  v24 = (_QWORD)v71 == 0LL;
                  *((_QWORD *)&v54 + 1) = *i;
                  ProcNumber.Group = WORD4(v71);
                  for ( j = 0; ; ++j )
                  {
                    ProcNumber.Number = j;
                    if ( v24 )
                      break;
                    if ( (v23 & 1) != 0 )
                    {
                      v51[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                      HIDWORD(v54) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 12);
                      j = ProcNumber.Number;
                    }
                    v23 >>= 1;
                    v24 = v23 == 0;
                  }
                  v61[0] = -1;
                  v61[1] = 1;
                  v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v46 = v45(*(_QWORD *)(HalpInterruptController + 16), v62, &v54, 47LL, v61);
                  if ( (v21 & 0x200) != 0 )
                    _enable();
                  if ( v46 < 0 )
                    return 0LL;
                }
              }
            }
            else if ( !HalpInterruptPhysicalModeOnly )
            {
              LODWORD(v54) = 5;
              DWORD2(v54) = 0;
              KeInitializeEnumerationContext((__int64)&v67, (__int64)v73);
              while ( !(unsigned int)KeEnumerateNextProcessor(v51, (unsigned __int16 **)&v67) )
              {
                if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0]) == 5 )
                  DWORD2(v54) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 8);
              }
              if ( DWORD2(v54) )
              {
                v63[0] = -1;
                v63[1] = 1;
                v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v48 = v47(*(_QWORD *)(HalpInterruptController + 16), v64, &v54, 47LL, v63);
                if ( (v21 & 0x200) != 0 )
                  _enable();
                if ( v48 < 0 )
                  return 0LL;
              }
            }
            *((_QWORD *)&v67 + 1) = v74[1];
            *(_QWORD *)&v67 = v74;
            v51[0] = 0;
            LOWORD(v68) = 0;
            do
            {
              if ( (unsigned int)KeEnumerateNextProcessor(v51, (unsigned __int16 **)&v67) )
                break;
              LODWORD(v54) = 4;
              v65[0] = -1;
              v65[1] = 1;
              DWORD2(v54) = *(_DWORD *)(HalpInterruptTargets + 24LL * v51[0] + 8);
              v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v49 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v50 = v49(*(_QWORD *)(HalpInterruptController + 16), v66, &v54, 47LL, v65);
              if ( (v21 & 0x200) != 0 )
                _enable();
            }
            while ( v50 >= 0 );
          }
        }
      }
    }
    else
    {
      v10 = *(_QWORD *)(CurrentPrcb + 8);
      if ( *(_QWORD *)(CurrentPrcb + 16) )
      {
        v13 = *(unsigned __int8 *)(v10 + 792) | *(unsigned __int8 *)(v10 + 870);
        v57 = 0LL;
        v59 = 0LL;
        if ( v13 != 63 )
        {
          v14 = KeGetCurrentPrcb();
          KiAbProcessThreadLocks(v10, 1u, 1, 1, (__int64)&v57, (__int64)&v59, (__int64)&v14->AbSelfIoBoostsList);
          KiAbPropagateBoosts(&v59, (__int64)&v14->AbSelfIoBoostsList, (__int64)&v57);
          KiReadyDeferredReadyList((__int64)v14, &v57);
        }
        v56 = 0;
        v60 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v56);
          while ( *(_QWORD *)(CurrentPrcb + 48) );
        }
        v15 = *(_QWORD *)(CurrentPrcb + 16);
        *(_QWORD *)(CurrentPrcb + 16) = 0LL;
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v16 = __rdtsc();
        v17 = v16 - *(_QWORD *)(CurrentPrcb + 33152);
        *(_QWORD *)(v10 + 72) += v17;
        v18 = *(unsigned int *)(v10 + 80);
        v19 = v17 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v16;
        v20 = (v19 >> 16) + v18;
        if ( v20 > 0xFFFFFFFF )
          LODWORD(v20) = -1;
        v11 = (*(_BYTE *)(v10 + 2) & 0xBE) == 0;
        *(_DWORD *)(v10 + 80) = v20;
        if ( !v11 )
        {
          LOBYTE(v9) = 1;
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v10, v17, v9);
        }
        v32 = KeGetCurrentPrcb();
        v33 = (signed __int32 *)v32->SchedulerAssist;
        if ( v33 )
        {
          _m_prefetchw(v33);
          v34 = *v33;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange(v33, v34 & 0xFFDFFFFF, v34);
          }
          while ( v35 != v34 );
          if ( (v34 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
        _enable();
        *(_QWORD *)(CurrentPrcb + 8) = v15;
        if ( *(_BYTE *)(v15 + 388) == 1 )
          *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v15 + 388) = 2;
        *(_BYTE *)(v10 + 643) = 32;
        *(_BYTE *)(v10 + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, (__int64 *)&v60, v10);
        LOBYTE(v36) = CurrentIrql;
        v11 = (unsigned __int8)KiSwapContext(v10, v15, v36) == 0;
      }
      else
      {
        v11 = (*(_DWORD *)(v10 + 116) & 0x40) == 0;
      }
      if ( !v11 )
      {
        if ( KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v37 - 2) <= 0xDu )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v11 = (v39[5] & 0xFFFF0003) == 0;
            v39[5] &= 0xFFFF0003;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v10 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v6 + 64));
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(CurrentIrql);
  return 3221225473LL;
}
