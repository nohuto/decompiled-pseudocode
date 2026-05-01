/*
 * XREFs of ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180135A7C
 * Callers:
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$5 @ 0x180151D49 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$5.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$9 @ 0x180151D79 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$9.c)
 *     _CTaskbandPin::v_TrackUnpinnedApp_::_1_::dtor$0 @ 0x1801520CC (_CTaskbandPin--v_TrackUnpinnedApp_--_1_--dtor$0.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$2 @ 0x1801536CE (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$2.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$3 @ 0x180153D31 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$3.c)
 *     _CPinnedList::GenerateAppID_::_1_::dtor$0 @ 0x1801554AC (_CPinnedList--GenerateAppID_--_1_--dtor$0.c)
 *     _CPinnedList::GetAppPathFromShortcut_::_1_::dtor$1 @ 0x18015564D (_CPinnedList--GetAppPathFromShortcut_--_1_--dtor$1.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$0 @ 0x180156B06 (_GetPidlsFromTaskbarLayout_--_1_--dtor$0.c)
 *     _CPinnedList::GetState_::_1_::dtor$0 @ 0x180157AAB (_CPinnedList--GetState_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$14 @ 0x180158EE7 (_CPinnedList--InternalModify_--_1_--dtor$14.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$16 @ 0x180158EFF (_CPinnedList--InternalModify_--_1_--dtor$16.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$0 @ 0x18015930A (_CPinnedList--IsEmpty_--_1_--dtor$0.c)
 *     __GetAppIDFromIDList_::_1_::dtor$1 @ 0x18015E0B3 (__GetAppIDFromIDList_--_1_--dtor$1.c)
 *     _CPinnedList::s_RemoveDarwinShortcut_::_1_::dtor$0 @ 0x18015F5F1 (_CPinnedList--s_RemoveDarwinShortcut_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>()
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease();
}
