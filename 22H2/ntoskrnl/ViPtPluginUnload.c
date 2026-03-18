/*
 * XREFs of ViPtPluginUnload @ 0x140AE01B0
 * Callers:
 *     VfPoolTrackingEntry @ 0x1405D21B8 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140606CCC (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140ADFBF0 (ViPtDeleteAvlTrees.c)
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
