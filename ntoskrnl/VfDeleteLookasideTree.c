/*
 * XREFs of VfDeleteLookasideTree @ 0x140ADF214
 * Callers:
 *     VfMiscPluginUnload @ 0x1405D0100 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteLookasideTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(Table);
  result = (unsigned int)_InterlockedExchange(&ViLookasideInitialized, 0);
  _InterlockedExchange(&ViLookasideAllocationFailures, 0);
  return result;
}
