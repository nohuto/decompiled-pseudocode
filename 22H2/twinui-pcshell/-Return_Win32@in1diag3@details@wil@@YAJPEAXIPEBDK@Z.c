/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180054A70 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x180054B38 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x18009A8BC (--$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1F80 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A04 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1800A9944 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Z @ 0x1800A9B4C (-SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV-$time_point@Ucl.c)
 *     ?CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B2078 (-CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?EnsureAccess@ShellFeedsEncryptionHelper@1@AEAAJPEAXPEAU_ACL@@KPEA_NPEAPEAU2@@Z @ 0x1800B2650 (-EnsureAccess@ShellFeedsEncryptionHelper@1@AEAAJPEAXPEAU_ACL@@KPEA_NPEAPEAU2@@Z.c)
 *     ?EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B27C4 (-EnsureAppContainerAccesses@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ??R_lambda_5a36663ea628b1a598e3b64b72faa27d_@@QEBAJXZ @ 0x18015FD4C (--R_lambda_5a36663ea628b1a598e3b64b72faa27d_@@QEBAJXZ.c)
 *     ??R?$__func@V_lambda_e664ca33da6e2184fee4274c0d8dddbf_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x18015FE90 (--R-$__func@V_lambda_e664ca33da6e2184fee4274c0d8dddbf_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801B1A3C (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18025A528 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_18025A528.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18026218C (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x180262F74 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z.c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x1802F3DE0 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x18033940C (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804A3FC0 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$CoTa.c)
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$CCoSimpleArray@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@@@@Z @ 0x1804A41E0 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$CCoSimpleArray@V-$NativeString@V-$Co.c)
 *     ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x1804A44D0 (-ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z.c)
 *     ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1804A49C0 (-WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z.c)
 *     ??R?$__func@V_lambda_c77ebd57e75c5492ee747e3492d1d178_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1804E8020 (--R-$__func@V_lambda_c77ebd57e75c5492ee747e3492d1d178_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801B0FD8 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, 1, (int)a4);
}
