/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x1800938DF
 * Callers:
 *     __imp_load_RefreshImmersiveColorPolicyState @ 0x1800938D3 (__imp_load_RefreshImmersiveColorPolicyState.c)
 *     __imp_load_GetIsImmersiveColorUsingHighContrast @ 0x18009395E (__imp_load_GetIsImmersiveColorUsingHighContrast.c)
 *     __imp_load_GetColorFromPreference @ 0x180093970 (__imp_load_GetColorFromPreference.c)
 *     __imp_load_GetUserColorPreference @ 0x180093982 (__imp_load_GetUserColorPreference.c)
 *     __imp_load_GetThemeFont @ 0x180095066 (__imp_load_GetThemeFont.c)
 *     __imp_load_OpenThemeData @ 0x180095078 (__imp_load_OpenThemeData.c)
 *     __imp_load_DrawThemeBackground @ 0x18009508A (__imp_load_DrawThemeBackground.c)
 *     __imp_load_GetThemeColor @ 0x18009509C (__imp_load_GetThemeColor.c)
 *     __imp_load_CloseThemeData @ 0x1800950AE (__imp_load_CloseThemeData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
