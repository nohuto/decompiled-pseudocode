/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x140519AA0
 * Callers:
 *     HalpGetCacheCoherency @ 0x14076431C (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
