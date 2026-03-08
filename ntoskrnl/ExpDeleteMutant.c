/*
 * XREFs of ExpDeleteMutant @ 0x140292FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
