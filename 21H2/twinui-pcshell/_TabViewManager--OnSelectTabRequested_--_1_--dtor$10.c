/*
 * XREFs of _TabViewManager::OnSelectTabRequested_::_1_::dtor$10 @ 0x1802E31DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::OnSelectTabRequested_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
