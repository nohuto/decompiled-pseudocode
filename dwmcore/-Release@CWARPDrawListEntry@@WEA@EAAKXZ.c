/*
 * XREFs of ?Release@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x180119930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWARPDrawListEntry::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CHolographicInteropTaskQueue *)(a1 - 64));
}
