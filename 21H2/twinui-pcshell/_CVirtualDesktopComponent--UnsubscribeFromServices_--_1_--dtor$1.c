/*
 * XREFs of _CVirtualDesktopComponent::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1804A1695
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopComponent::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 80));
}
