/*
 * XREFs of PpPagePathAssign @ 0x140854B40
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(void *a1)
{
  return PiPagePathSetState(a1);
}
