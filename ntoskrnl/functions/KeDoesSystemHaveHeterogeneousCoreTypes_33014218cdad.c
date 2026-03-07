unsigned __int64 KeDoesSystemHaveHeterogeneousCoreTypes()
{
  if ( (unsigned __int8)PoHeteroIsArchFavoredCoreSupported() )
    return KeDetectHeterogeneousSets(0LL);
  else
    return ((unsigned __int64)KeFeatureBits >> 53) & 1;
}
