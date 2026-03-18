/*
 * XREFs of VfDeleteResourceTree @ 0x140AA1678
 * Callers:
 *     VfMiscPluginUnload @ 0x140602260 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteResourceTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(qword_140D577D8);
  result = (unsigned int)_InterlockedExchange(&ViResourceInitialized, 0);
  _InterlockedExchange(&ViResourceNotTracked, 0);
  return result;
}
