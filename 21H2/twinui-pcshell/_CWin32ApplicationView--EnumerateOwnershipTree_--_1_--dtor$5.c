/*
 * XREFs of _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$5 @ 0x1802027D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(
           (__int64 *)(a2 + 192),
           (volatile int *)a2);
}
