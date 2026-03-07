PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  int v3; // edx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    CacheType = MmNonCached;
  return (PVOID)HalpMap(PhysicalAddress.LowPart, v3, CacheType, 0, 4);
}
