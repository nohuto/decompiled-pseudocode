__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  __int64 CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = (__int64)PsGetCurrentSilo();
  v3 = PdcCreateWatchdogAroundClientCall();
  if ( CurrentSilo == v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == v3 )
      return 0LL;
  }
  return 1LL;
}
