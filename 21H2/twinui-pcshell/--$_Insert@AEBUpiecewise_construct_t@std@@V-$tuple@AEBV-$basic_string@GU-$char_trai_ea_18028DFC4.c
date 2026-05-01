/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18028DFC4
 * Callers:
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180291404 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::_Insert<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r14
  __int64 result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v4 = *(_QWORD **)(a2 + 8);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  result = std::wstring::wstring((__int64)(v6 + 2));
  v6[6] = 0LL;
  v6[7] = 0LL;
  *v6 = a2;
  v6[1] = v4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v6;
  *v4 = v6;
  return result;
}
