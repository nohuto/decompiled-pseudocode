/*
 * XREFs of wil::details::ScopeExitFn__lambda_ff8bf4ad382d1625709f5fc5886deebf___::_ScopeExitFn__lambda_ff8bf4ad382d1625709f5fc5886deebf___ @ 0x1800D1E90
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1803CEE40 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize_::_1_::dtor$1 @ 0x1803CF25F (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedResize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_ff8bf4ad382d1625709f5fc5886deebf___::_ScopeExitFn__lambda_ff8bf4ad382d1625709f5fc5886deebf___(
        __int64 *a1)
{
  _BYTE *v2; // rdx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (_BYTE *)a1[1];
    LOBYTE(v2) = *v2;
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a1 + 512LL))(*a1, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x45D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
