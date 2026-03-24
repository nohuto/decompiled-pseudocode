/*
 * XREFs of KeInitializeMutantEx @ 0x14035FC00
 * Callers:
 *     NtCreateMutant @ 0x1407114E0 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(ULONG_PTR a1)
{
  return KiInitializeMutant(a1);
}
