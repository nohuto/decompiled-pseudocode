/*
 * XREFs of _CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor$2 @ 0x1801BE452
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 160));
}
