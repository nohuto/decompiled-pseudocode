/*
 * XREFs of ??$_Insert@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800ACE64
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800AD0B4 (--$_Insert_or_assign@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033710 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Insert<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *((_DWORD *)v9 + 4) = *a3;
  v9[3] = *a4;
  result = Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v9 + 3);
  *v9 = a2;
  v9[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v8 = v9;
  return result;
}
