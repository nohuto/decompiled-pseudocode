/*
 * XREFs of ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1804CED18
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1801170E4 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1804CDEAC (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180264DD4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1802BBC04 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  char v5; // bl
  _QWORD v7[4]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v8[4]; // [rsp+48h] [rbp-40h] BYREF

  if ( a2 )
  {
    v4 = std::wstring::wstring((__int64)v8, a2, a3);
    v5 = 1;
  }
  else
  {
    v4 = std::wstring::wstring((__int64)v7, a3);
    v5 = 2;
  }
  if ( a1 != v4 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)a1);
    *(_OWORD *)a1 = *(_OWORD *)v4;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 7LL;
    *(_WORD *)v4 = 0;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate(v7);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v8);
  return 0LL;
}
