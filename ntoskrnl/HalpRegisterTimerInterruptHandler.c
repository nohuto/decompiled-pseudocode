/*
 * XREFs of HalpRegisterTimerInterruptHandler @ 0x14051F21C
 * Callers:
 *     HalpSetSystemInformation @ 0x14085AF10 (HalpSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpRegisterTimerInterruptHandler(__int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD))
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140D180D0 )
  {
    if ( qword_140D180D0 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpTimerProfilingCallback = a1;
      if ( !a1 )
        qword_140D180D0 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpTimerProfilingCallback = a1;
    if ( a1 )
      qword_140D180D0 = KeGetCurrentThread()[1].CycleTime;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpPerfInterruptHandlerRegistrationLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v2;
}
