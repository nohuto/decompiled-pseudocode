/*
 * XREFs of _VirtualDesktopController::RemoveDesktop_::_1_::dtor$2 @ 0x1803E70A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::RemoveDesktop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
