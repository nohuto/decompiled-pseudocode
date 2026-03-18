/*
 * XREFs of PpPagePathAssign @ 0x14084BB80
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(void *a1)
{
  return PiPagePathSetState(a1);
}
