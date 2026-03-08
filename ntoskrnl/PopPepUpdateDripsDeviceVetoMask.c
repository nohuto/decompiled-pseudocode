/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x14059D9D4
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1402F295C (PopPepUpdateIdleStateRefCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxReinitializeAccountingInstance @ 0x140393EC4 (PopFxReinitializeAccountingInstance.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140581D3C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14059CC00 (PopPepGetMinimumDevicePowerState.c)
 */

void __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v4; // al
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbp
  char DeepSleepPlatformStateIndex; // al
  unsigned int *v8; // r9
  char v9; // r15
  __int64 v10; // r11
  unsigned int *v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rbx
  int v14; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v20 = 0;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v5 = *(_DWORD *)(v2 + 144);
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v6 = v4;
  DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
  v9 = DeepSleepPlatformStateIndex;
  if ( a2 >= 2 )
  {
    v10 = a2 - 1;
    v11 = v8;
    do
    {
      *v11++ |= 1 << DeepSleepPlatformStateIndex;
      --v10;
    }
    while ( v10 );
  }
  v12 = *v8;
  PopPepUpdateIdleStateRefCount(v5, *v8, 1, (volatile signed __int32 *)(v2 + 184));
  PopPepUpdateIdleStateRefCount(v5, v12, 0, (volatile signed __int32 *)(v2 + 184));
  PopPepGetMinimumDevicePowerState(v2, v9, 0, &v20, 0LL);
  v13 = *(_QWORD *)(v2 + 32) + 600LL;
  KxAcquireSpinLock((PKSPIN_LOCK)v13);
  v14 = v20;
  if ( v20 == 1 )
  {
    PopFxReinitializeAccountingInstance(v13, 0);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 824LL), 0xFFFFF7FF);
  }
  else
  {
    PopFxReinitializeAccountingInstance(v13, 2);
    *(_DWORD *)(v13 + 12) = v14;
    *(_QWORD *)(v13 + 24) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v13 + 8) = 1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 824LL), 0x800u);
  }
  KxReleaseSpinLock((volatile signed __int64 *)v13);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
}
