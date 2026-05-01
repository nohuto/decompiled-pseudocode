/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&_::_Do_call @ 0x18031AE60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x1803112F4 (_lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_--operator().c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x18031D7E8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const___::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  ViewEventDispatcher *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IViewWrapperInternal *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] )
    {
      v4 = *(ViewEventDispatcher **)(a1 + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(v4, a2[1], &v8) >= 0 )
      {
        v5 = lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator()(*(unsigned int ***)(a1 + 16), &v8);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x460,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v5);
      }
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
}
