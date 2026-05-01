/*
 * XREFs of std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1800C86A8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$1 @ 0x180135743 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$1.c)
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C0010 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C01B0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$1 @ 0x180338893 (_ConnectedStandbyHelper--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
