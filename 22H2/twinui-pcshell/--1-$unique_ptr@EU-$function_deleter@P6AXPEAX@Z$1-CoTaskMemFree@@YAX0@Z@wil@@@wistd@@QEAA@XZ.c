/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1802D9B90
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$2 @ 0x180138301 (_winrt--Windows--Internal--Shell--implementation--PinManager--CopyShortcut_--_1_--dtor$2.c)
 *     _GetPinnablePidl_::_1_::dtor$1 @ 0x180139FBC (_GetPinnablePidl_--_1_--dtor$1.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x18013A79F (_GetUnpackagedAppPinnableItem_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$4 @ 0x18013B15C (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$4.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x180151D55 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$6.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$7 @ 0x180151D61 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$7.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$10 @ 0x180151D85 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$10.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$4 @ 0x180153D3D (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$4.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x180154845 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$0.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x18015485D (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$6 @ 0x18015488D (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$6.c)
 *     _CBackupLocationManager::GetTombstonePath_::_1_::dtor$0 @ 0x180157C99 (_CBackupLocationManager--GetTombstonePath_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x180158E93 (_CPinnedList--InternalModify_--_1_--dtor$7.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$1 @ 0x180159316 (_CPinnedList--IsEmpty_--_1_--dtor$1.c)
 *     __lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator()_::_1_::dtor$0 @ 0x1802DAC9A (__lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator()_--_1_--dtor$0.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x18032D347 (_DeserializePropertySet_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
