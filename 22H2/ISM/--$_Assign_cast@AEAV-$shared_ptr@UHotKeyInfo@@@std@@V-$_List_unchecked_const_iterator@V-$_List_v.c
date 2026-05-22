/*
 * XREFs of ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18019D860
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A0F90 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1E50 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B708 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18019D7B4 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_18019D7B4.c)
 *     ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019F25C (--1-$_List_node_insert_op@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@.c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A234C (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Assign_cast<std::shared_ptr<HotKeyInfo> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx
  _QWORD **v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-30h]
  _QWORD v16[5]; // [rsp+38h] [rbp-28h] BYREF
  char v17; // [rsp+80h] [rbp+20h] BYREF

  v6 = *(_QWORD ***)a1;
  v7 = **(_QWORD ***)a1;
  while ( v7 != v6 )
  {
    if ( a2 == a3 )
      return std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(a1, &v17, v7, v6);
    std::shared_ptr<CustomCursorApplication>::operator=(v7 + 2, a2 + 2);
    v7 = (_QWORD *)*v7;
    a2 = (_QWORD *)*a2;
  }
  v13 = a1;
  v14 = v16;
  v15 = 0LL;
  std::_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
    &v13,
    a2,
    a3);
  v9 = *(_QWORD ***)a1;
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    *(_QWORD *)(a1 + 8) += v10;
    *v14 = v9;
    v11 = v9[1];
    v9[1] = v14;
    v12 = v16[0];
    *v11 = v16[0];
    *(_QWORD *)(v12 + 8) = v11;
    v14 = v16;
  }
  return std::_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
           &v13,
           v9);
}
