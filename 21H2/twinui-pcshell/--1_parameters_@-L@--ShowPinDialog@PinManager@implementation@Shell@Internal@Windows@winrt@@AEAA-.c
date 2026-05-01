/*
 * XREFs of ??1_parameters_@?L@??ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z@QEAA@XZ @ 0x180135B38
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$2 @ 0x18028A2C8 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog'::`11'::_parameters_::~_parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
