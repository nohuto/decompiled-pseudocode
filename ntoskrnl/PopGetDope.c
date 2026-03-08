/*
 * XREFs of PopGetDope @ 0x1403BF328
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140368240 (PoRegisterDeviceForIdleDetection.c)
 *     PopAssociateThermalRequest @ 0x14084BAD0 (PopAssociateThermalRequest.c)
 *     PoVolumeDevice @ 0x14087017C (PoVolumeDevice.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140980178 (PopOrphanCoolingExtension.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool2; // rax
  void *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    Pool2 = ExAllocatePool2(64LL, 96LL, 1162891076LL);
    v4 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 52) = 0;
      *(_DWORD *)(Pool2 + 56) = 0;
      *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
      *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
      *(_QWORD *)(Pool2 + 24) = a1;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
