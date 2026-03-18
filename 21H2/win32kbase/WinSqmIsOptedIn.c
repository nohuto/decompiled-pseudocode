/*
 * XREFs of WinSqmIsOptedIn @ 0x1C0167D40
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C005BE90 (WinSqmIsOptedInEx.c)
 */

_BOOL8 WinSqmIsOptedIn()
{
  return WinSqmIsOptedInEx(1);
}
