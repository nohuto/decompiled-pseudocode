/*
 * XREFs of _CPinnedList::IsEmpty_::_1_::dtor$1 @ 0x180159316
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::IsEmpty_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 80);
}
