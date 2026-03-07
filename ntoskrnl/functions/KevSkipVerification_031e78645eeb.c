__int64 KevSkipVerification()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v1; // edx
  unsigned int v2; // ecx

  if ( KeGetCurrentIrql() < 2u )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  if ( !CurrentPrcb->DpcRoutineActive || (CurrentPrcb->DpcRequestSummary & 8) == 0 )
    return 0LL;
  if ( KiSerializeTimerExpiration )
    v2 = *(_DWORD *)(KiProcessorBlock[0] + 32276);
  else
    v2 = CurrentPrcb->TimerTable.TableState.LastTimerHand[1];
  LOBYTE(v1) = v2 + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18);
  return v1;
}
