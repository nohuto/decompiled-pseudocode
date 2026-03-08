/*
 * XREFs of KeInitializeMutant @ 0x1403D1610
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((__int64)Mutant, InitialOwner, 0, 0);
}
