/*
 * XREFs of ZwAccessCheck @ 0x140412310
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
