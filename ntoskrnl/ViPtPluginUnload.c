/*
 * XREFs of ViPtPluginUnload @ 0x140ADC1B0
 * Callers:
 *     VfPoolTrackingEntry @ 0x1405CFD08 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x14060487C (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
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
