/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18020620C
 * Callers:
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2268 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 *     ?PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800A8274 (-PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV-$set@V-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1800A99D4 (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 *     ?WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ @ 0x180116630 (-WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ.c)
 *     ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x1801503A4 (-IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1803D929C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1803D991C (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x1804A4B24 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1804E09DC (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801B1188 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v4, retaddr, 2, (int)a4);
}
