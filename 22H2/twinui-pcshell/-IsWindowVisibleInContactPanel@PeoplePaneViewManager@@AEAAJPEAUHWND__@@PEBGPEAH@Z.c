/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1802CF7C4
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1802CF520 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006F624 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18023DDD8 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1802B8C64 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1802BBCBC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1802BC6F4 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1802C6C5C (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v7; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  int v18; // edi
  WCHAR *v19; // rbx
  HSTRING v20; // rcx
  int v21; // ebx
  int v22; // ebx
  HSTRING v23; // rcx
  __int64 v24; // rax
  const WCHAR *p_lpStringValue; // rbx
  const WCHAR *StringRawBuffer; // rax
  bool v27; // bl
  __int64 v28; // [rsp+30h] [rbp-1C8h] BYREF
  int v29; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-1A8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-1A0h] BYREF
  int v34; // [rsp+60h] [rbp-198h]
  const WCHAR *v35; // [rsp+68h] [rbp-190h] BYREF
  int v36; // [rsp+70h] [rbp-188h]
  __int64 v37; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v38[8]; // [rsp+90h] [rbp-168h] BYREF
  _BYTE v39[128]; // [rsp+98h] [rbp-160h] BYREF
  _BYTE v40[104]; // [rsp+118h] [rbp-E0h] BYREF
  LPCWSTR lpStringValue; // [rsp+180h] [rbp-78h] BYREF
  struct IInspectable *v42[3]; // [rsp+188h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+1B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *a4 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
  v7 = CoreQueryWindowService(
         a2,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v28);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return (unsigned int)v7;
  }
  v30 = 0LL;
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v44,
         &v30);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41A,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return v10;
  }
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v11 = RoCreatePropertySetSerializer(&v31);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41E,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return v12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, v30, v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41F,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return v14;
  }
  v32 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          &v30,
          &v32);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x422,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return v16;
  }
  v35 = 0LL;
  v36 = 0;
  v17 = v32;
  lpStringValue = (LPCWSTR)&v35;
  v42[0] = 0LL;
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"RunningComponentUIApplicationList",
    0x22u,
    0x21u);
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v17 + 48LL))(v17, v44, v42);
  v44 = 0LL;
  v19 = (WCHAR *)lpStringValue;
  RoVariant::RoVariant((RoVariant *)&string, v42[0]);
  v20 = *(HSTRING *)v19;
  *(_QWORD *)v19 = string;
  string = v20;
  LODWORD(v20) = *((_DWORD *)v19 + 2);
  *((_DWORD *)v19 + 2) = v34;
  v34 = (int)v20;
  RoVariant::~RoVariant((RoVariant *)&string);
  if ( v18 < 0 )
  {
    RoVariant::~RoVariant((RoVariant *)&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return (unsigned int)v18;
  }
  v21 = v36;
  if ( v36 < 0 )
    goto LABEL_23;
  if ( v36 )
  {
    if ( v36 == 1 || v36 == 3 )
    {
      v29 = 13;
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v35 + 48LL))(v35, &v29);
      if ( v21 < 0 )
        goto LABEL_22;
    }
  }
  else
  {
    v29 = 0;
  }
  v21 = 0;
LABEL_22:
  if ( v21 < 0 )
  {
LABEL_23:
    RoVariant::~RoVariant((RoVariant *)&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
    return (unsigned int)v21;
  }
  if ( v29 == 12 )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    lpStringValue = v35;
    LODWORD(v42[0]) = v36;
    v22 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&lpStringValue, &string);
    if ( v22 < 0 )
    {
      WindowsDeleteString(string);
      string = 0LL;
      RoVariant::~RoVariant((RoVariant *)&v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
      return (unsigned int)v22;
    }
    v23 = string;
    if ( string )
    {
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(&v37);
      v24 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v38, (__int64)a3);
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v24, (__int64)L";");
      std::basic_stringbuf<unsigned short>::str((__int64)v39, (__int64)&lpStringValue);
      p_lpStringValue = (const WCHAR *)&lpStringValue;
      if ( v42[2] >= (struct IInspectable *)8 )
        p_lpStringValue = lpStringValue;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v27 = FindStringOrdinal(0x400000u, StringRawBuffer, -1, p_lpStringValue, -1, 1) != -1;
      std::wstring::_Tidy_deallocate(&lpStringValue);
      if ( v27 )
        *a4 = 1;
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v40);
      std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v40);
      v23 = string;
    }
    WindowsDeleteString(v23);
  }
  RoVariant::~RoVariant((RoVariant *)&v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v28);
  return 0LL;
}
