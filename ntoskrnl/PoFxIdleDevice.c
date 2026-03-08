/*
 * XREFs of PoFxIdleDevice @ 0x14020259C
 * Callers:
 *     PoFxAddDeviceRelation @ 0x1405855F0 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140586060 (PoFxRemoveDeviceRelation.c)
 *     PopFxClearDeviceConstraints @ 0x140586DE0 (PopFxClearDeviceConstraints.c)
 *     PopFxIdleDevicesFromSx @ 0x1405880C0 (PopFxIdleDevicesFromSx.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x14058DF74 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopPlIdleDeviceIterator @ 0x14059EE20 (PopPlIdleDeviceIterator.c)
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140685424 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1408632A0 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1408635A0 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140956564 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x14096B484 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14096C498 (PipProcessRestartPhase2.c)
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x140306A10 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rbp
  KIRQL v3; // al
  int v4; // edx
  unsigned __int64 v5; // rdi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rsi
  unsigned int i; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = (volatile LONG *)(v1 + 88);
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
      v4 = *(_DWORD *)(v1 + 120);
      v5 = v3;
      _m_prefetchw((const void *)(v1 + 296));
      v6 = *(_DWORD *)(v1 + 296);
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v6, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 824LL) & 1) == 0 )
      {
        *(_DWORD *)(v1 + 120) = v4 - 1;
        _m_prefetchw((const void *)(v1 + 296));
        v8 = *(_DWORD *)(v1 + 296);
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v8, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 4) != 0 )
        {
          v10 = *(_QWORD *)(v1 + 80);
          for ( i = 0; i < *(_DWORD *)(v10 + 828); ++i )
            PoFxIdleComponent(v10, i, 2LL);
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
    }
  }
}
