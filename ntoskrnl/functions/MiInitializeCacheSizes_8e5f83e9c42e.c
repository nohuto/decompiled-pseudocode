__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // r8d
  unsigned int v5; // eax
  int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  _PROCESSOR_CACHE_TYPE Type; // eax
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140C65758 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_140C6F350 < 0x80000 )
      SecondLevelCacheSize = qword_140C6F350 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140C6577C = SecondLevelCacheSize;
  v3 = SecondLevelCacheSize >> 4;
  dword_140C65778 = SecondLevelCacheSize - 1;
  dword_140C65808 = SecondLevelCacheSize >> 4;
  v4 = SecondLevelCacheSize & 0xF;
  if ( v4 )
    dword_140C65808 = v3 + 1;
  v5 = v3 + 1;
  if ( !v4 )
    v5 = v3;
  if ( _BitScanReverse((unsigned int *)&v7, v5) )
    v5 = 1 << v7;
  dword_140C65808 = v5;
  MiInitializeLargePageColorSizes();
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 )
      {
        Type = Cache->Type;
        if ( Type == CacheData || Type == CacheUnified )
          dword_140C6575C = Cache->Size;
      }
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140C6575C < 0x4000 )
    dword_140C6575C = 0x4000;
  dword_140C6578C = 256;
  return result;
}
