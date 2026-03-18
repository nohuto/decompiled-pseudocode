/*
 * XREFs of ViPtPluginUnload @ 0x140A9E0D0
 * Callers:
 *     VfPoolTrackingEntry @ 0x140601DB0 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x14063A5D8 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 */

void ViPtPluginUnload()
{
  ExClearPoolFlags(16);
  if ( (VfOptionFlags & 0x1000) != 0 )
    ViPtDeleteAvlTrees();
  if ( VfPoolTraces )
  {
    ExFreePoolWithTag(VfPoolTraces, 0x6E496956u);
    VfPoolTraces = 0LL;
  }
  VfPoolTracesLength = 0;
  VfPoolTracesIndex = 0;
}
