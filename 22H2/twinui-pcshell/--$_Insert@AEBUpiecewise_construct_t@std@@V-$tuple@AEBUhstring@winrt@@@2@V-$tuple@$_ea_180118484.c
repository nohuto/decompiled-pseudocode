/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180118484
 * Callers:
 *     ??A?$unordered_map@Uhstring@winrt@@_NU?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@@std@@QEAAAEA_NAEBUhstring@winrt@@@Z @ 0x18011B7DC (--A-$unordered_map@Uhstring@winrt@@_NU-$hash@Uhstring@winrt@@@std@@U-$equal_to@Uhstring@winrt@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7D94 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<winrt::hstring const,bool>>::_Insert<std::piecewise_construct_t const &,std::tuple<winrt::hstring const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        winrt::impl ***a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v9 = a1;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v10 = v8;
  winrt::hstring::hstring((winrt::hstring *)(v8 + 2), *a4);
  *((_BYTE *)v8 + 24) = 0;
  *v8 = a2;
  v8[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v7 = v8;
  v10 = 0LL;
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)&v9);
}
