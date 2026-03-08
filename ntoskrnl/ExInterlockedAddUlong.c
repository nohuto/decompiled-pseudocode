/*
 * XREFs of ExInterlockedAddUlong @ 0x1403C9600
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1402E50A8 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  bool v6; // al
  ULONG v7; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  v7 = *Addend;
  *Addend += Increment;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return v7;
}
