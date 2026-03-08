/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14060A630
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1402E50A8 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  bool v6; // al
  LARGE_INTEGER v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  v7 = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v7;
}
