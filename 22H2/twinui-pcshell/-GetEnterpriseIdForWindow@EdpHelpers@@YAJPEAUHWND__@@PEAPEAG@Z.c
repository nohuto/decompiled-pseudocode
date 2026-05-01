/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180202FD8
 * Callers:
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x180066E50 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 *     _lambda_7dedf9f14c3362839610df2f12c2fb98_::operator() @ 0x180201C90 (_lambda_7dedf9f14c3362839610df2f12c2fb98_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800575A4 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x1801E9268 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801EB2E4 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180203770 (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x180203C0C (-IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, LPVOID *a2, unsigned __int16 **a3)
{
  unsigned int v5; // edx
  bool IsLocalOrRemoteDebuggerPresent; // al
  int ContextForWindow; // esi
  const char *v9; // r9
  unsigned __int16 **v10; // r8
  int ProcessImageName; // eax
  void *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r14
  DWORD LastError; // edi
  char *v17; // rdx
  _BYTE v18[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD dwProcessId; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  IsLocalOrRemoteDebuggerPresent = EdpHelpers::IsLocalOrRemoteDebuggerPresent(dwProcessId, v5);
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v18, IsLocalOrRemoteDebuggerPresent ? -1 : 5000);
  v21 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v21);
  if ( ContextForWindow == -2147024891 )
  {
    ContextForWindow = 0;
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, (unsigned int)&pv, v10);
    v12 = pv;
    v13 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v14 = 189LL;
      goto LABEL_10;
    }
    v15 = v21;
    if ( v21 )
    {
      LastError = GetLastError();
      EdpFreeContext(v15);
      SetLastError(LastError);
    }
    v21 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(v12, &v21);
    v13 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v14 = 191LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
        (const char *)(unsigned int)ProcessImageName);
      if ( v12 )
        CoTaskMemFree(v12);
      goto LABEL_21;
    }
    if ( !v12 )
    {
LABEL_16:
      v17 = *(char **)(v21 + 8);
      if ( v17 )
      {
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &pv,
          v17,
          0xFFFFFFFFFFFFFFFFuLL,
          v9);
        if ( !pv )
        {
          v13 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC9,
            (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
            (const char *)0x8007000ELL);
          goto LABEL_21;
        }
        *a2 = pv;
      }
      v13 = 0;
      goto LABEL_21;
    }
    CoTaskMemFree(v12);
  }
  if ( ContextForWindow >= 0 )
    goto LABEL_16;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC1,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
    (const char *)(unsigned int)ContextForWindow);
  v13 = ContextForWindow;
LABEL_21:
  if ( v21 )
    EdpFreeContext(v21);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v18);
  return v13;
}
