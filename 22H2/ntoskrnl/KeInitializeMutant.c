/*
 * XREFs of KeInitializeMutant @ 0x140394E40
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((ULONG_PTR)Mutant, InitialOwner, 0LL, 0LL);
}
