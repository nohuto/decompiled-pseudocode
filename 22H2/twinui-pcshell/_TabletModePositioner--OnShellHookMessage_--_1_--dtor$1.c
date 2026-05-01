/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$1 @ 0x18046973A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 40));
}
