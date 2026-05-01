/*
 * XREFs of _PeoplePaneViewManager::CloseView_::_1_::dtor$1 @ 0x1802CE438
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::CloseView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
