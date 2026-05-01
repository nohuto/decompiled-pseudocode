/*
 * XREFs of _CApplicationManager::TerminateApplication_::_1_::dtor$3 @ 0x1801C39F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::TerminateApplication_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 128));
}
