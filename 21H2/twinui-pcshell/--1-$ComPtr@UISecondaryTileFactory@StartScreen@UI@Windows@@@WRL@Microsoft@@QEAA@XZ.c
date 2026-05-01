/*
 * XREFs of ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180135BEC
 * Callers:
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$5 @ 0x180151EB9 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$5.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$9 @ 0x180151EE9 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$9.c)
 *     _CTaskbandPin::v_TrackUnpinnedApp_::_1_::dtor$0 @ 0x18015223C (_CTaskbandPin--v_TrackUnpinnedApp_--_1_--dtor$0.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$2 @ 0x18015383E (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$2.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$3 @ 0x180153EA1 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$3.c)
 *     _CPinnedList::GenerateAppID_::_1_::dtor$0 @ 0x18015561C (_CPinnedList--GenerateAppID_--_1_--dtor$0.c)
 *     _CPinnedList::GetAppPathFromShortcut_::_1_::dtor$1 @ 0x1801557BD (_CPinnedList--GetAppPathFromShortcut_--_1_--dtor$1.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$0 @ 0x180156C76 (_GetPidlsFromTaskbarLayout_--_1_--dtor$0.c)
 *     _CPinnedList::GetState_::_1_::dtor$0 @ 0x180157C1B (_CPinnedList--GetState_--_1_--dtor$0.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$14 @ 0x180159057 (_CPinnedList--InternalModify_--_1_--dtor$14.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$16 @ 0x18015906F (_CPinnedList--InternalModify_--_1_--dtor$16.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$0 @ 0x18015947A (_CPinnedList--IsEmpty_--_1_--dtor$0.c)
 *     __GetAppIDFromIDList_::_1_::dtor$1 @ 0x18015E223 (__GetAppIDFromIDList_--_1_--dtor$1.c)
 *     _CPinnedList::s_RemoveDarwinShortcut_::_1_::dtor$0 @ 0x18015F761 (_CPinnedList--s_RemoveDarwinShortcut_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>()
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease();
}
