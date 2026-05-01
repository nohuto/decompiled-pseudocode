/*
 * XREFs of _TabletModePositioner::CleanupBackgroundViews_::_1_::dtor$0 @ 0x1804647CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::CleanupBackgroundViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 40));
}
