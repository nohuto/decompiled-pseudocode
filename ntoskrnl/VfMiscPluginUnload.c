/*
 * XREFs of VfMiscPluginUnload @ 0x1405D0100
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140ADF214 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AE15B8 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
