/*
 * XREFs of KeInitializeMutantEx @ 0x1402D9800
 * Callers:
 *     NtCreateMutant @ 0x140761E00 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402D981C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiInitializeMutant(a1, a2, 0LL, a3);
}
