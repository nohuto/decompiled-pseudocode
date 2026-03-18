/*
 * XREFs of VfMajorInit @ 0x140A925C4
 * Callers:
 *     ViIovPluginUnload @ 0x140601C50 (ViIovPluginUnload.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *VfMajorInit()
{
  return memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}
