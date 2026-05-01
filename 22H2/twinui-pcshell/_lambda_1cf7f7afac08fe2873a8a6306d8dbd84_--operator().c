/*
 * XREFs of _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x180339DD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___::Run @ 0x18033A2B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C9830 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801E3FF8 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x1801E9268 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801EB2E4 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x180339A78 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___ @ 0x180339C28 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___.c)
 *     _lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator() @ 0x180339D64 (_lambda_16b2729c4ca1e6616f2a62f33a09629a_--operator().c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x18033A1A4 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1804DA8C0 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // edi
  HRESULT v4; // eax
  const unsigned __int16 *v5; // rdx
  int v6; // r8d
  int EventWithSDDL; // eax
  int *v8; // r8
  char *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *v12; // rsi
  int v13; // r15d
  int started; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v18; // [rsp+28h] [rbp-49h] BYREF
  LPOLESTR lpsz; // [rsp+30h] [rbp-41h] BYREF
  HANDLE hHandle[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v21[8]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+60h] [rbp-11h] BYREF
  char v24; // [rsp+68h] [rbp-9h]
  _BYTE v25[24]; // [rsp+70h] [rbp-1h] BYREF
  void *v26; // [rsp+88h] [rbp+17h]
  GUID pguid; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23 = *(_QWORD *)(a1 + 8);
  v24 = 1;
  v2 = CoCreateGuid(&pguid);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_33;
  }
  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpsz,
    0LL);
  v4 = StringFromCLSID(&pguid, &lpsz);
  v3 = v4;
  if ( v4 >= 0 )
  {
    hHandle[0] = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      hHandle,
      0LL);
    EventWithSDDL = CreateEventWithSDDL(lpsz, v5, v6, hHandle);
    v3 = EventWithSDDL;
    v9 = (char *)hHandle[0];
    if ( EventWithSDDL < 0 )
    {
      v10 = 148LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)(unsigned int)EventWithSDDL);
LABEL_29:
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v9);
      goto LABEL_31;
    }
    *(_DWORD *)v21 = 0;
    EventWithSDDL = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                      *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                      v21,
                      v8);
    v3 = EventWithSDDL;
    if ( EventWithSDDL < 0 )
    {
      v10 = 150LL;
      goto LABEL_9;
    }
    v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    v22 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v26 = v12;
    if ( !v12 )
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_27;
    }
    LODWORD(v22) = 15000;
    v18 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v25, 0x3A98u);
    v13 = *(_DWORD *)v21;
    if ( *(_DWORD *)v21
      && (CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25),
          *(_QWORD *)v21 = v9,
          started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___(
                      v12,
                      *(HWND *)(a1 + 16),
                      v21),
          v3 = started,
          started < 0) )
    {
      v15 = 169LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      started = CoreQueryWindowService(
                  *(_QWORD *)(a1 + 16),
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &v18);
      v3 = started;
      if ( started >= 0 )
      {
        v16 = *v18;
        *(GUID *)v21 = pguid;
        started = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int16 *))(v16 + 24))(
                    v18,
                    *(_QWORD *)(a1 + 16),
                    v21);
        v3 = started;
        if ( started >= 0 )
        {
          CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25);
          if ( WaitForSingleObject(v9, v13 != 0 ? -1 : 15000) == 258 )
            ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((int *)&v22);
          v3 = 0;
          goto LABEL_26;
        }
        v15 = 173LL;
      }
      else
      {
        v15 = 171LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)started);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
LABEL_27:
    if ( v12 )
    {
      CCrashDetector::~CCrashDetector((CCrashDetector *)v12);
      operator delete(v12, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
    (const char *)(unsigned int)v4);
LABEL_31:
  if ( lpsz )
    CoTaskMemFree(lpsz);
LABEL_33:
  v24 = 0;
  lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator()((__int64)&v23);
  return v3;
}
