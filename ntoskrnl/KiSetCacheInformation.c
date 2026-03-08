/*
 * XREFs of KiSetCacheInformation @ 0x140A898B0
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KiSetCacheInformationIntel @ 0x140A899A0 (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x140A9C858 (KiSetCacheInformationAmd.c)
 */

__int64 KiSetCacheInformation()
{
  KPCR *Pcr; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  unsigned int v3; // esi
  _CACHE_DESCRIPTOR *Cache; // r8
  int v5; // r10d
  unsigned __int8 Associativity; // r9

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    result = KiSetCacheInformationAmd();
  }
  else
  {
    if ( (unsigned int)CurrentPrcb->CpuVendor - 2 > 1 )
      KeBugCheck(0x5Du);
    result = KiSetCacheInformationIntel();
  }
  v3 = 0;
  Cache = CurrentPrcb->Cache;
  Pcr->SecondLevelCacheSize = 0;
  v5 = 0;
  if ( CurrentPrcb->CacheCount )
  {
    while ( 1 )
    {
      if ( Cache->Level >= 2u )
      {
        result = (unsigned int)Cache->Type;
        if ( (_DWORD)result == 2 || !(_DWORD)result )
          break;
      }
LABEL_16:
      ++Cache;
      if ( ++v5 >= CurrentPrcb->CacheCount )
        return result;
    }
    Associativity = Cache->Associativity;
    if ( Associativity == 0xFF )
    {
      Associativity = 16;
    }
    else if ( !Associativity )
    {
LABEL_12:
      if ( Cache->LineSize > (unsigned int)KeLargestCacheLine )
        KeLargestCacheLine = Cache->LineSize;
      result = Cache->Size;
      if ( (unsigned int)result > KiLargestCacheSize )
        KiLargestCacheSize = Cache->Size;
      goto LABEL_16;
    }
    if ( Cache->Size / Associativity > v3 )
    {
      v3 = Cache->Size / Associativity;
      Pcr->SecondLevelCacheSize = Cache->Size;
      Pcr->SecondLevelCacheAssociativity = Associativity;
    }
    goto LABEL_12;
  }
  return result;
}
