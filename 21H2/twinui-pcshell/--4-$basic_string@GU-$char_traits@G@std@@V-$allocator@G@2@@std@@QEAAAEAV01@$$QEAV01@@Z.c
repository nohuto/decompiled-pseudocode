/*
 * XREFs of ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800DC954 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$?0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@QEAA@$$QEAU_Creator@_Dir_enum_impl@filesystem@1@AEBW4directory_options@41@@Z @ 0x180116B88 (--$-0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@-$_Ref_count_obj@U_Dir_.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180117254 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801249E0 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x180139C40 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FBB4 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1804C3D00 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1804CF3C8 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::wstring::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)a1);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a1;
}
