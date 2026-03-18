/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x14041B7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
