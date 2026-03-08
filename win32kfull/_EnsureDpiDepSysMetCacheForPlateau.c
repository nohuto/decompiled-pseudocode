/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C074C
 * Callers:
 *     GetCaptionHeight @ 0x1C0044AA4 (GetCaptionHeight.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C0045B74 (SetTiledRect.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0045D3C (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1C01D06D0 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
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
