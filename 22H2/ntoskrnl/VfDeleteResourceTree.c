/*
 * XREFs of VfDeleteResourceTree @ 0x140AE55B8
 * Callers:
 *     VfMiscPluginUnload @ 0x1405D25B0 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteResourceTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(qword_140D70750);
  result = (unsigned int)_InterlockedExchange(&ViResourceInitialized, 0);
  _InterlockedExchange(&ViResourceNotTracked, 0);
  return result;
}
