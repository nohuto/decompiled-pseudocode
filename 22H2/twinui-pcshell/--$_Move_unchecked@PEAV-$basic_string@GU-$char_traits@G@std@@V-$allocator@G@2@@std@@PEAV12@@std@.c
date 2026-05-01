/*
 * XREFs of ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x1804B5304
 * Callers:
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1804B8970 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$102 @ 0x1804C675B (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1804C675B.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Move_unchecked<std::wstring *,std::wstring *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx

  for ( i = a1; i != a2; i += 32LL )
  {
    if ( a3 != i )
    {
      std::wstring::_Tidy_deallocate((_QWORD *)a3);
      *(_OWORD *)a3 = *(_OWORD *)i;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0LL;
      *(_QWORD *)(i + 24) = 7LL;
      *(_WORD *)i = 0;
    }
    a3 += 32LL;
  }
  return a3;
}
