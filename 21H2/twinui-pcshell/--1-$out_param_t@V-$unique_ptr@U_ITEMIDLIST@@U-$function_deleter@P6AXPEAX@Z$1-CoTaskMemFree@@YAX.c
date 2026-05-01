/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90
 * Callers:
 *     ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x180138020 (-CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$pair@V-$unique_pt.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$3 @ 0x18013847D (_winrt--Windows--Internal--Shell--implementation--PinManager--CopyShortcut_--_1_--dtor$3.c)
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x18013953C (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18013A050 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     _GetPinnablePidl_::_1_::dtor$2 @ 0x18013A153 (_GetPinnablePidl_--_1_--dtor$2.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18013A6CC (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$3 @ 0x18013A91B (_GetUnpackagedAppPinnableItem_--_1_--dtor$3.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013B080 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$5 @ 0x18013B2D8 (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$5.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180151560 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$8 @ 0x180151EDD (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$8.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$11 @ 0x180151F01 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$11.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180153B40 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$5 @ 0x180153EB9 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$5.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$1 @ 0x1801549C1 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$1.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$3 @ 0x1801549D9 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$3.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$7 @ 0x180154A09 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$7.c)
 *     ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180157CA4 (-GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$8 @ 0x18015900F (_CPinnedList--InternalModify_--_1_--dtor$8.c)
 *     ?IsEmpty@CPinnedList@@UEAAJPEAH@Z @ 0x180159390 (-IsEmpty@CPinnedList@@UEAAJPEAH@Z.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$2 @ 0x180159492 (_CPinnedList--IsEmpty_--_1_--dtor$2.c)
 *     ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x1801596A0 (-IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 *     __lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator()_::_1_::dtor$1 @ 0x1802DAF16 (__lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
