void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((__int64)Mutant, InitialOwner, 0, 0);
}
