/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180152A94
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$1 @ 0x180158E4B (_CPinnedList--InternalModify_--_1_--dtor$1.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$22 @ 0x180158F47 (_CPinnedList--InternalModify_--_1_--dtor$22.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$2 @ 0x18015A8F4 (_CPinnedList--PinShellLink_--_1_--dtor$2.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x18015BE1C (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     _SetPinTimeForPinnedItem_::_1_::dtor$1 @ 0x18015BF73 (_SetPinTimeForPinnedItem_--_1_--dtor$1.c)
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x180174C10 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x180290269 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x180290275 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x1804A5767 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x1804A5773 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x1804A577F (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$6 @ 0x1804A5797 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
