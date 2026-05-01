/*
 * XREFs of wil::details::ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___::_ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___ @ 0x1800CABF4
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180322D50 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$7 @ 0x180323254 (_WindowEventDispatcher--AppViewShowRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___::_ScopeExitFn__lambda_a98fac8bdfe3ef23c4958cf0fda53700___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 24LL))(*v1, 2147500037LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
