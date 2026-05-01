/*
 * XREFs of _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x18034AB24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c848fc40f8d66460ef5049a4e343f17___::Run @ 0x18034B300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c848fc40f8d66460ef5049a4e343f17___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A40 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C9830 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801E3FF8 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x1801E9268 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801EB2E4 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x180339A78 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___ @ 0x180339C28 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x18033A1A4 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     _lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator() @ 0x18034AF20 (_lambda_493d9d8d4dfbfda8d8c3e09534007ea4_--operator().c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1804DA8C0 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  int *v7; // r8
  int IsAppBeingDebugged; // eax
  _QWORD *v9; // rax
  const char *v10; // r9
  void *v11; // rdi
  int v12; // r14d
  char *v13; // rbx
  int started; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  __int64 *v20; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-80h] BYREF
  HANDLE hHandle; // [rsp+30h] [rbp-78h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 v24[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  char v26; // [rsp+58h] [rbp-50h]
  void *v27; // [rsp+60h] [rbp-48h]
  _BYTE v28[24]; // [rsp+68h] [rbp-40h] BYREF
  IID rclsid; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v25 = *(_QWORD *)(a1 + 8);
  v26 = 1;
  v2 = CoCreateGuid(&rclsid);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2);
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpsz,
      0LL);
    v3 = StringFromCLSID(&rclsid, &lpsz);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v3);
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    v6 = CreateEventWithSDDL(lpsz, v4, v5, &hHandle);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        171LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6);
    *(_DWORD *)v24 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v24,
                           v7);
    if ( IsAppBeingDebugged < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        173LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged);
    v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    v21 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v27 = v11;
    if ( !v11 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        175LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        v10);
    LODWORD(v21) = 15000;
    v20 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v28, 0x3A98u);
    v12 = *(_DWORD *)v24;
    if ( *(_DWORD *)v24 )
    {
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v28);
      v13 = (char *)hHandle;
      *(_QWORD *)v24 = hHandle;
      started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___(
                  v11,
                  *(HWND *)(a1 + 16),
                  v24);
      if ( started >= 0 )
      {
LABEL_19:
        v20 = 0LL;
        v15 = CoreQueryWindowService(
                *(_QWORD *)(a1 + 16),
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                &v20);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            194LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v15);
        v16 = *v20;
        *(IID *)v24 = rclsid;
        v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int16 *))(v16 + 24))(
                v20,
                *(_QWORD *)(a1 + 16),
                v24);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            196LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v17);
        CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v28);
        if ( WaitForSingleObject(v13, v12 != 0 ? -1 : 15000) == 258 )
          ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((int *)&v21);
        if ( v20 )
          (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
        CCrashDetector::~CCrashDetector((CCrashDetector *)v11);
        operator delete(v11, (const struct std::nothrow_t *)0x18);
        if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v13);
        if ( lpsz )
          CoTaskMemFree(lpsz);
        v26 = 0;
        lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator()(&v25);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        192LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)started);
    }
    v13 = (char *)hHandle;
    goto LABEL_19;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCD,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v18);
  }
  return result;
}
