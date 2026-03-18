/*
 * XREFs of MiJumpStack @ 0x14062CFD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403C6090 (KeGenericCallDpcEx.c)
 */

char __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx((__int64)MiDoStackCopy, a1);
}
