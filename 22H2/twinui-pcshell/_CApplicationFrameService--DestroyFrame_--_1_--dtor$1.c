/*
 * XREFs of _CApplicationFrameService::DestroyFrame_::_1_::dtor$1 @ 0x1801E4C4B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationFrameService::DestroyFrame_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 32));
}
