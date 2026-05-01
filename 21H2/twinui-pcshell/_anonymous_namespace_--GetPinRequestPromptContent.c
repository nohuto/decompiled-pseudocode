/*
 * XREFs of _anonymous_namespace_::GetPinRequestPromptContent @ 0x180139C40
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116D14 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@X@-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ??$_Assign@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@?$_Optional_construct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAAX$$QEAV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@@Z @ 0x180132CB4 (--$_Assign@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPE.c)
 *     ??$_Construct@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@?$_Optional_construct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAAAEAV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@$$QEAV21@@Z @ 0x180132D20 (--$_Construct@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6A.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$tuple@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x180135F4C (--1-$tuple@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$optional@V-$variant@.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143C20 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1801441C4 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 *     ?_Destroy@?$_Variant_base@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@QEAAXXZ @ 0x180144AE4 (-_Destroy@-$_Variant_base@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=7
_BYTE *__fastcall anonymous_namespace_::GetPinRequestPromptContent(_BYTE *a1, _QWORD **a2)
{
  __int128 v4; // rax
  wil::details::in1diag3 *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  char v8; // al
  std::_Ref_count_base *v9; // rcx
  const void *v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v13; // [rsp+40h] [rbp-C0h]
  _QWORD **v14; // [rsp+50h] [rbp-B0h]
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  _QWORD v17[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h]
  __int64 v19[2]; // [rsp+90h] [rbp-70h] BYREF
  char v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v23; // [rsp+C0h] [rbp-40h]
  _BYTE v24[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  v13 = a1;
  v14 = a2;
  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v11, *a2);
  anonymous_namespace_::TryGetRequestorDisplayInformation(v19, v11);
  *((_QWORD *)&v4 + 1) = v22;
  v5 = retaddr;
  if ( !v22 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v5,
      327LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v17[0]) = 0;
  v15 = 0LL;
  LOBYTE(v15) = 0;
  v16 = 0LL;
  if ( !*((_DWORD *)*a2 + 4) && !(*a2)[9] )
    goto LABEL_10;
  v6 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v12, a2);
  anonymous_namespace_::TryGetTargetDisplayInformation(v24, v6);
  if ( !v26 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      339LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_24;
  }
  std::wstring::operator=(v17, v25);
  if ( v24[16] )
  {
    std::_Optional_construct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::_Assign<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
      (__int64)&v15,
      (__int64)v24);
  }
  else if ( (_BYTE)v16 )
  {
    std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(&v15);
    LOBYTE(v16) = 0;
  }
  std::tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>::~tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>((__int64)v24);
  *((_QWORD *)&v4 + 1) = v22;
LABEL_10:
  *(_QWORD *)&v4 = &v21;
  if ( v23 >= 8 )
    *(_QWORD *)&v4 = v21;
  v12 = v4;
  v7 = v17;
  if ( si128.m128i_i64[1] >= 8uLL )
    v7 = (_QWORD *)v17[0];
  v11[0] = v7;
  v11[1] = (const void *)si128.m128i_i64[0];
  std::wstring::wstring((__int64)a1, (const void **)&v12);
  a1[32] = 0;
  a1[48] = 0;
  if ( v20 )
    std::_Optional_construct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::_Construct<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
      (__int64)(a1 + 32),
      v19);
  std::wstring::wstring((__int64)(a1 + 56), v11);
  a1[88] = 0;
  a1[104] = 0;
  v8 = v16;
  if ( (_BYTE)v16 )
  {
    std::_Optional_construct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::_Construct<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
      (__int64)(a1 + 88),
      (__int64 *)&v15);
    v8 = v16;
  }
  if ( v8 )
    std::_Variant_base<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>::_Destroy(&v15);
  std::wstring::_Tidy_deallocate(v17);
  std::tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>::~tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>((__int64)v19);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
