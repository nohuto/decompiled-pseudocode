/*
 * XREFs of ExpDeleteMutant @ 0x140302960
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
