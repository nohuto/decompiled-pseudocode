/*
 * XREFs of _CControlCenterExperienceManager::OnEventQueued_::_1_::dtor$1 @ 0x180223800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CControlCenterExperienceManager::OnEventQueued_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
}
