/*
 * XREFs of MiJumpStack @ 0x140535F70
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x14035E460 (KeGenericCallDpc.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
