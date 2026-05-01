/*
 * XREFs of _CApplicationManager::OnDesiredTitlebarOverlayStateUpdated_::_1_::dtor$1 @ 0x1801BE552
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::OnDesiredTitlebarOverlayStateUpdated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
}
