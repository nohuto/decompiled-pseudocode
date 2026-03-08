/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x140412370
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
