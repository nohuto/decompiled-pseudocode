/*
 * XREFs of ZwAccessCheck @ 0x14041B760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
