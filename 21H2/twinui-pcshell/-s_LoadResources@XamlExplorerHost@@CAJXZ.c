/*
 * XREFs of ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x18035ED90
 * Callers:
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x18035C988 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x18035D290 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 XamlExplorerHost::s_LoadResources(void)
{
  __int64 v0; // rbx
  int ActivationFactory; // eax
  unsigned int LastError; // ebx
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  WCHAR Dst[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v18 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Resources.Core.ResourceManager",
    0x38u,
    0x37u);
  v0 = v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  ActivationFactory = RoGetActivationFactory(v0, &GUID_1cc0fdfc_69ee_4e43_9901_47f12687baf7, &v18);
  LastError = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v17 = 0LL;
    v3 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v4 = **v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v5 = v4(v3, &GUID_4a8eac58_b652_459d_8de1_239471e8b22b, &v17);
    LastError = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v5);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      goto LABEL_17;
    }
    v16 = 0LL;
    v6 = v17;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v17 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v8 = v7(v6, &v16);
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v8);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      goto LABEL_16;
    }
    v15 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    v10 = **v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v11 = v10(v9, &GUID_8c25e859_1042_4da0_9232_bf2aa8ff3726, &v15);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 215LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_14;
    }
    if ( ExpandEnvironmentStringsW(L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri", Dst, 0x104u) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, WCHAR *))(*(_QWORD *)v15 + 48LL))(v15, Dst);
      LastError = v11;
      if ( v11 < 0 )
      {
        v12 = 219LL;
        goto LABEL_13;
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xDA,
                    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
                    v13);
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return LastError;
}
