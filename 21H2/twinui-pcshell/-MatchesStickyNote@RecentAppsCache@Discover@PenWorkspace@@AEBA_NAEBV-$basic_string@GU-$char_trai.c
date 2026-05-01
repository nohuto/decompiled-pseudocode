/*
 * XREFs of ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180290FF4
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18028FFD8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(__int64 a1, _QWORD *a2)
{
  unsigned __int16 *v2; // r8
  char v3; // r11
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx

  v2 = *(unsigned __int16 **)(a1 + 208);
  v3 = 0;
  v4 = a2;
  if ( v2 && *v2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v2[v5] );
    v6 = a2[2];
    if ( v4[3] >= 8uLL )
      v4 = (_QWORD *)*v4;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v4, v6, v2, v5) )
      return 1;
  }
  return v3;
}
