/*
 * XREFs of VfMajorInit @ 0x140AD3FB4
 * Callers:
 *     ViIovPluginUnload @ 0x1405D1F70 (ViIovPluginUnload.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *VfMajorInit()
{
  return memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}
