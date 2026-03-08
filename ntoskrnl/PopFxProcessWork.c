/*
 * XREFs of PopFxProcessWork @ 0x1403060C4
 * Callers:
 *     PoFxCompleteIdleState @ 0x1402EF9F0 (PoFxCompleteIdleState.c)
 *     PopFxDispatchPluginWorkOnce @ 0x14030541C (PopFxDispatchPluginWorkOnce.c)
 *     PopFxActivateComponentWorker @ 0x140305EB4 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopPluginComponentIdleState @ 0x1402EFA90 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1402EFCDC (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1402FFBF4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14030207C (PopFxDeliverDevicePowerRequired.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140304EE0 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140304FDC (PopFxScheduleDeviceIdleTimer.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1403064E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14030690C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x14030698C (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x140306D00 (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1405870F8 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140591744 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopPepCompleteComponentIdleState @ 0x14059C714 (PopPepCompleteComponentIdleState.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14059E7BC (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14059E858 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, ULONG_PTR *a2, __int64 a3)
{
  __int64 result; // rax
  int *v6; // rdi
  ULONG_PTR v7; // rdx
  char v8; // r13
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  char v12; // di
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  _DWORD *SchedulerAssist; // r8
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  BOOLEAN v23; // al
  char v24; // al
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rbx
  int v28; // ecx
  signed __int32 v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  bool v34; // zf
  ULONG_PTR v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rbp
  signed __int32 v39; // ebx
  __int64 v40; // r9
  ULONG_PTR v41; // rsi
  unsigned int v42; // ebx
  __int64 v43; // rbx
  KSPIN_LOCK *v44; // rbp
  unsigned __int64 v45; // rsi
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  ULONG_PTR v48; // rbx
  NTSTATUS v49; // esi
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v54; // eax
  _QWORD v55[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v56; // [rsp+60h] [rbp-48h]
  int v57; // [rsp+64h] [rbp-44h]
  __int64 v58; // [rsp+C0h] [rbp+18h] BYREF

  v58 = 0LL;
  result = *(int *)a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *(int *)a2, 0LL);
  v6 = (int *)(a2 + 1);
  while ( 1 )
  {
    v7 = *(int *)a2;
    v8 = 0;
    v9 = 1LL;
    if ( !(_DWORD)v7 )
    {
      v15 = *(_QWORD *)v6;
      if ( BugCheckParameter2 )
LABEL_112:
        PopFxBugCheck(0x603uLL, BugCheckParameter2, v7, 0LL);
      v16 = (unsigned int)v6[2];
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 828) )
        PopFxBugCheck(0x611uLL, 0LL, v15, v16);
      _mm_lfence();
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 832) + 8 * v16);
      if ( *(_DWORD *)(v17 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v16, 0LL);
      if ( *(int *)(v17 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v15 + 832) + 8 * v16), 1uLL);
      if ( (*(_DWORD *)(v17 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v15 + 832) + 8 * v16), 2uLL);
      if ( *(_DWORD *)(v17 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v15 + 832) + 8 * v16), 3uLL);
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 200));
      if ( *(_DWORD *)(v17 + 216) == 1 )
      {
        *(_QWORD *)(v17 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v17 + 208) = 1;
      }
      KxReleaseSpinLock((volatile signed __int64 *)(v17 + 200));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = (v54 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v54;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v18);
      LOBYTE(SchedulerAssist) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v15 + 48), (unsigned int)v16, SchedulerAssist);
      v20 = *(void (__fastcall **)(_QWORD, _QWORD))(v15 + 112);
      if ( v20 )
        v20(*(_QWORD *)(v15 + 192), (unsigned int)v16);
      PopPepProcessEvent(*(_QWORD *)(v15 + 56), *(_QWORD *)(v15 + 56) + 208 * v16 + 192, 2, 3);
      return PopFxCompleteComponentActivation(v15);
    }
    if ( (_DWORD)v7 != 1 )
      break;
    v25 = *(_QWORD *)v6;
    if ( BugCheckParameter2 )
      goto LABEL_112;
    v26 = (unsigned int)v6[2];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 828) )
      PopFxBugCheck(0x611uLL, 0LL, *(_QWORD *)v6, (unsigned int)v6[2]);
    _mm_lfence();
    v27 = *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26);
    if ( (unsigned int)v6[3] >= *(_DWORD *)(v27 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 0LL);
    v28 = v6[3];
    if ( v28 == *(_DWORD *)(v27 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 1uLL);
    if ( v28 && *(_DWORD *)(v27 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v25 + 832) + 8 * v26), 2uLL);
    *(_DWORD *)(v27 + 152) = v6[3];
    *(_DWORD *)(v27 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v25 + 128))(
      *(_QWORD *)(v25 + 192),
      (unsigned int)v26,
      (unsigned int)v6[3],
      1LL);
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 140), 0xFFFFFFFF);
    v30 = *(_QWORD *)(v25 + 48);
    if ( v29 == 1 )
    {
      PopDiagTraceFxComponentIdleState(v30, (unsigned int)v26, v6[3]);
      result = PopPluginComponentIdleState(v25, v26, v31, a2);
      v8 = result;
    }
    else
    {
      result = PopFxAddLogEntry(v30, (unsigned int)v26, 14LL, 0LL);
    }
LABEL_18:
    if ( !v8 )
      return result;
  }
  switch ( (_DWORD)v7 )
  {
    case 2:
      v10 = a2[1];
      if ( BugCheckParameter2 )
        goto LABEL_112;
      v11 = *(_QWORD *)(v10 + 48);
      v12 = *((_BYTE *)a2 + 16);
      if ( v11 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v7) = 1;
        PopDiagTraceFxDevicePowerRequirement(v11, v7, a3);
      }
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 360));
      if ( !v12 )
      {
        _m_prefetchw((const void *)(v10 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v10, 1uLL);
        PopPluginDevicePower(v10, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x80u);
        if ( *(_QWORD *)(v10 + 144) )
        {
          if ( *(_DWORD *)(v10 + 36) || *(_DWORD *)(v10 + 40) || (*(_DWORD *)(v10 + 32) & 4) != 0 )
            PopFxBugCheck(0x610uLL, 0LL, v10, 0LL);
          *(_DWORD *)(v10 + 40) = 2;
          if ( !PopFxScheduleDeviceIdleTimer(v10) )
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v10 + 48), 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD))(v10 + 144))(*(_QWORD *)(v10 + 192));
            _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x40u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) != 1 )
              PopFxAddLogEntry(*(_QWORD *)(v10 + 48), 0LL, 17LL, 0LL);
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v10 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x40u);
        }
        goto LABEL_16;
      }
      *(_DWORD *)(v10 + 36) = 2;
      _m_prefetchw((const void *)(v10 + 32));
      v21 = *(_DWORD *)(v10 + 32);
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), v21 & 0xFFFFFF7F, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v10, 0LL);
      _m_prefetchw((const void *)(v10 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v10 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v10 + 40) = 0;
        v23 = KeCancelTimer((PKTIMER)(v10 + 368));
        _InterlockedAdd((volatile signed __int32 *)(v10 + 36), 0xFFFFFFFF);
        if ( !v23 )
          goto LABEL_16;
        v24 = PopFxCompleteDevicePowerRequired(v10, (__int64)a2);
      }
      else
      {
        if ( *(_DWORD *)(v10 + 40) )
        {
LABEL_16:
          result = KxReleaseSpinLock((volatile signed __int64 *)(v10 + 360));
          if ( KiIrqlFlags )
          {
            result = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0
              && (unsigned __int8)result <= 0xFu
              && (unsigned __int8)v13 <= 0xFu
              && (unsigned __int8)result >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v34 = ((unsigned int)result & v33[5]) == 0;
              a3 = (unsigned int)result & v33[5];
              v33[5] = a3;
              if ( v34 )
                result = KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          __writecr8(v13);
          v6 = (int *)(a2 + 1);
          goto LABEL_18;
        }
        v24 = PopFxDeliverDevicePowerRequired(v10, (__int64)a2, v14);
      }
      v8 = v24;
      goto LABEL_16;
    case 3:
      v48 = *(_QWORD *)v6;
      v49 = -1073741822;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 152LL) )
      {
        v49 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v48 + 240), 0LL, &Src, 1u, 0x20u);
        if ( v49 >= 0 )
        {
          v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v48 + 152))(
                  *(_QWORD *)(v48 + 192),
                  *((_QWORD *)v6 + 1),
                  *((_QWORD *)v6 + 3),
                  *((_QWORD *)v6 + 4),
                  *((_QWORD *)v6 + 5),
                  *((_QWORD *)v6 + 6),
                  &v58);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 244), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v48 + 248), 0, 0);
        }
      }
      v50 = *(_QWORD *)(v48 + 56);
      v57 = 0;
      v56 = v49;
      v51 = *(_QWORD *)(v50 + 32);
      v55[0] = *(_QWORD *)(v51 + 72);
      v55[1] = *((_QWORD *)v6 + 1);
      v55[2] = *((_QWORD *)v6 + 2);
      v55[3] = v58;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)(v51 + 64) + 96LL))(
               15LL,
               v55,
               a3,
               v9);
    case 4:
      v43 = *(_QWORD *)v6;
      v44 = (KSPIN_LOCK *)(*(_QWORD *)v6 + 360LL);
      v45 = KeAcquireSpinLockRaiseToDpc(v44);
      if ( *((_BYTE *)v6 + 8) )
        _InterlockedOr((volatile signed __int32 *)(v43 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v43 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v43);
      result = KxReleaseSpinLock((volatile signed __int64 *)v44);
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v45 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
          v47 = v46->SchedulerAssist;
          v34 = ((unsigned int)result & v47[5]) == 0;
          v47[5] &= result;
          if ( v34 )
            result = KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      __writecr8(v45);
      break;
    case 5:
      v41 = *(_QWORD *)v6;
      if ( !BugCheckParameter2 )
        goto LABEL_80;
      v42 = v6[2];
      if ( v42 >= *(_DWORD *)(v41 + 828) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)v6, (unsigned int)v6[2]);
      PopFxAddLogEntry(*(_QWORD *)(v41 + 48), v42, 18LL, 1LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v41 + 56), v42);
    case 6:
      v35 = *(_QWORD *)v6;
      if ( BugCheckParameter2 )
      {
        v36 = (unsigned int)v6[2];
        if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 828) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)v6, (unsigned int)v6[2]);
        _mm_lfence();
        v37 = *(_QWORD *)(*(_QWORD *)(v35 + 832) + 8 * v36);
        v38 = *(_QWORD *)(v37 + 424);
        v39 = _InterlockedDecrement((volatile signed __int32 *)(v38 + 40));
        _InterlockedOr((volatile signed __int32 *)(v38 + 40), 0x20000000u);
        if ( (v39 & 0x8000000) == 0 )
          PopFxAddLogEntry(*(_QWORD *)(v35 + 48), v36, 20LL, 1LL);
        PopDiagTraceFxPerfRequestProgress(v38, v39 & 7, a3, v9);
        LOBYTE(v40) = *((_BYTE *)v6 + 12);
        return PopFxCompleteComponentPerfState(v35, *(unsigned int *)(v37 + 16), *(_QWORD *)(v37 + 424), v40);
      }
LABEL_80:
      PopFxBugCheck(0x603uLL, 0LL, v7, 0LL);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*(_QWORD *)v6);
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*(_QWORD *)v6);
    default:
      return result;
  }
  return result;
}
