/*
 * XREFs of IsInsideUserApiHook @ 0x1C012DC58
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
