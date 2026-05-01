/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUMsgString@@P6AXPEAUMsgBuffer@@@Z$1?MsgRelease@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18032C2B4
 * Callers:
 *     _MapScenarioToErrorCodeForView_::_1_::dtor$0 @ 0x18032F06F (_MapScenarioToErrorCodeForView_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor$1 @ 0x1803D2616 (_KeyboardHosting--TabTipAdapter--SetInputAppAUMID_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgString *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgString *,MsgString *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgString *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgString *,MsgString *,0,std::nullptr_t>>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return MsgRelease(v1);
  return result;
}
