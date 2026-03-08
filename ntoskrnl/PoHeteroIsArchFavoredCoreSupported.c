/*
 * XREFs of PoHeteroIsArchFavoredCoreSupported @ 0x14040B854
 * Callers:
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x14037F8D8 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     PpmHeteroDetectHgsCores @ 0x14038F40C (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140595314 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmHeteroDetectFavoredCores @ 0x14079C25C (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

bool PoHeteroIsArchFavoredCoreSupported()
{
  return PpmHeteroArchFavoredCoreEnabled != 0;
}
