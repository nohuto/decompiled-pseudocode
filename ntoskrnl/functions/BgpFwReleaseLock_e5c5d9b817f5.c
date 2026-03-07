char BgpFwReleaseLock()
{
  int v0; // eax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  LOBYTE(v0) = 0;
  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    v1 = (unsigned __int8)byte_140C709F4;
    LOBYTE(v0) = KxReleaseSpinLock((volatile signed __int64 *)&qword_140D0C0B0);
    if ( (unsigned __int8)v1 <= 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v0) = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v0) = v0 - 2;
          if ( (unsigned __int8)v0 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v0 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v4 = (v0 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v0;
            if ( v4 )
              LOBYTE(v0) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
  }
  return v0;
}
