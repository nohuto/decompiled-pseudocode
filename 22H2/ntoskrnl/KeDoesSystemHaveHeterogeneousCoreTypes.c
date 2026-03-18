/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403B6360
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x140A8E7A4 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     PoHeteroIsArchFavoredCoreSupported @ 0x140410B6C (PoHeteroIsArchFavoredCoreSupported.c)
 *     KeDetectHeterogeneousSets @ 0x14067E998 (KeDetectHeterogeneousSets.c)
 */

unsigned __int64 KeDoesSystemHaveHeterogeneousCoreTypes()
{
  if ( (unsigned __int8)PoHeteroIsArchFavoredCoreSupported() )
    return KeDetectHeterogeneousSets(0LL);
  else
    return ((unsigned __int64)KeFeatureBits >> 53) & 1;
}
