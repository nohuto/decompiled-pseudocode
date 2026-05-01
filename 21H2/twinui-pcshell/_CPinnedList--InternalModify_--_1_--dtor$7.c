/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x180159003
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::InternalModify_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 160);
}
