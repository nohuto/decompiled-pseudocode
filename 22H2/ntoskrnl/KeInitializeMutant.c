/*
 * XREFs of KeInitializeMutant @ 0x1403D6B30
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14033ABEC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((__int64)Mutant, InitialOwner, 0, 0);
}
