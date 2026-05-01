/*
 * XREFs of _KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor$1 @ 0x1803D2616
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgString *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgString *,MsgString *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgString *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgString *,MsgString *,0,std::nullptr_t>>>((__int64 *)(a2 + 32));
}
