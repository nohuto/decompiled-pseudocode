/*
 * XREFs of ExInitializeRundownProtectionCacheAware @ 0x1406F3C80
 * Callers:
 *     <none>
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x14028E210 (KeGetRecommendedSharedDataAlignment.c)
 */

void __stdcall ExInitializeRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, SIZE_T RunRefSize)
{
  unsigned int v2; // esi
  ULONG RecommendedSharedDataAlignment; // r9d
  _EX_RUNDOWN_REF *v4; // rdi
  unsigned int Number; // r8d
  unsigned int v7; // r9d
  int v8; // edx

  v2 = RunRefSize - 24;
  RecommendedSharedDataAlignment = 8;
  v4 = (_EX_RUNDOWN_REF *)&RunRefCacheAware[1];
  if ( (_DWORD)RunRefSize == 32 )
  {
    Number = 1;
  }
  else
  {
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
    v4 = (_EX_RUNDOWN_REF *)(~(unsigned __int64)(RecommendedSharedDataAlignment - 1) & ((unsigned __int64)v4
                                                                                      + RecommendedSharedDataAlignment
                                                                                      - 1));
    Number = v2 / RecommendedSharedDataAlignment - 1;
  }
  RunRefCacheAware->RunRefSize = RecommendedSharedDataAlignment;
  v7 = 0;
  RunRefCacheAware->RunRefs = v4;
  RunRefCacheAware->Number = Number;
  for ( RunRefCacheAware->PoolToFree = (void *)195938833; v7 < Number; Number = RunRefCacheAware->Number )
  {
    v8 = v7 % Number;
    ++v7;
    *(unsigned __int64 *)((char *)&RunRefCacheAware->RunRefs->Count + RunRefCacheAware->RunRefSize * v8) = 0LL;
  }
}
