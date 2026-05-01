/*
 * XREFs of ??1?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1800E8428
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$38 @ 0x1800E7D4C (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$38.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::WindowData_::_1_::dtor$15 @ 0x1800F1D72 (_winrt--Windows--Internal--Shell--implementation--WindowData--WindowData_--_1_--dtor$15.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData_::_1_::dtor$0 @ 0x180210AEC (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--SelectionData_--_1_.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore_::_1_::dtor$0 @ 0x1802118F2 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--GetSelectionScore_-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<unsigned short *>::~vector<unsigned short *>(__int64 a1)
{
  return std::vector<void *>::_Tidy(a1);
}
