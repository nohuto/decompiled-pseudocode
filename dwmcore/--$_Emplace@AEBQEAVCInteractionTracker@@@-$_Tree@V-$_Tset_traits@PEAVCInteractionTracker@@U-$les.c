/*
 * XREFs of ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232D84
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180233668 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTrac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBQEAVCInteractionTracker@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232C60 (--$-0AEBQEAVCInteractionTracker@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAVCInteractionT.c)
 *     ??$_Find_lower_bound@PEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1802330D8 (--$_Find_lower_bound@PEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  _QWORD *v5; // r10
  __int128 v6; // xmm6
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  void *v11; // [rsp+28h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Find_lower_bound<CInteractionTracker *>(
            a1,
            &v10);
  v6 = *(_OWORD *)lower;
  v13 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CInteractionTracker *,void *>>>(
           &v10,
           (__int64)a1,
           *a1,
           v5);
    v8 = v7[1];
    v7[1] = 0LL;
    if ( v11 )
      std::_Deallocate<16,0>(v11, 0x28uLL);
    v12 = v6;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
