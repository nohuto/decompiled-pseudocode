/*
 * XREFs of ??1?$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803018EC
 * Callers:
 *     _TabShellHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x180302D5F (_TabShellHotKeyHandler_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180302B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 */

__int64 __fastcall wil::com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>::~com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(v1);
  return result;
}
