/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14093E420
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14093E438 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
