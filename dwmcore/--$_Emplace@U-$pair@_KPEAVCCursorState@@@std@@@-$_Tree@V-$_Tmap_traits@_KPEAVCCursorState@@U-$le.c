/*
 * XREFs of ??$_Emplace@U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x1802744B4
 * Callers:
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x1802745F4 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x18024F910 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ??$?0U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x180274428 (--$-0U-$pair@_KPEAVCCursorState@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Emplace<std::pair<unsigned __int64,CCursorState *>>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 lower; // rax
  _QWORD *v6; // r10
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  void *v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
            a1,
            (__int64)&v11,
            a3);
  v7 = *(_OWORD *)lower;
  v14 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>(
           &v11,
           (__int64)a1,
           *a1,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    if ( v12 )
      std::_Deallocate<16,0>(v12, 0x30uLL);
    v13 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
