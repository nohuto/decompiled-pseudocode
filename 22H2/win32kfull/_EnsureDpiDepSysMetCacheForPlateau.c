/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BF5AC
 * Callers:
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     SetTiledRect @ 0x1C00ECFB8 (SetTiledRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1C01CF680 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BF620 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  v3 = 120LL * (int)GetDpiCacheSlot(a1) + 2284;
  do
  {
    if ( *(_DWORD *)(v3 + gpsi) == -1 )
      *(_DWORD *)(v3 + gpsi) = ScaleSystemMetricForDPIWithoutCache(v2, a1);
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 0x1E );
  return 1LL;
}
