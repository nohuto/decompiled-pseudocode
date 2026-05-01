/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1804E2040
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1804E1B6C (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x180036B2C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_999dc00085dcb4e97168c8687495f75d_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_999dc00085dcb4e97168c8687495f75d_@@@Z @ 0x180078B38 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z @ 0x1804E17C4 (--$-0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x1804E181C (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  __int64 v9; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  const WCHAR *v15; // rsi
  unsigned __int64 v16; // rbx
  int v17; // edx
  APTTYPE v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  HRESULT Site; // eax
  const unsigned __int16 *v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  struct IInspectable *v25; // rbx
  HSTRING v26; // rsi
  IUnknown *punkSite; // [rsp+40h] [rbp-A1h] BYREF
  void *ppv; // [rsp+48h] [rbp-99h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-91h]
  struct IInspectable *v31; // [rsp+58h] [rbp-89h] BYREF
  void *v32; // [rsp+60h] [rbp-81h] BYREF
  PCWSTR sourceString; // [rsp+68h] [rbp-79h] BYREF
  __int64 v34; // [rsp+70h] [rbp-71h]
  __int64 v35; // [rsp+78h] [rbp-69h]
  _QWORD v36[2]; // [rsp+80h] [rbp-61h] BYREF
  HSTRING v37; // [rsp+90h] [rbp-51h] BYREF
  HSTRING_HEADER v38; // [rsp+98h] [rbp-49h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v8 = a8;
  v9 = a7;
  punk = a1;
  sourceString = 0LL;
  *a8 = 0;
  v34 = 0LL;
  v35 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  v13 = -1LL;
  v34 = -1LL;
  v35 = -1LL;
  v31 = 0LL;
  v14 = -1LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)&sourceString) >= 0 )
    a4 = sourceString;
  do
    ++v14;
  while ( a4[v14] );
  if ( v14 > 0xFFFFFFFF )
  {
    LODWORD(v14) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(a4, v14, &hstringHeader, &string);
  v15 = &szAgent;
  v32 = string;
  v16 = -1LL;
  if ( a3 )
    v15 = a3;
  do
    ++v16;
  while ( v15[v16] );
  if ( v16 > 0xFFFFFFFF )
  {
    LODWORD(v16) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v15, v16, &v38, &v37);
  punkSite = (IUnknown *)v37;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  v36[0] = &punkSite;
  v36[1] = &v32;
  v19 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_999dc00085dcb4e97168c8687495f75d_>(
          v18,
          v17,
          &v31,
          (__int64)v36);
  v20 = v19;
  if ( v19 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Site = IUnknown_GetSite(punk, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    v20 = Site;
    if ( Site < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
        (const char *)(unsigned int)Site);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      goto LABEL_29;
    }
    if ( a6 )
    {
      v32 = ppv;
      punkSite = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
      v23 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
              (CLaunchToMonitor **)&punkSite,
              &a6,
              &v32);
      v20 = v23;
      if ( v23 < 0 )
      {
        v24 = 54LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
LABEL_27:
        IUnknown_SetSite(punk, (IUnknown *)ppv);
        goto LABEL_28;
      }
      v23 = IUnknown_SetSite(punk, punkSite);
      v20 = v23;
      if ( v23 < 0 )
      {
        v24 = 55LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
    }
    v25 = v31;
    v26 = *Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[15])v22);
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 > 0xFFFFFFFF )
    {
      LODWORD(v13) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(a2, v13, &v38, &v37);
    v20 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, HSTRING, struct IInspectable *, int, _DWORD *))punk->lpVtbl[1].QueryInterface)(
            punk,
            v37,
            v9,
            v26,
            v25,
            a5,
            v8);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
    (const char *)(unsigned int)v19);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return v20;
}
