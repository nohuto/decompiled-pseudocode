char *__fastcall ViKeIrqlLogAndTrimMemory(char a1)
{
  char CurrentIrql; // di
  char *v4; // rsi

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = VfKeIrqlLogRaise(CurrentIrql, a1);
  if ( KeAreInterruptsEnabled() && (unsigned __int8)CurrentIrql < 2u && (unsigned __int8)a1 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory();
  }
  return v4;
}
