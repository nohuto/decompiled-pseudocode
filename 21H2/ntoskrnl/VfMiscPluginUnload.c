/*
 * XREFs of VfMiscPluginUnload @ 0x140602260
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140A9F094 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AA1678 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
