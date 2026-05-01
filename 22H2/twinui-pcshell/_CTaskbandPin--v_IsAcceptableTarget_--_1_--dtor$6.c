/*
 * XREFs of _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x180151D55
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 200);
}
