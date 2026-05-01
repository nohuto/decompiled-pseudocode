/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18028FE28
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18028F82C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18029047C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18028FD34 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180290E44 (-MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV-$basic_string@GU-$char_trai.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1804DA0F8 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  RTL_SRWLOCK *v7; // rbx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v10; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  if ( CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
    goto LABEL_12;
  v5 = (__int64 *)*a2;
  if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(a1, *a2) )
    goto LABEL_12;
  v6 = (__int64)v5;
  if ( (unsigned __int64)v5[3] >= 8 )
    v6 = *v5;
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(v6, v5[2], L"Microsoft.Windows.Explorer", 26LL)
    || anonymous_namespace_::IsAppInBlackList(v5) )
  {
    goto LABEL_12;
  }
  v7 = (RTL_SRWLOCK *)(v5 + 6);
  AcquireSRWLockShared(v7);
  if ( *((int *)*a2 + 8) < 15 )
  {
    if ( v7 )
      ReleaseSRWLockShared(v7);
LABEL_12:
    v8 = (std::_Ref_count_base *)a2[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 0;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 1;
}
