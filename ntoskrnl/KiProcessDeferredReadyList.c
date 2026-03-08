/*
 * XREFs of KiProcessDeferredReadyList @ 0x140226BD0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeSetPriorityBoost @ 0x14035112C (KeSetPriorityBoost.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KeSetAffinityProcess @ 0x1403A9688 (KeSetAffinityProcess.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056C4D8 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeEnumerationContext @ 0x140236DE0 (KeInitializeEnumerationContext.c)
 *     KeInitializeAffinityEx2 @ 0x140237600 (KeInitializeAffinityEx2.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiProcessDeferredReadyList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbp
  __int64 result; // rax
  __int64 v6; // r14
  __int64 (__fastcall *v7)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // r10
  int v8; // ecx
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  bool v13; // zf
  struct _KPRCB *v14; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  __int64 v28; // rdx
  __int16 v29; // r14
  unsigned int *v30; // rsi
  unsigned __int64 v31; // rbp
  unsigned __int8 Number; // al
  __int64 (__fastcall *v33)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v34)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v35)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v36[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v38; // [rsp+4Ch] [rbp-31Ch]
  __int128 v39; // [rsp+50h] [rbp-318h] BYREF
  int v40; // [rsp+60h] [rbp-308h]
  int v41; // [rsp+68h] [rbp-300h] BYREF
  __int64 v42; // [rsp+70h] [rbp-2F8h] BYREF
  _DWORD v43[2]; // [rsp+78h] [rbp-2F0h] BYREF
  _DWORD v44[2]; // [rsp+80h] [rbp-2E8h] BYREF
  _DWORD v45[2]; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v46[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v47[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v48[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-2C0h] BYREF
  unsigned __int64 v50; // [rsp+B0h] [rbp-2B8h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-2B0h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-2A0h]
  int v53; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v54; // [rsp+D4h] [rbp-294h]
  __int128 v55; // [rsp+E8h] [rbp-280h] BYREF
  _BYTE v56[272]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v57[34]; // [rsp+210h] [rbp-158h] BYREF
  int v58; // [rsp+360h] [rbp-8h]

  v3 = a3;
  KiReadyDeferredReadyList(a1, a2);
  result = *(_QWORD *)(a1 + 16);
  v50 = 0LL;
  if ( (unsigned __int8)v3 < 2u )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      v8 = *(unsigned __int8 *)(v6 + 792) | *(unsigned __int8 *)(v6 + 870);
      v42 = 0LL;
      v49 = 0LL;
      if ( v8 != 63 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v6, 1, 1, 1, (__int64)&v42, (__int64)&v49, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v49, &CurrentPrcb->AbSelfIoBoostsList, &v42);
        KiReadyDeferredReadyList(CurrentPrcb, &v42);
      }
      v41 = 0;
      v50 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v10 = __rdtsc();
      v11 = v10 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v6 + 72) += v11;
      v12 = ((v11 * *(unsigned int *)(a1 + 33208)) >> 16) + *(unsigned int *)(v6 + 80);
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      *(_QWORD *)(a1 + 33152) = v10;
      v13 = (*(_BYTE *)(v6 + 2) & 0xBE) == 0;
      *(_DWORD *)(v6 + 80) = v12;
      if ( !v13 )
        KiEndThreadAccountingPeriodEx(a1, v6, v11, 1LL);
      v14 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v14->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v16 = *SchedulerAssist;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v6 + 643) = 32;
      *(_BYTE *)(v6 + 390) = v3;
      KiQueueReadyThread(a1, &v50, v6);
      if ( !(unsigned __int8)KiSwapContext(v6, v9, (unsigned __int8)v3) )
        goto LABEL_4;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v13 = (v21[5] & 0xFFFF0003) == 0;
          v21[5] &= 0xFFFF0003;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 116) & 0x40) == 0 )
        goto LABEL_4;
      if ( KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v22 - 2) <= 0xDu )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v13 = (v24[5] & 0xFFFF0003) == 0;
          v24[5] &= 0xFFFF0003;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(v6 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
LABEL_4:
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v25 - 2) <= 0xDu )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v13 = ((unsigned int)result & v27[5]) == 0;
        v27[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v3);
    return result;
  }
  if ( !result )
    return result;
  result = *(unsigned __int8 *)(a1 + 13242);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return result;
  }
  memset(v56, 0, 0x108uLL);
  v54 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v53 = 3;
    v7 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                               + 120);
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v36[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v36[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v38 = 1;
    _disable();
    result = v7(*(_QWORD *)(HalpInterruptController + 16), v36, &v53, (unsigned int)(v38 + 46), &ProcNumber);
    if ( (v58 & 0x200) != 0 )
      _enable();
    return result;
  }
  KeInitializeAffinityEx2(v56, 32LL);
  LODWORD(v28) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v56, v28);
  v36[0] = 0;
  ProcNumber = 0;
  v52 = 0LL;
  v55 = 0LL;
  v51 = 0LL;
  memset(v57, 0, 0x108uLL);
  v40 = 0;
  v39 = 0LL;
  if ( qword_140C621C8 )
    return qword_140C621C8(v56, 47LL);
  KeInitializeAffinityEx2(v57, 32LL);
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, v56, v57, WORD1(v57[0]));
  v29 = v58;
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      LODWORD(v39) = 5;
      DWORD2(v39) = 0;
      KeInitializeEnumerationContext(&v51, v56);
      while ( !(unsigned int)KeEnumerateNextProcessor(v36, &v51) )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v36[0]) == 5 )
          DWORD2(v39) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v36[0] + 8);
      }
      if ( DWORD2(v39) )
      {
        v45[0] = -1;
        v45[1] = 1;
        v46[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v46[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v34 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        result = v34(*(_QWORD *)(HalpInterruptController + 16), v46, &v39, 47LL, v45);
        if ( (v29 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          return result;
      }
    }
LABEL_72:
    *((_QWORD *)&v51 + 1) = v57[1];
    *(_QWORD *)&v51 = v57;
    v36[0] = 0;
    LOWORD(v52) = 0;
    do
    {
      result = KeEnumerateNextProcessor(v36, &v51);
      if ( (_DWORD)result )
        break;
      LODWORD(v39) = 4;
      v47[0] = -1;
      v47[1] = 1;
      DWORD2(v39) = *(_DWORD *)(HalpInterruptTargets + 24LL * v36[0] + 8);
      v48[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v48[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v35 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      result = v35(*(_QWORD *)(HalpInterruptController + 16), v48, &v39, 47LL, v47);
      if ( (v29 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
    return result;
  }
  v30 = (unsigned int *)HalpInterruptClusterData;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    goto LABEL_72;
  while ( 1 )
  {
    if ( (unsigned int)KeAndGroupAffinityEx(v56, v30 + 2, &v55) )
    {
      v31 = v55;
      LODWORD(v39) = 6;
      *((_QWORD *)&v39 + 1) = *v30;
      ProcNumber.Group = WORD4(v55);
      Number = 0;
      for ( ProcNumber.Number = 0; v31; ProcNumber.Number = Number )
      {
        if ( (v31 & 1) != 0 )
        {
          v36[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
          HIDWORD(v39) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v36[0] + 12);
          Number = ProcNumber.Number;
        }
        ++Number;
        v31 >>= 1;
      }
      v43[0] = -1;
      v43[1] = 1;
      v44[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v44[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v33 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      result = v33(*(_QWORD *)(HalpInterruptController + 16), v44, &v39, 47LL, v43);
      if ( (v29 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        return result;
    }
    v30 += 6;
    if ( (unsigned __int64)v30 >= HalpInterruptClusterDataEnd )
      goto LABEL_72;
  }
}
