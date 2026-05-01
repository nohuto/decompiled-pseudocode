/*
 * XREFs of _TouchKeyboardExperienceManager::TerminateInputApplication_::_1_::dtor$2 @ 0x1803C368D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TerminateInputApplication_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
}
