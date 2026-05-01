/*
 * XREFs of ??1CPinList@@QEAA@XZ @ 0x180152D74
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153480 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$3 @ 0x18015384A (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$3.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180156F60 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     _CPinnedList::GetPinnedItem_::_1_::dtor$0 @ 0x180156FFC (_CPinnedList--GetPinnedItem_--_1_--dtor$0.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180157010 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     _CPinnedList::GetPinnedItemForAppID_::_1_::dtor$0 @ 0x1801570AC (_CPinnedList--GetPinnedItemForAppID_--_1_--dtor$0.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$5 @ 0x180158FEB (_CPinnedList--InternalModify_--_1_--dtor$5.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1801595A0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _CPinnedList::IsPinned_::_1_::dtor$0 @ 0x180159619 (_CPinnedList--IsPinned_--_1_--dtor$0.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159900 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     _CPinnedList::ItemChangeNotify_::_1_::dtor$0 @ 0x180159B78 (_CPinnedList--ItemChangeNotify_--_1_--dtor$0.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$3 @ 0x18015AA70 (_CPinnedList--PinShellLink_--_1_--dtor$3.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B5C0 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     _CPinnedList::Resolve_::_1_::dtor$0 @ 0x18015B7D7 (_CPinnedList--Resolve_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     DSA_EnumCallback @ 0x18014FB64 (DSA_EnumCallback.c)
 *     DSA_Destroy @ 0x1804E7AE0 (DSA_Destroy.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPinList::~CPinList(CPinList *this)
{
  struct _DSA *v2; // rdi

  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 1);
  v2 = *(struct _DSA **)this;
  if ( *(_QWORD *)this )
  {
    DSA_EnumCallback(*(HDSA *)this, PINENTRY::DestroyCallback, 0LL);
    DSA_Destroy(v2);
    *(_QWORD *)this = 0LL;
  }
}
