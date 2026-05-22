/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@_KUtagRECT@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801453F8
 * Callers:
 *     ?_Copy_assign@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x18014611C (-_Copy_assign@-$_Hash@V-$_Umap_traits@_KUtagRECT@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_t.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CB_KUtagRECT@@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@2@@std@@QEAAXXZ @ 0x1801461D8 (-clear@-$list@U-$pair@$$CB_KUtagRECT@@@std@@V-$allocator@U-$pair@$$CB_KUtagRECT@@@std@@@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::list<std::pair<unsigned __int64 const,tagRECT>>::_Assign_cast<std::pair<unsigned __int64,tagRECT> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD ***v6; // r14
  _QWORD **v7; // rcx
  _QWORD **v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD ***v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  _QWORD v16[5]; // [rsp+48h] [rbp-28h] BYREF

  v6 = *(_QWORD ****)a1;
  v7 = **(_QWORD ****)a1;
  while ( v7 != v6 )
  {
    if ( a2 == a3 )
    {
      if ( v7 == **(_QWORD ****)a1 && v6 == *(_QWORD ****)a1 )
      {
        std::list<std::pair<unsigned __int64 const,tagRECT>>::clear(a1);
      }
      else
      {
        while ( v7 != v6 )
        {
          v8 = (_QWORD **)*v7;
          *v7[1] = *v7;
          (*v7)[1] = v7[1];
          std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x28);
          --*(_QWORD *)(a1 + 8);
          v7 = v8;
        }
      }
      return;
    }
    v7[2] = (_QWORD *)a2[2];
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a2 + 3);
    v7 = (_QWORD **)*v7;
    a2 = (__int64 *)*a2;
  }
  v9 = v16;
  v14 = v16;
  v10 = 0LL;
  v15 = 0LL;
  while ( a2 != a3 )
  {
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *((_OWORD *)v9 + 1) = *((_OWORD *)a2 + 1);
    v9[4] = a2[4];
    *v14 = v9;
    v9[1] = v14;
    v14 = v9;
    v10 = ++v15;
    a2 = (__int64 *)*a2;
  }
  v11 = *(_QWORD ****)a1;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) += v10;
    *v9 = v11;
    v12 = v11[1];
    v11[1] = (_QWORD **)v14;
    v13 = v16[0];
    *v12 = v16[0];
    *(_QWORD *)(v13 + 8) = v12;
  }
}
