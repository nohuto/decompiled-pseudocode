/*
 * XREFs of ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x1801570FC
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015A920 (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015CE00 (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ABFC (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileQueryFilter@Tiles@Internal@1@@Z @ 0x180152250 (--$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1801556D0 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x1801593A0 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020AF84 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(
        wchar_t *Str,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4)
{
  unsigned __int16 **v8; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int ActivationFactory; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD); // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64 *); // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD); // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD); // rdi
  int v36; // eax
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v38)(_QWORD, GUID *, __int64 *); // rdi
  int v39; // eax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, HSTRING *); // rdi
  int v42; // eax
  PVOID Reserved1; // rbx
  unsigned __int16 *v44; // rdi
  unsigned __int16 *v45; // r14
  const WCHAR *StringRawBuffer; // rax
  LPWSTR *v47; // rsi
  int v48; // edi
  __int64 *v49; // rbx
  int v50; // eax
  unsigned int v51; // r14d
  const wchar_t *v52; // r14
  wchar_t *v53; // r14
  const wchar_t *v54; // r14
  wchar_t *v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  unsigned __int16 *v60; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v61; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v62; // [rsp+40h] [rbp-99h] BYREF
  __int64 v63; // [rsp+48h] [rbp-91h] BYREF
  __int64 v64; // [rsp+50h] [rbp-89h] BYREF
  __int64 v65; // [rsp+58h] [rbp-81h] BYREF
  HSTRING string; // [rsp+60h] [rbp-79h] BYREF
  int pNumArgs; // [rsp+68h] [rbp-71h] BYREF
  __int64 (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-69h] BYREF
  __int64 v69; // [rsp+78h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-59h] BYREF
  __int64 v71; // [rsp+98h] [rbp-41h]
  unsigned __int16 *v72; // [rsp+A0h] [rbp-39h] BYREF
  unsigned __int16 v73[4]; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int16 *v74; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-21h]
  __int64 v76; // [rsp+C0h] [rbp-19h]
  unsigned __int16 *v77; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-9h]
  __int64 v79; // [rsp+D8h] [rbp-1h]
  int v80; // [rsp+E0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !Str || !SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(Str, a2) )
    return 2147943569LL;
  *(_QWORD *)v73 = 0LL;
  v72 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v72,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v73,
    0LL);
  AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                 Str,
                                                                 v73,
                                                                 &v72,
                                                                 v8);
  v10 = AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier;
  if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
    goto LABEL_63;
  }
  v62 = 0LL;
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileStore",
    0x21u,
    0x20u);
  v11 = v71;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v62);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_3a1f4546_cb54_4968_a3f8_fa93f2fe6b40, &v62);
  v10 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v62);
    goto LABEL_63;
  }
  v63 = 0LL;
  v13 = v62;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v62 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v63);
  v15 = v14(v13, 0LL, &v63);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v15);
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v63);
    goto LABEL_7;
  }
  v61 = 0LL;
  v71 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileQueryFilter",
    0x27u,
    0x26u);
  v16 = v71;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v61);
  v17 = Windows::Foundation::ActivateInstance<Windows::Internal::Tiles::ITileQueryFilter>(v16, &v61);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 45LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v17);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v61);
    goto LABEL_10;
  }
  v19 = v61;
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 88LL);
  v60 = *(unsigned __int16 **)v73;
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60);
  v17 = v20(v19, *(_QWORD *)(v21 + 24));
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 47LL;
    goto LABEL_13;
  }
  v64 = 0LL;
  v22 = v61;
  v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v64);
  v24 = v23(v22, &v64);
  v10 = v24;
  if ( v24 < 0 )
  {
    v25 = 50LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v24);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v64);
    goto LABEL_14;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 104LL))(v64, 1LL);
  v10 = v24;
  if ( v24 < 0 )
  {
    v25 = 52LL;
    goto LABEL_19;
  }
  v26 = v61;
  v27 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 104LL);
  v60 = v72;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60);
  v24 = v27(v26, *(_QWORD *)(v28 + 24));
  v10 = v24;
  if ( v24 < 0 )
  {
    v25 = 53LL;
    goto LABEL_19;
  }
  v65 = 0LL;
  v29 = v63;
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v63 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v65);
  v31 = v30(v29, 0LL, v61, &v65);
  v10 = v31;
  if ( v31 < 0 )
  {
    v32 = 56LL;
LABEL_27:
    v33 = (unsigned int)v31;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)v33);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v65);
    goto LABEL_20;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 56LL))(v65, &v80);
  v10 = v31;
  if ( v31 < 0 )
  {
    v32 = 59LL;
    goto LABEL_27;
  }
  if ( v80 != 1 )
  {
    v10 = -2147024883;
    v33 = 2147942413LL;
    v32 = 60LL;
    goto LABEL_28;
  }
  v68 = 0LL;
  v34 = v65;
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v68);
  v36 = v35(v34, 0LL, &v68);
  v10 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v36);
LABEL_36:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v68);
    goto LABEL_29;
  }
  v69 = 0LL;
  v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v68;
  v38 = **v68;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v69);
  v39 = v38(v37, &GUID_d5eea516_5cff_4341_9540_5246cd4352c8, &v69);
  v10 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v39);
LABEL_39:
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v69);
    goto LABEL_36;
  }
  v40 = v69;
  v41 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v69 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v42 = v41(v40, &string);
  v10 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v42);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_39;
  }
  Reserved1 = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  v44 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v45 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  pNumArgs = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v47 = CommandLineToArgvW(StringRawBuffer, &pNumArgs);
  if ( !v47 || pNumArgs <= 0 )
  {
LABEL_60:
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    *(_QWORD *)a2 = Reserved1;
    v74 = 0LL;
    v76 = 0LL;
    v75 = 0LL;
    *a3 = v44;
    v77 = 0LL;
    v79 = 0LL;
    v78 = 0LL;
    *a4 = v45;
    if ( v47 )
      LocalFree(v47);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v74);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v69);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v68);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v61);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v63);
    Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v62);
    v10 = 0;
    goto LABEL_63;
  }
  v48 = 1;
  v49 = (__int64 *)(v47 + 2);
  while ( !wcscmp((const wchar_t *)*(v49 - 2), L"-url") )
  {
    if ( v48 + 1 < pNumArgs )
    {
      v50 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              &hstringHeader.Reserved.Reserved1,
              *v49,
              0xFFFFFFFFFFFFFFFFuLL);
      v51 = v50;
      if ( v50 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5A,
          (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
          (const char *)(unsigned int)v50);
        goto LABEL_65;
      }
      v52 = (const wchar_t *)*v49;
      if ( wcslen((const wchar_t *)*v49) > 1 )
      {
        v53 = wcsstr(v52, L"msSrc=");
        if ( v53 )
        {
          v54 = &v53[wcslen(L"msSrc=")];
          v55 = wcsstr(v54, L"&");
          if ( v55 )
          {
            v56 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                    (LPVOID *)&v74,
                    (__int64)v54,
                    v55 - v54);
            v51 = v56;
            if ( v56 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x6A,
                (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
                (const char *)(unsigned int)v56);
              goto LABEL_65;
            }
          }
          else
          {
            v57 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                    (LPVOID *)&v74,
                    (__int64)v54,
                    0xFFFFFFFFFFFFFFFFuLL);
            v51 = v57;
            if ( v57 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x6E,
                (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
                (const char *)(unsigned int)v57);
              goto LABEL_65;
            }
          }
        }
      }
    }
LABEL_58:
    ++v48;
    ++v49;
    if ( v48 - 1 >= pNumArgs )
    {
      Reserved1 = hstringHeader.Reserved.Reserved1;
      v44 = v74;
      v45 = v77;
      goto LABEL_60;
    }
  }
  if ( wcscmp((const wchar_t *)*(v49 - 2), L"-tbPinSource") )
    goto LABEL_58;
  if ( v48 >= pNumArgs )
    goto LABEL_58;
  v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (LPVOID *)&v77,
          *(v49 - 1),
          0xFFFFFFFFFFFFFFFFuLL);
  v51 = v58;
  if ( v58 >= 0 )
    goto LABEL_58;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7A,
    (__int64)"internal\\shell\\private\\inc\\TaskbarTelemetryHelper.h",
    (const char *)(unsigned int)v58);
LABEL_65:
  LocalFree(v47);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v77);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v74);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v69);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v68);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v64);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v61);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v63);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v62);
  v10 = v51;
LABEL_63:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v72);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)v73);
  return v10;
}
