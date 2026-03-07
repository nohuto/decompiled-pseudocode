char __fastcall PoUserShutdownCancelled(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    LOBYTE(v3) = 1;
    return PopSwitchUpdateUserShutdownScenarioState(1LL, v3);
  }
  return result;
}
