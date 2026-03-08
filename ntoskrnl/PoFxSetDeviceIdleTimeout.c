/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x1402FFB70
 * Callers:
 *     DifPoFxSetDeviceIdleTimeoutWrapper @ 0x1405E7AD0 (DifPoFxSetDeviceIdleTimeoutWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1402FFBF4 (PopFxUpdateDeviceIdleTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = (volatile signed __int64 *)(a1 + 360);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 360));
  v6 = 0x3FFFFFFFFFFFFFFFLL;
  v7 = v5;
  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
    v6 = a2;
  *(_QWORD *)(a1 + 496) = v6;
  PopFxUpdateDeviceIdleTimer(a1);
  result = KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
