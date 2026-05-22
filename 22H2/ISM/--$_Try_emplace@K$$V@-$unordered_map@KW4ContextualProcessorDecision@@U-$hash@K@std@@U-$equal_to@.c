/*
 * XREFs of ??$_Try_emplace@K$$V@?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x180012F10
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800129D0 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ??$_Insert_unverified@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKW4ContextualProcessorState@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@1@@Z @ 0x1800137C0 (--$_Insert_unverified@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$_List_unchecked_iterator.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 *v9; // rax
  unsigned __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rdi
  _DWORD *v16; // rax

  v6 = 16
     * ((0x100000001B3LL
       * (a3[3] ^ (0x100000001B3LL
                 * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))))) & a1[6]);
  v7 = a1[3];
  v8 = *(__int64 **)(v7 + v6);
  v9 = v8;
  v10 = v6 + 8;
  v11 = (__int64 *)a1[1];
  while ( 1 )
  {
    if ( v8 == v11 )
      v12 = (__int64 *)a1[1];
    else
      v12 = **(__int64 ***)(v10 + v7);
    if ( v9 == v12 )
    {
      v9 = (__int64 *)a1[1];
      v13 = v9;
      goto LABEL_6;
    }
    if ( *((_DWORD *)v9 + 4) == *(_DWORD *)a3 )
      break;
    v9 = (__int64 *)*v9;
  }
  v13 = v9;
LABEL_6:
  if ( v13 == v11 )
  {
    v14 = *v11;
    if ( a1[2] == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list<T> too long");
    v15 = *(_QWORD **)(v14 + 8);
    v16 = operator new(0x18uLL);
    v16[4] = *(_DWORD *)a3;
    v16[5] = 0;
    *(_QWORD *)v16 = v14;
    *((_QWORD *)v16 + 1) = v15;
    ++a1[2];
    *(_QWORD *)(v14 + 8) = v16;
    *v15 = v16;
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
