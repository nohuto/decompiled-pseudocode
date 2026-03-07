PVOID CcAllocateAndZeroSharedCacheMapRaiseOnError()
{
  PVOID v0; // rbx

  v0 = ExAllocateFromLookasideListEx(&CcSharedCacheMapLookasideList);
  memset(v0, 0, 0x260uLL);
  return v0;
}
