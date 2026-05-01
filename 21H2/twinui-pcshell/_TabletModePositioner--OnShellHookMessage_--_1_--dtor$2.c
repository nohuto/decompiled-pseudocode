/*
 * XREFs of _TabletModePositioner::OnShellHookMessage_::_1_::dtor$2 @ 0x180469AD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::OnShellHookMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 120));
}
