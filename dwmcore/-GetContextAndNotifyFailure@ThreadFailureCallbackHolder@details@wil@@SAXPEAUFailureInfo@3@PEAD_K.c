/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x1800FFEDC
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800FFE70 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180195604 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  char v3; // bl
  __int64 v6; // rdi
  struct wil::FailureInfo *v7; // rsi
  char v8; // bp
  DWORD CurrentThreadId; // r10d
  __int64 i; // rdi
  struct wil::details::ThreadFailureCallbackHolder **v11; // rdi
  struct wil::details::ThreadFailureCallbackHolder *v12; // rdi
  char v13; // al

  v3 = 0;
  *a2 = 0;
  v6 = wil::details::g_pThreadFailureCallbacks;
  v7 = (struct wil::FailureInfo *)a1;
  v8 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xAuLL);
    for ( i = *(_QWORD *)(v6 + 8 * (CurrentThreadId % 0xAuLL)); ; i = *(_QWORD *)(i + 8) )
    {
      if ( !i )
      {
        v11 = 0LL;
        goto LABEL_5;
      }
      if ( *(_DWORD *)i == CurrentThreadId )
        break;
    }
    v11 = (struct wil::details::ThreadFailureCallbackHolder **)(i + 16);
LABEL_5:
    if ( v11 && *v11 )
    {
      *a2 = 0;
      if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(v7, *v11, a2, a3) )
        *((_QWORD *)v7 + 9) = a2;
      v12 = *v11;
      do
      {
        v13 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v12 + 1))(*((_QWORD *)v12 + 1), v7);
        v12 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v12 + 2);
        v8 |= v13;
      }
      while ( v12 );
    }
  }
  if ( wil::details::g_pfnTelemetryCallback )
  {
    if ( v8 || (*((_BYTE *)v7 + 4) & 2) != 0 )
      v3 = 1;
    LOBYTE(a1) = v3;
    wil::details::g_pfnTelemetryCallback(a1, v7);
  }
}
