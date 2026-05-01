/*
 * XREFs of _GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowFrameStyleInternal__::_1_::dtor$1 @ 0x18031E999
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowFrameStyleInternal__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
