/*
 * XREFs of ??R_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@QEBAXXZ @ 0x180136CBC
 * Callers:
 *     ??1?$lambda_call@V_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@details@wil@@QEAA@XZ @ 0x180135BF4 (--1-$lambda_call@V_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _lambda_9e2ff0c1d9fff4ebf0f553d417409e49_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  const WCHAR *v3; // rax
  bool v4; // cf
  PWSTR v5; // rbx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  _SHFILEOPSTRUCTW FileOp; // [rsp+38h] [rbp-48h] BYREF
  PWSTR ppszName; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( *(_QWORD *)a1 )
  {
    ppszName = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&ppszName,
      0LL);
    v2 = SHGetNameFromIDList(*(LPCITEMIDLIST *)a1, SIGDN_FILESYSPATH, &ppszName);
    if ( v2 >= 0 )
    {
      v3 = (const WCHAR *)(a1 + 8);
      v4 = *(_QWORD *)(a1 + 32) < 8uLL;
      memset(&FileOp, 0, sizeof(FileOp));
      FileOp.wFunc = 3;
      if ( !v4 )
        v3 = *(const WCHAR **)v3;
      FileOp.pFrom = v3;
      FileOp.fFlags = 1556;
      if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x317,
          (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x80004005LL);
      v5 = ppszName;
      v6 = PinManagerTelemetry::Provider();
      if ( *(_DWORD *)v6 > 5u )
      {
        v8 = (__int64)v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v6,
          (unsigned __int8 *)dword_1805A0C13,
          0LL,
          v7,
          (const WCHAR **)&v8);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x311,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppszName);
  }
}
