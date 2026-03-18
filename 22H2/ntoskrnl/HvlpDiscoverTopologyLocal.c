/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140941440
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x140941458 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
