/*
 * XREFs of VfMajorInit @ 0x140ACFFB4
 * Callers:
 *     ViIovPluginUnload @ 0x1405CFAC0 (ViIovPluginUnload.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *VfMajorInit()
{
  return memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}
