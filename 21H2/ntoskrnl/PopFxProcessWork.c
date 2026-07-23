/*
 * XREFs of PopFxProcessWork @ 0x140281D14
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140281BAC (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140282390 (PopFxIdleWorkerTail.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140284B1C (PopFxDispatchPluginWorkOnce.c)
 *     PoFxCompleteIdleState @ 0x1403A67F0 (PoFxCompleteIdleState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140281AB8 (PopFxScheduleDeviceIdleTimer.c)
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402820E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140282554 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1402825D4 (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x140282DC8 (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140283C14 (PopFxCompleteDevicePowerRequired.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPluginComponentIdleState @ 0x1403A4AD4 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A62D4 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A6CB8 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C8824 (PopFxUpdateDeviceIdleTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14056A698 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140572BC0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopPepCompleteComponentIdleState @ 0x1405743D4 (PopPepCompleteComponentIdleState.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14057E050 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14057E0E4 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  char v9; // si
  KSPIN_LOCK *v10; // r14
  unsigned __int64 v11; // rbp
  char v12; // bl
  ULONG_PTR v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  BOOLEAN v21; // al
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbx
  int v26; // ecx
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  bool v32; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rbp
  signed __int32 v41; // ebx
  __int64 v42; // r9
  __int64 v43; // rsi
  unsigned int v44; // ebx
  __int64 v45; // rbx
  unsigned __int64 v46; // rsi
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  __int64 v49; // rbx
  NTSTATUS v50; // esi
  __int64 v51; // rax
  __int64 v52; // rdx
  int RemlockSize; // [rsp+20h] [rbp-88h]
  _QWORD v54[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v55; // [rsp+60h] [rbp-48h]
  int v56; // [rsp+64h] [rbp-44h]
  __int64 v57; // [rsp+C0h] [rbp+18h] BYREF

  v57 = 0LL;
  result = *a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
  while ( 1 )
  {
    v6 = *a2;
    if ( !(_DWORD)v6 )
    {
      v13 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_112;
      v14 = (unsigned int)a2[4];
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 828) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      _mm_lfence();
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 832) + 8 * v14);
      if ( *(_DWORD *)(v15 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)a2[4], 0LL);
      if ( *(int *)(v15 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 832) + 8 * v14), 1uLL);
      if ( (*(_DWORD *)(v15 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 832) + 8 * v14), 2uLL);
      if ( *(_DWORD *)(v15 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 832) + 8 * v14), 3uLL);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 200));
      if ( *(int *)(v15 + 216) > 0 )
      {
        *(_QWORD *)(v15 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v15 + 208) = 1;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 200));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v32 = (v36 & SchedulerAssist[5]) == 0;
            v17 = (unsigned int)v36 & SchedulerAssist[5];
            SchedulerAssist[5] = v17;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
      LOBYTE(v17) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v13 + 48), (unsigned int)v14, v17);
      v18 = *(void (__fastcall **)(_QWORD, _QWORD))(v13 + 112);
      if ( v18 )
        v18(*(_QWORD *)(v13 + 192), (unsigned int)v14);
      PopPepProcessEvent(*(_QWORD *)(v13 + 56), *(_QWORD *)(v13 + 56) + 200 * v14 + 184, 2, 3, RemlockSize, 0LL);
      result = PopFxCompleteComponentActivation(v13);
      v12 = 0;
      goto LABEL_18;
    }
    if ( (_DWORD)v6 != 1 )
      break;
    v23 = *((_QWORD *)a2 + 1);
    if ( BugCheckParameter2 )
LABEL_112:
      PopFxBugCheck(0x603uLL, BugCheckParameter2, v6, 0LL);
    v24 = (unsigned int)a2[4];
    if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 828) )
      PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
    _mm_lfence();
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 832) + 8 * v24);
    if ( (unsigned int)a2[5] >= *(_DWORD *)(v25 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 832) + 8 * v24), 0LL);
    v26 = a2[5];
    if ( v26 == *(_DWORD *)(v25 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 832) + 8 * v24), 1uLL);
    if ( v26 && *(_DWORD *)(v25 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 832) + 8 * v24), 2uLL);
    *(_DWORD *)(v25 + 152) = a2[5];
    *(_DWORD *)(v25 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v23 + 128))(
      *(_QWORD *)(v23 + 192),
      (unsigned int)v24,
      (unsigned int)a2[5]);
    v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 140), 0xFFFFFFFF);
    v28 = *(_QWORD *)(v23 + 48);
    if ( v27 == 1 )
    {
      PopDiagTraceFxComponentIdleState(v28, (unsigned int)v24, (unsigned int)a2[5]);
      result = PopPluginComponentIdleState(v23, (unsigned int)v24, v29, a2);
      v12 = result;
    }
    else
    {
      result = PopFxAddLogEntry(v28, (unsigned int)v24, 14LL);
      v12 = 0;
    }
LABEL_18:
    if ( !v12 )
      return result;
  }
  switch ( (_DWORD)v6 )
  {
    case 2:
      v7 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_112;
      v8 = *(_QWORD *)(v7 + 48);
      v9 = *((_BYTE *)a2 + 16);
      if ( v8 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v6) = 1;
        PopDiagTraceFxDevicePowerRequirement(v8, v6, a3);
      }
      v10 = (KSPIN_LOCK *)(v7 + 360);
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 360));
      if ( v9 )
      {
        *(_DWORD *)(v7 + 36) = 2;
        _m_prefetchw((const void *)(v7 + 32));
        v19 = *(_DWORD *)(v7 + 32);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v19 & 0xFFFFFF7F, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x80u) == 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 0LL);
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 4) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFFFFB);
          *(_DWORD *)(v7 + 40) = 0;
          v21 = KeCancelTimer((PKTIMER)(v7 + 368));
          _InterlockedAdd((volatile signed __int32 *)(v7 + 36), 0xFFFFFFFF);
          if ( !v21 )
            goto LABEL_15;
          v22 = PopFxCompleteDevicePowerRequired(v7);
        }
        else
        {
          if ( *(_DWORD *)(v7 + 40) )
            goto LABEL_15;
          v22 = PopFxDeliverDevicePowerRequired(v7);
        }
        v12 = v22;
      }
      else
      {
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 1uLL);
        PopPluginDevicePower(v7, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x80u);
        if ( *(_QWORD *)(v7 + 144) )
        {
          if ( *(_DWORD *)(v7 + 36) || *(_DWORD *)(v7 + 40) || (*(_DWORD *)(v7 + 32) & 4) != 0 )
            PopFxBugCheck(0x610uLL, 0LL, v7, 0LL);
          *(_DWORD *)(v7 + 40) = 2;
          if ( !PopFxScheduleDeviceIdleTimer(v7) )
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD))(v7 + 144))(*(_QWORD *)(v7 + 192));
            _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFFF) != 1 )
              PopFxAddLogEntry(*(_QWORD *)(v7 + 48), 0LL, 17LL);
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
        }
LABEL_15:
        v12 = 0;
      }
      KxReleaseSpinLock(v10);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v32 = ((unsigned int)result & v31[5]) == 0;
            a3 = (unsigned int)result & v31[5];
            v31[5] = a3;
            if ( v32 )
              result = KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(v11);
      goto LABEL_18;
    case 3:
      v49 = *((_QWORD *)a2 + 1);
      v50 = -1073741822;
      if ( *(_QWORD *)(v49 + 152) )
      {
        v50 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v49 + 240), 0LL, &Src, 1u, 0x20u);
        if ( v50 >= 0 )
        {
          v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v49 + 152))(
                  *(_QWORD *)(v49 + 192),
                  *((_QWORD *)a2 + 2),
                  *((_QWORD *)a2 + 4),
                  *((_QWORD *)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  *((_QWORD *)a2 + 7),
                  &v57);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 244), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v49 + 248), 0, 0);
        }
      }
      v51 = *(_QWORD *)(v49 + 56);
      v56 = 0;
      v55 = v50;
      v52 = *(_QWORD *)(v51 + 32);
      v54[0] = *(_QWORD *)(v52 + 72);
      v54[1] = *((_QWORD *)a2 + 2);
      v54[2] = *((_QWORD *)a2 + 3);
      v54[3] = v57;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v52 + 64) + 96LL))(15LL, v54);
    case 4:
      v45 = *((_QWORD *)a2 + 1);
      v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v45 + 360));
      if ( *((_BYTE *)a2 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v45 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v45 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v45);
      KxReleaseSpinLock((PKSPIN_LOCK)(v45 + 360));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v46 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v48 = v47->SchedulerAssist;
            v32 = ((unsigned int)result & v48[5]) == 0;
            v48[5] &= result;
            if ( v32 )
              result = KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v46);
      break;
    case 5:
      v43 = *((_QWORD *)a2 + 1);
      if ( !BugCheckParameter2 )
        goto LABEL_86;
      v44 = a2[4];
      if ( v44 >= *(_DWORD *)(v43 + 828) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      PopFxAddLogEntry(*(_QWORD *)(v43 + 48), v44, 18LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v43 + 56), v44);
    case 6:
      v37 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
      {
        v38 = (unsigned int)a2[4];
        if ( (unsigned int)v38 >= *(_DWORD *)(v37 + 828) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
        _mm_lfence();
        v39 = *(_QWORD *)(*(_QWORD *)(v37 + 832) + 8 * v38);
        v40 = *(_QWORD *)(v39 + 424);
        v41 = _InterlockedDecrement((volatile signed __int32 *)(v40 + 40));
        _InterlockedOr((volatile signed __int32 *)(v40 + 40), 0x20000000u);
        if ( (v41 & 0x8000000) == 0 )
          PopFxAddLogEntry(*(_QWORD *)(v37 + 48), v38, 20LL);
        PopDiagTraceFxPerfRequestProgress(v40, v41 & 7);
        LOBYTE(v42) = *((_BYTE *)a2 + 20);
        return PopFxCompleteComponentPerfState(v37, *(unsigned int *)(v39 + 16), *(_QWORD *)(v39 + 424), v42);
      }
LABEL_86:
      PopFxBugCheck(0x603uLL, 0LL, v6, 0LL);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)a2 + 1));
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*((_QWORD *)a2 + 1));
    default:
      return result;
  }
  return result;
}
