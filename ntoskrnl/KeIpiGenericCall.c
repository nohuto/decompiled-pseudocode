/*
 * XREFs of KeIpiGenericCall @ 0x140396D40
 * Callers:
 *     HalpTscSynchronization @ 0x140396C20 (HalpTscSynchronization.c)
 *     KeOptimizeSpecCtrlSettings @ 0x140396CC4 (KeOptimizeSpecCtrlSettings.c)
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405082E4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050A60C (HalpTimerMeasureAllProcessorFrequencies.c)
 *     KeAdjustInterruptTime @ 0x140569D74 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 *     MiStackTheftFreezeProcessors @ 0x14062AF0C (MiStackTheftFreezeProcessors.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiWritePteHighLevel @ 0x14064BD10 (MiWritePteHighLevel.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 *     HalpLbrConfigurationWorker @ 0x140932E74 (HalpLbrConfigurationWorker.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8C444 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140A9C484 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x140A9C6A0 (KiUpdateSavedSupervisorState.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // r8
  ULONG v6; // ebp
  unsigned __int8 v7; // cl
  __int64 CurrentPrcb; // rcx
  ULONG_PTR v9; // rdi
  _DWORD *SchedulerAssist; // r10
  __int64 v12; // rdx
  _DWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  ULONG ActiveProcessorCount; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v5 == 12 )
          LODWORD(v12) = 4096;
        else
          v12 = (-1LL << (v5 + 1)) & 0x1FFC;
        SchedulerAssist[5] |= v12;
      }
    }
  }
  v22 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v6 )
    KiIpiSendPacket(
      1,
      0,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v22);
  v7 = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
  {
    v13 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v7 == 14 )
      LODWORD(v14) = 0x4000;
    else
      v14 = (-1LL << (v7 + 1)) & 0x7FFC;
    v13[5] |= v14;
  }
  ActiveProcessorCount = 0;
  v9 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v6 )
  {
    if ( CurrentIrql <= 0xCu )
    {
      if ( KiIrqlFlags )
      {
        CurrentPrcb = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(CurrentPrcb) = CurrentPrcb - 2;
          if ( (unsigned __int8)CurrentPrcb <= 0xDu )
          {
            CurrentPrcb = (__int64)KeGetCurrentPrcb();
            v15 = *(_QWORD *)(CurrentPrcb + 35000);
            v16 = (*(_DWORD *)(v15 + 20) & 0xFFFF1FFF) == 0;
            *(_DWORD *)(v15 + 20) &= 0xFFFF1FFF;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(0xCuLL);
    }
    KiIpiStallOnPacketTargetsPrcb(CurrentPrcb, (__int64)KeGetCurrentPrcb());
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiReverseStallIpiLock);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
