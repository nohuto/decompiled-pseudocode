PVOID CcAllocatePrivateCacheMap()
{
  return ExAllocateFromLookasideListEx(&CcPrivateCacheMapLookasideList);
}
