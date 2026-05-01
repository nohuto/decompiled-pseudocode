/*
 * XREFs of ??$emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x1800DC7F0
 * Callers:
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@1@@Z @ 0x1800DC8A0 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4JavaOption@@U-$less@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@@Z @ 0x1800DC3B8 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4J.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::emplace_hint<std::pair<std::wstring const,enum JavaOption> const &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  _QWORD *v10; // [rsp+38h] [rbp-20h]

  v7 = qword_180651F98;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  std::wstring::wstring((__int64)(v10 + 4));
  v8 = *(unsigned int *)(a4 + 32);
  *((_DWORD *)v10 + 16) = v8;
  *v10 = v7;
  v10[1] = v7;
  v10[2] = v7;
  *((_WORD *)v10 + 12) = 0;
  std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Insert_hint<std::pair<std::wstring const,enum JavaOption> &,std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *> *>(
    v8,
    a2,
    a3,
    (__int64)(v10 + 4),
    v10);
  return a2;
}
