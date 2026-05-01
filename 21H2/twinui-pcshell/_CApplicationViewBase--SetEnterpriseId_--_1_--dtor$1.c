/*
 * XREFs of _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x180207320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CApplicationViewBase::SetEnterpriseId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(
           (__int64 *)(a2 + 64),
           (volatile int *)a2);
}
