/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1801170E4
 * Callers:
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180117BF4 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x1800576B8 (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802653EC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1804CED18 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int128 *v7; // rdx
  const char *v8; // r9
  int v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B8h]
  _OWORD v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v15[256]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v11[1] = a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12) = 0;
  v15[0] = 0;
  *(_QWORD *)v10 = 0LL;
  v4 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v15, 256LL, v10);
  if ( v4 < 0 )
    goto LABEL_12;
  if ( *(_QWORD *)v10 > 0x100uLL )
  {
    v5 = wil::details::string_maker<std::wstring>::make(&v12, 0LL, *(_QWORD *)v10 - 1LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 117LL;
      goto LABEL_11;
    }
    v11[0] = 0LL;
    v7 = &v12;
    if ( si128.m128i_i64[1] >= 8uLL )
      v7 = (__int128 *)v12;
    v5 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
           a2,
           v7,
           *(_QWORD *)v10,
           v11);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 120LL;
      goto LABEL_11;
    }
    if ( *(_QWORD *)v10 != v11[0] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x7B,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        v8);
      __debugbreak();
    }
  }
  else
  {
    v5 = wil::details::string_maker<std::wstring>::make(&v12, v15, *(_QWORD *)v10 - 1LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 111LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v5);
LABEL_12:
      std::wstring::_Tidy_deallocate(&v12);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>(a2);
      return (unsigned int)v4;
    }
  }
  v14[0] = v12;
  v14[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12) = 0;
  std::wstring::operator=(a1, v14);
  std::wstring::_Tidy_deallocate(v14);
  std::wstring::_Tidy_deallocate(&v12);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>(a2);
  return 0LL;
}
