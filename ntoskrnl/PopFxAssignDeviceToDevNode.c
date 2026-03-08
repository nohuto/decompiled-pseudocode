/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x140393BD4
 * Callers:
 *     PopFxRegisterDevice @ 0x140836FBC (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  if ( a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFF7);
    *(_WORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFB);
  }
  v5 = *(_DWORD *)(a1 + 124);
  v6 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v6 - v5;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
}
