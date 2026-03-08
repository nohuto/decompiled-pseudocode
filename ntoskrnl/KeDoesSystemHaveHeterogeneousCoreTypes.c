/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x14037F8D8
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x140A8B1B4 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     PoHeteroIsArchFavoredCoreSupported @ 0x14040B854 (PoHeteroIsArchFavoredCoreSupported.c)
 *     KeDetectHeterogeneousSets @ 0x14067C998 (KeDetectHeterogeneousSets.c)
 */

unsigned __int64 KeDoesSystemHaveHeterogeneousCoreTypes()
{
  if ( (unsigned __int8)PoHeteroIsArchFavoredCoreSupported() )
    return KeDetectHeterogeneousSets(0LL);
  else
    return ((unsigned __int64)KeFeatureBits >> 53) & 1;
}
