/*
 * XREFs of ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x1803F0138
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x1803EFFA0 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803EFBBC (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

__int64 __fastcall AllUpViewUriHandler::ParseFlagsFromUriPath(
        AllUpViewUriHandler *this,
        const unsigned __int16 *a2,
        enum ALL_UP_VIEW_FLAGS *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  const WCHAR *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-9h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-1h] BYREF
  __int64 v22; // [rsp+40h] [rbp+7h] BYREF
  HSTRING string; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+50h] [rbp+17h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+27h] BYREF
  __int64 v27; // [rsp+78h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *(_DWORD *)a3 = 0;
  v24 = 0LL;
  v27 = 0LL;
  v25 = a2;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v27,
         &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v20 = 0LL;
    v6 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v25, v7);
    v9 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(
           v6,
           v8[1].Reserved.Reserved1,
           &v20);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v9);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_19;
    }
    v10 = v20;
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 136LL))(v10, &string);
    v5 = v11;
    if ( v11 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ms-taskswitcher", -1, 1) == 2 )
      {
        v22 = 0LL;
        v15 = v20;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 120LL))(v15, &v22);
        v5 = v16;
        if ( v16 >= 0 )
        {
          v17 = v22;
          WindowsDeleteString(0LL);
          v21 = 0LL;
          v27 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"invoketo", 9u, 8u);
          if ( (*(int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v17 + 48LL))(v17, v27, &v21) >= 0 )
          {
            v18 = WindowsGetStringRawBuffer(v21, 0LL);
            if ( CompareStringOrdinal(v18, -1, L"timeline", -1, 1) == 2 )
              *(_DWORD *)a3 |= 2u;
          }
          v5 = 0;
          WindowsDeleteString(v21);
          v21 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
            (const char *)(unsigned int)v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_17;
      }
      v5 = -2147418113;
      v13 = 85LL;
      v12 = 2147549183LL;
    }
    else
    {
      v12 = (unsigned int)v11;
      v13 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)v12);
LABEL_17:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return v5;
}
