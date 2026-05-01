/*
 * XREFs of _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$5 @ 0x180153EB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 56);
}
