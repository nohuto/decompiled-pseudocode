/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18028DBD8
 * Callers:
 *     ?_Tidy@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXXZ @ 0x18008F42C (-_Tidy@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VAltTabWin.c)
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo__&__::_1_::catch$33 @ 0x18028DEC1 (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo_____--_Emplac.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x18028EA40 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V-$allocator@V-$sha.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x18028ED5C (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18028F9DC (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x18028FD94 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180291C44 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18029299C (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo__const_&__::_1_::catch$26 @ 0x1802CCE5B (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$29 @ 0x1802CCFA9 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_1802CCFA9.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1802CD5BC (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1802CE110 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x180321C28 (--1WindowEventDispatcher@@UEAA@XZ.c)
 *     _std::vector_std::shared_ptr_AltTabWindowHookData__std::allocator_std::shared_ptr_AltTabWindowHookData_____::_Emplace_reallocate_std::shared_ptr_AltTabWindowHookData__&__::_1_::catch$33 @ 0x18038EC3E (_std--vector_std--shared_ptr_AltTabWindowHookData__std--allocator_std--shared_ptr_AltTabWindowHo.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VAltTabWindowHookData@@@2@_K1@Z @ 0x180391144 (-_Change_array@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VA.c)
 *     ?erase@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@0@Z @ 0x18039187C (-erase@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VAltTabWin.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803B758C (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1803BD3D0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
