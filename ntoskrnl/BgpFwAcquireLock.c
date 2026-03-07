void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rax

  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( !KeTestSpinLock(&qword_140D0C0B0) )
        ;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v2) = 4;
          if ( CurrentIrql != 2 )
            v2 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v2;
        }
      }
    }
    KxAcquireSpinLock(&qword_140D0C0B0);
    byte_140C709F4 = CurrentIrql;
  }
}
