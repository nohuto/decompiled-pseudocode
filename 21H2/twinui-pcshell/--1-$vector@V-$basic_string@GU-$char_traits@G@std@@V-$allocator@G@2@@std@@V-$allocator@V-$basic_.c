/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180209C38
 * Callers:
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$3 @ 0x18020A980 (_CustomShellManager--CustomShellManager_--_1_--dtor$3.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$0 @ 0x18025D5F9 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x18025D611 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x18025DC8F (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1804C3AA0 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$2 @ 0x1804C3C9B (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$2.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1804C71FA (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$1 @ 0x1804C7221 (_AppUsageTracker--GetActiveApps_--_1_--dtor$1.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1804C8FFC (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1804CC25C (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(_QWORD *a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
