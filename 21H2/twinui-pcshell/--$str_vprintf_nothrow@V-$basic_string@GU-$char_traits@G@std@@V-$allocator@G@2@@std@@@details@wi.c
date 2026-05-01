/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1804CE23C
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1804CE19C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _vscwprintf @ 0x180090A58 (_vscwprintf.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1804CED38 (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1804CF0A8 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__m128i *a1, const wchar_t *a2, va_list *a3)
{
  __int64 v6; // r15
  int v7; // eax
  unsigned __int16 **v8; // r8
  unsigned __int64 *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wchar_t *v12; // rcx
  __m128i v13; // xmm6
  __m128i v14; // xmm7
  __m128i v15; // xmm0
  unsigned int v17; // [rsp+28h] [rbp-69h]
  STRSAFE_LPWSTR pszDest[2]; // [rsp+48h] [rbp-49h] BYREF
  __m128i si128; // [rsp+58h] [rbp-39h]
  __m128i v20; // [rsp+68h] [rbp-29h] BYREF
  __m128i v21; // [rsp+78h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  LOWORD(pszDest[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = wil::details::string_maker<std::wstring>::make(pszDest, 0LL, v6);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = 1772LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7);
    goto LABEL_11;
  }
  v12 = (wchar_t *)pszDest;
  if ( si128.m128i_i64[1] >= 8uLL )
    v12 = pszDest[0];
  v7 = StringCchVPrintfExW(v12, v6 + 1, v8, v9, v17, a2, *a3);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = 1775LL;
    goto LABEL_7;
  }
  v13 = *(__m128i *)pszDest;
  LOWORD(pszDest[0]) = 0;
  v14 = si128;
  v20 = v13;
  v21 = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a1 != &v20 )
  {
    std::wstring::_Tidy_deallocate(a1);
    v15 = _mm_load_si128((const __m128i *)&_xmm);
    *a1 = v13;
    v20.m128i_i16[0] = 0;
    v21 = v15;
    a1[1] = v14;
  }
  std::wstring::_Tidy_deallocate(&v20);
  v10 = 0;
LABEL_11:
  std::wstring::_Tidy_deallocate(pszDest);
  return v10;
}
