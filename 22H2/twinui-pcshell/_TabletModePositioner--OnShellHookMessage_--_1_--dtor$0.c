/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$0 @ 0x18046972E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 32));
}
