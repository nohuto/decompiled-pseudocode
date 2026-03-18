/*
 * XREFs of VfDeleteLookasideTree @ 0x140A9F094
 * Callers:
 *     VfMiscPluginUnload @ 0x140602260 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteLookasideTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(Table);
  result = (unsigned int)_InterlockedExchange(&ViLookasideInitialized, 0);
  _InterlockedExchange(&ViLookasideAllocationFailures, 0);
  return result;
}
