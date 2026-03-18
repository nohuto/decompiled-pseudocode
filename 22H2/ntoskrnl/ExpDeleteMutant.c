/*
 * XREFs of ExpDeleteMutant @ 0x14028CA70
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14028CA88 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
