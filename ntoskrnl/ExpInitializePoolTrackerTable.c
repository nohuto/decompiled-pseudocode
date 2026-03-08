/*
 * XREFs of ExpInitializePoolTrackerTable @ 0x14039FCEC
 * Callers:
 *     ExInitializePoolTracker @ 0x140B63C80 (ExInitializePoolTracker.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x1403B489C (ExAllocateHeapPages.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x140768AB0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 ExpInitializePoolTrackerTable()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // r8
  unsigned __int64 v3; // rcx

  if ( PoolTrackTableSize )
  {
    v0 = 64LL;
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v3, PoolTrackTableSize);
      v0 = 1LL << v3;
    }
    goto LABEL_10;
  }
  v0 = 4096LL;
  PoolTrackTableSize = 4096LL;
  if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0LL) <= 0x10000 )
  {
    v0 = 512LL;
    goto LABEL_10;
  }
  while ( 1 )
  {
    if ( v0 + 1 <= 0x333333333333333LL )
    {
      PoolTrackTable = ExAllocateHeapPages(0x333333333333333LL, (80 * v0 + 4175) & 0xFFFFFFFFFFFFF000uLL);
      if ( PoolTrackTable )
      {
        PoolTrackTableMask = PoolTrackTableSize - 1;
        v1 = 5 * ++PoolTrackTableSize;
        memset((void *)PoolTrackTable, 0, 16 * v1);
        return 0LL;
      }
      v0 = PoolTrackTableSize;
      if ( PoolTrackTableSize == 1 )
        break;
    }
    v0 >>= 1;
LABEL_10:
    PoolTrackTableSize = v0;
  }
  return 3221225626LL;
}
