/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$3 @ 0x180469AE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
}
