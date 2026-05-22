/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18014A038
 * Callers:
 *     ?_Copy_assign@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x18014DBF0 (-_Copy_assign@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180012DD0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@QEAAXXZ @ 0x18014DF30 (-clear@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator@U-$pair@$$CBKW4Cont.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Assign_cast<std::pair<unsigned long,enum ContextualProcessorDecision> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  _DWORD **v6; // r14
  _DWORD *v7; // rcx
  _DWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  size_t size_of; // rax
  _DWORD **v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF

  v6 = *(_DWORD ***)a1;
  v7 = **(_DWORD ***)a1;
  while ( v7 != (_DWORD *)v6 )
  {
    if ( a2 == a3 )
    {
      if ( v7 == **(_DWORD ***)a1 && v6 == *(_DWORD ***)a1 )
      {
        std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::clear(a1);
      }
      else
      {
        while ( v7 != (_DWORD *)v6 )
        {
          v8 = *(_DWORD **)v7;
          **((_QWORD **)v7 + 1) = *(_QWORD *)v7;
          *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *((_QWORD *)v7 + 1);
          std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x18);
          --*(_QWORD *)(a1 + 8);
          v7 = v8;
        }
      }
      return;
    }
    v7[4] = *((_DWORD *)a2 + 4);
    v7[5] = *((_DWORD *)a2 + 5);
    v7 = *(_DWORD **)v7;
    a2 = (__int64 *)*a2;
  }
  v9 = v17;
  v15 = v17;
  v10 = 0LL;
  v16 = 0LL;
  while ( a2 != a3 )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v9[2] = a2[2];
    *v15 = v9;
    v9[1] = v15;
    v15 = v9;
    v10 = ++v16;
    a2 = (__int64 *)*a2;
  }
  v12 = *(_DWORD ***)a1;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) += v10;
    *v9 = v12;
    v13 = v12[1];
    v12[1] = v15;
    v14 = v17[0];
    *v13 = v17[0];
    *(_QWORD *)(v14 + 8) = v13;
  }
}
