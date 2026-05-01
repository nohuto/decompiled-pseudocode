/*
 * XREFs of _TabletModePositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x18046F8CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
