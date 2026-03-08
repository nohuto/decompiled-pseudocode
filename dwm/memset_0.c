/*
 * XREFs of memset_0 @ 0x1400063A8
 * Callers:
 *     memcpy_s @ 0x140002A9C (memcpy_s.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003E08 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x140004EC0 (McGenControlCallbackV2.c)
 *     __scrt_fastfail @ 0x140005AC8 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140005C1C (__scrt_get_show_window_mode.c)
 *     memcpy_s_0 @ 0x140006C08 (memcpy_s_0.c)
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140007058 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@s.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140009DDC (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14000A11C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000A458 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x14000B130 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ModuleFailFastForHRESULT @ 0x14000BD40 (ModuleFailFastForHRESULT.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000CE78 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000DE60 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
