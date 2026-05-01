/*
 * XREFs of ??$_Insert_at@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18009DCEC
 * Callers:
 *     ??$_Insert_nohint@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18009DE84 (--$_Insert_nohint@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_.c)
 * Callees:
 *     ??$_Buy_if_not_node@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@U_Not_a_node_tag@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18009DBF4 (--$_Buy_if_not_node@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800AB30C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@I.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800AB3E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring const &,std::_Not_a_node_tag>(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // r10
  char v11; // r11
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *result; // rax

  if ( (unsigned __int64)a1[1] >= 0x3FFFFFFFFFFFFFELL )
    std::_Xlength_error("map/set<T> too long");
  v8 = std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Buy_if_not_node<std::wstring const &>(a1);
  ++a1[1];
  v10 = v8;
  v11 = 0;
  v8[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = v8;
    *(_QWORD *)*a1 = v8;
    *(_QWORD *)(*a1 + 16) = v8;
  }
  else if ( a3 )
  {
    *a4 = v8;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = v8;
  }
  else
  {
    a4[2] = v8;
    if ( a4 == *(_QWORD **)(*a1 + 16) )
      *(_QWORD *)(*a1 + 16) = v8;
  }
  v12 = v8[1];
  v13 = v10;
  while ( *(_BYTE *)(v12 + 24) == v11 )
  {
    v14 = v13[1];
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( *(_BYTE *)(v16 + 24) == v11 )
        goto LABEL_17;
      if ( v13 == *(_QWORD **)(v14 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
          a1,
          v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(v13[1] + 8LL),
        v9,
        v13);
    }
    else
    {
      if ( *(_BYTE *)(v16 + 24) == v11 )
      {
LABEL_17:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
        v13 = *(_QWORD **)(v13[1] + 8LL);
        goto LABEL_21;
      }
      if ( v13 == *(_QWORD **)v14 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          v13[1],
          v9,
          v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
        a1,
        *(_QWORD *)(v13[1] + 8LL));
    }
LABEL_21:
    v12 = v13[1];
  }
  v17 = *(_QWORD *)(*a1 + 8);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
