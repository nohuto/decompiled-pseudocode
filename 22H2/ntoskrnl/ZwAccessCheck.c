/*
 * XREFs of ZwAccessCheck @ 0x1403F9A20
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
