/*
 * XREFs of _AccessibilityExperienceManager::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1803E0D85
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AccessibilityExperienceManager::UnsubscribeFromServices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 128));
}
