/*
 * XREFs of ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180099918
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _SearchAppExperienceManager::Show_::_1_::catch$14 @ 0x180176851 (_SearchAppExperienceManager--Show_--_1_--catch$14.c)
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803BEE48 (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1804C3710 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1804C3970 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::c_str(_QWORD *a1)
{
  if ( a1[3] >= 8uLL )
    return (_QWORD *)*a1;
  return a1;
}
