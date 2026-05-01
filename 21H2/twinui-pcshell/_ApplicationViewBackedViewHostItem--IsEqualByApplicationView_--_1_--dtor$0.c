/*
 * XREFs of _ApplicationViewBackedViewHostItem::IsEqualByApplicationView_::_1_::dtor$0 @ 0x1802C9C66
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::IsEqualByApplicationView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
