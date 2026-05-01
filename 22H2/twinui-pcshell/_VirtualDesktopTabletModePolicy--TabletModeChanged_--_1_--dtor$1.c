/*
 * XREFs of _VirtualDesktopTabletModePolicy::TabletModeChanged_::_1_::dtor$1 @ 0x1804AE83D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopTabletModePolicy::TabletModeChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
