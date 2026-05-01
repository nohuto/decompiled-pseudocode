/*
 * XREFs of ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1802D040C
 * Callers:
 *     _lambda_6f903727e28235e985aa4aa4647c4ffc_::operator() @ 0x1802CD65C (_lambda_6f903727e28235e985aa4aa4647c4ffc_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19___::Run @ 0x1802D1010 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C84DC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1801D8770 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1801DF760 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1802D1DB8 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  __int64 v9; // rdx
  HWND WindowW; // rax
  const char *v11; // r9
  LPVOID v12; // rbx
  __int64 v13; // rdi
  const unsigned __int16 *AppId; // rax
  _QWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  PeoplePaneViewManager *v18; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v18 = this;
  memset(v16, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v16,
         (char *)L"Windows.Internal.ShellExperience.PeoplePane",
         0x2BuLL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           v16,
           (char *)L" ",
           1uLL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 247LL;
      goto LABEL_12;
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
           (__int64)v16,
           (__int64)a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 248LL;
      goto LABEL_12;
    }
    if ( a3 )
    {
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             v16,
             (char *)L" ",
             1uLL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 252LL;
        goto LABEL_12;
      }
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
             (__int64)v16,
             (__int64)a3);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 253LL;
        goto LABEL_12;
      }
    }
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v8 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
    v6 = v8;
    if ( v8 >= 0 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !SetForegroundWindow(WindowW) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x107,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v11);
      v12 = ppv;
      v13 = *(_QWORD *)ppv;
      AppId = PeoplePaneViewManager::s_GetAppId();
      v8 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **))(v13 + 24))(
             v12,
             AppId,
             v16[0],
             0LL,
             &v18);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = 0;
        goto LABEL_21;
      }
      v9 = 270LL;
    }
    else
    {
      v9 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    goto LABEL_22;
  }
  v7 = 246LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  return v6;
}
