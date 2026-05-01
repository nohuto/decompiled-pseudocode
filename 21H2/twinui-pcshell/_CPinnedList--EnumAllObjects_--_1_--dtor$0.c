/*
 * XREFs of _CPinnedList::EnumAllObjects_::_1_::dtor$0 @ 0x180155039
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::EnumAllObjects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CPinnedListEnum>::~ComPtr<CPinnedListEnum>((CPinnedListEnum **)(a2 + 40));
}
