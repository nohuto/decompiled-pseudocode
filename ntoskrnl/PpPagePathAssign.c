/*
 * XREFs of PpPagePathAssign @ 0x1408512D0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(void *a1)
{
  return PiPagePathSetState(a1);
}
