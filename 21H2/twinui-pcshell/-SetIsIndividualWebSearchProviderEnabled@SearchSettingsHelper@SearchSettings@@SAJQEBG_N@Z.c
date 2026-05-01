/*
 * XREFs of ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1800A9964
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A1A04 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::SetIsIndividualWebSearchProviderEnabled(LPCWSTR lpValueName)
{
  unsigned int v1; // eax
  unsigned int lpData; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 1;
  v1 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
         lpValueName,
         4u,
         &v5,
         4u);
  if ( v1 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1C0,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
             (const char *)v1,
             lpData);
  else
    return 0LL;
}
