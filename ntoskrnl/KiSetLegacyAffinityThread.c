/*
 * XREFs of KiSetLegacyAffinityThread @ 0x1402FDE2C
 * Callers:
 *     KeSetAffinityThread @ 0x14056CA20 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeEnumerationContext @ 0x140236DE0 (KeInitializeEnumerationContext.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  ULONG_PTR v12; // rbp
  bool v13; // zf
  int v15; // ecx
  struct _KPRCB *v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int16 v23; // bp
  unsigned int *i; // rbx
  unsigned __int8 Number; // al
  unsigned __int64 v26; // rdi
  bool j; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rdx
  struct _KPRCB *v30; // rcx
  signed __int32 *v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  __int64 v34; // r8
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  void (__fastcall *v42)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v43)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v44; // eax
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v46; // eax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v48; // eax
  _DWORD v49[2]; // [rsp+40h] [rbp-438h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-430h] BYREF
  int v51; // [rsp+4Ch] [rbp-42Ch]
  __int128 v52; // [rsp+50h] [rbp-428h] BYREF
  int v53; // [rsp+60h] [rbp-418h]
  int v54; // [rsp+68h] [rbp-410h] BYREF
  _QWORD *v55; // [rsp+70h] [rbp-408h] BYREF
  _QWORD *v56; // [rsp+78h] [rbp-400h] BYREF
  __int64 *v57; // [rsp+80h] [rbp-3F8h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-3F0h] BYREF
  _DWORD v59[2]; // [rsp+90h] [rbp-3E8h] BYREF
  _DWORD v60[2]; // [rsp+98h] [rbp-3E0h] BYREF
  _DWORD v61[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  _DWORD v62[2]; // [rsp+A8h] [rbp-3D0h] BYREF
  _DWORD v63[2]; // [rsp+B0h] [rbp-3C8h] BYREF
  _DWORD v64[2]; // [rsp+B8h] [rbp-3C0h] BYREF
  __int128 v65; // [rsp+C0h] [rbp-3B8h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-3A8h]
  int v67; // [rsp+D8h] [rbp-3A0h] BYREF
  __int128 v68; // [rsp+DCh] [rbp-39Ch]
  __int128 v69; // [rsp+F0h] [rbp-388h] BYREF
  _DWORD v70[68]; // [rsp+100h] [rbp-378h] BYREF
  _DWORD v71[68]; // [rsp+210h] [rbp-268h] BYREF
  _QWORD v72[34]; // [rsp+320h] [rbp-158h] BYREF
  int v73; // [rsp+470h] [rbp-8h]

  memset(&v70[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v70[0] = 2097153;
  memset(&v70[1], 0, 0x104uLL);
  v56 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v29) = 4;
    else
      v29 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v29;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(unsigned __int16 *)(a1 + 560);
  if ( LOWORD(v70[0]) <= (unsigned __int16)v8 )
  {
    if ( HIWORD(v70[0]) <= (unsigned __int16)v8 )
      goto LABEL_5;
    LOWORD(v70[0]) = v8 + 1;
  }
  *(_QWORD *)&v70[2 * v8 + 2] |= a2;
LABEL_5:
  KiAndAffinityEx((unsigned __int16 *)v70, (unsigned __int16 *)KeActiveProcessors, v70, 0x14u);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v70)
    && (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)v70, (unsigned __int16 *)(v4 + 80)) )
  {
    v9 = *(_WORD **)(a1 + 552);
    v10 = *(unsigned __int16 *)(a1 + 560);
    if ( (unsigned __int16)v10 < *v9 )
      v5 = *(_QWORD *)&v9[4 * v10 + 4];
    KiSetAffinityThread(a1, (__int64)&v56, (unsigned __int16 *)v70);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  KiReadyDeferredReadyList(CurrentPrcb, &v56);
  v58 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v12 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v15 = *(unsigned __int8 *)(v12 + 792) | *(unsigned __int8 *)(v12 + 870);
      v55 = 0LL;
      v57 = 0LL;
      if ( v15 != 63 )
      {
        v16 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v12, 1u, 1, 1, (__int64)&v55, (__int64)&v57, (__int64)&v16->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v57, (__int64)&v16->AbSelfIoBoostsList, (__int64)&v55);
        KiReadyDeferredReadyList((__int64)v16, &v55);
      }
      v54 = 0;
      v58 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v17 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v18 = __rdtsc();
      v19 = v18 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v12 + 72) += v19;
      v20 = *(unsigned int *)(v12 + 80);
      v21 = v19 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v18;
      v22 = (v21 >> 16) + v20;
      if ( v22 > 0xFFFFFFFF )
        LODWORD(v22) = -1;
      v13 = (*(_BYTE *)(v12 + 2) & 0xBE) == 0;
      *(_DWORD *)(v12 + 80) = v22;
      if ( !v13 )
      {
        LOBYTE(v11) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v12, v19, v11);
      }
      v30 = KeGetCurrentPrcb();
      v31 = (signed __int32 *)v30->SchedulerAssist;
      if ( v31 )
      {
        _m_prefetchw(v31);
        v32 = *v31;
        do
        {
          v33 = v32;
          v32 = _InterlockedCompareExchange(v31, v32 & 0xFFDFFFFF, v32);
        }
        while ( v33 != v32 );
        if ( (v32 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v17;
      if ( *(_BYTE *)(v17 + 388) == 1 )
        *(_DWORD *)(v17 + 132) = *(_DWORD *)(v17 + 132) - *(_DWORD *)(v17 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v17 + 388) = 2;
      *(_BYTE *)(v12 + 643) = 32;
      *(_BYTE *)(v12 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v58, v12);
      LOBYTE(v34) = CurrentIrql;
      v13 = (unsigned __int8)KiSwapContext(v12, v17, v34) == 0;
    }
    else
    {
      v13 = (*(_DWORD *)(v12 + 116) & 0x40) == 0;
    }
    if ( !v13 )
    {
      if ( KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v35 - 2) <= 0xDu )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v13 = (v37[5] & 0xFFFF0003) == 0;
          v37[5] &= 0xFFFF0003;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v12 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v38 - 2) <= 0xDu )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(CurrentIrql);
    return v5;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
    return v5;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return v5;
  }
  memset(&v71[2], 0, 0x100uLL);
  v68 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v67 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v42 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                              + 120);
    v51 = 1;
    _disable();
    v42(*(_QWORD *)(HalpInterruptController + 16), v49, &v67, 47LL, &ProcNumber);
    if ( (v73 & 0x200) != 0 )
      _enable();
  }
  else
  {
    v71[0] = 2097153;
    memset(&v71[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v71, KeGetPcr()->Prcb.Number);
    v49[0] = 0;
    ProcNumber = 0;
    v66 = 0LL;
    v69 = 0LL;
    v65 = 0LL;
    memset(&v72[1], 0, 0x100uLL);
    v53 = 0;
    v52 = 0LL;
    if ( qword_140C621C8 )
    {
      qword_140C621C8(v71, 47LL);
      return v5;
    }
    LODWORD(v72[0]) = 2097153;
    memset((char *)v72 + 4, 0, 0x104uLL);
    KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v71, v72, 0x20u);
    v23 = v73;
    if ( HalpInterruptClusterModeEnabled )
    {
      for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
      {
        if ( (unsigned int)KeAndGroupAffinityEx(v71, (__int64)(i + 2), (char *)&v69) )
        {
          LODWORD(v52) = 6;
          *((_QWORD *)&v52 + 1) = *i;
          ProcNumber.Group = WORD4(v69);
          Number = 0;
          v26 = v69;
          for ( j = (_QWORD)v69 == 0LL; ; j = v26 == 0 )
          {
            ProcNumber.Number = Number;
            if ( j )
              break;
            if ( (v26 & 1) != 0 )
            {
              v49[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
              HIDWORD(v52) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 12);
              Number = ProcNumber.Number;
            }
            ++Number;
            v26 >>= 1;
          }
          v59[0] = -1;
          v59[1] = 1;
          v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v43 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
          _disable();
          v44 = v43(*(_QWORD *)(HalpInterruptController + 16), v60, &v52, 47LL, v59);
          if ( (v23 & 0x200) != 0 )
            _enable();
          if ( v44 < 0 )
            return v5;
        }
      }
      goto LABEL_47;
    }
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_47;
    LODWORD(v52) = 5;
    DWORD2(v52) = 0;
    KeInitializeEnumerationContext((__int64)&v65, (__int64)v71);
    while ( !(unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v65) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0]) == 5 )
        DWORD2(v52) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
    }
    if ( !DWORD2(v52) )
      goto LABEL_47;
    v61[0] = -1;
    v61[1] = 1;
    v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
    _disable();
    v46 = v45(*(_QWORD *)(HalpInterruptController + 16), v62, &v52, 47LL, v61);
    if ( (v23 & 0x200) != 0 )
      _enable();
    if ( v46 >= 0 )
    {
LABEL_47:
      *((_QWORD *)&v65 + 1) = v72[1];
      *(_QWORD *)&v65 = v72;
      v49[0] = 0;
      LOWORD(v66) = 0;
      do
      {
        if ( (unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v65) )
          break;
        LODWORD(v52) = 4;
        v63[0] = -1;
        v63[1] = 1;
        DWORD2(v52) = *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
        v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v48 = v47(*(_QWORD *)(HalpInterruptController + 16), v64, &v52, 47LL, v63);
        if ( (v23 & 0x200) != 0 )
          _enable();
      }
      while ( v48 >= 0 );
    }
  }
  return v5;
}
