/*
 * XREFs of _TabletModePositioner::ControlGained_::_1_::dtor$10 @ 0x18046532A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::ControlGained_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
