/*
 * XREFs of ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180067A50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180067DFC (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180068AD4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::MarshalObjectToPropertySet(
        CLaunchActivatedEventArgs *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rbx
  _BYTE v26[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-21h] BYREF
  __int64 v28; // [rsp+40h] [rbp-19h] BYREF
  __int64 v29; // [rsp+48h] [rbp-11h] BYREF
  __int64 v30; // [rsp+50h] [rbp-9h] BYREF
  HSTRING string; // [rsp+58h] [rbp-1h] BYREF
  HSTRING v32; // [rsp+60h] [rbp+7h] BYREF
  __int64 v33; // [rsp+68h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+17h] BYREF
  __int64 v35; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
         (CLaunchActivatedEventArgs *)((char *)this - 232),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v27 = 0LL;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v6 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v27);
  v5 = v6;
  if ( v6 < 0 )
  {
    v22 = 105LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v35,
         &v33);
  v5 = v6;
  if ( v6 < 0 )
  {
    v22 = 106LL;
    goto LABEL_24;
  }
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v7 = (*(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, &v32);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_18;
  }
  WindowsDeleteString(0LL);
  v8 = *((_QWORD *)this - 2);
  string = 0LL;
  v9 = (*(__int64 (__fastcall **)(char *, HSTRING *))(v8 + 56))((char *)this - 16, &string);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v30 = 0LL;
    v10 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 48LL))((char *)this - 8, &v30);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
        (const char *)(unsigned int)v10);
LABEL_15:
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_17;
    }
    v11 = v33;
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, v32, &v29);
    v5 = v12;
    if ( v12 < 0 )
    {
      v23 = 120LL;
    }
    else
    {
      v13 = v27;
      v14 = v29;
      v26[0] = 0;
      v35 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Arguments", 0xAu, 9u);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v13 + 80LL))(v13, v35, v14, v26);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v15 = v33;
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v15 + 144LL))(v15, string, &v28);
        v5 = v16;
        if ( v16 < 0 )
        {
          v24 = 125LL;
        }
        else
        {
          v17 = v27;
          v18 = v28;
          v35 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TileId", 7u, 6u);
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v17 + 80LL))(
                  v17,
                  v35,
                  v18,
                  v26);
          v5 = v16;
          if ( v16 < 0 )
          {
            v24 = 126LL;
          }
          else
          {
            v19 = v30;
            if ( !v30
              || (v25 = v27,
                  v35 = 0LL,
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"TileActivatedInfo",
                    0x12u,
                    0x11u),
                  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v25 + 80LL))(
                          v25,
                          v35,
                          v19,
                          v26),
                  v5 = v16,
                  v16 >= 0) )
            {
              v5 = 0;
LABEL_13:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
LABEL_14:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
              goto LABEL_15;
            }
            v24 = 130LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_13;
      }
      v23 = 122LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
    (const char *)(unsigned int)v9);
LABEL_17:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_18:
  WindowsDeleteString(v32);
  v32 = 0LL;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return v5;
}
