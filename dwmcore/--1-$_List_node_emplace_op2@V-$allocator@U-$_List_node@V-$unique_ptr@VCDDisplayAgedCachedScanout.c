/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180285030
 * Callers:
 *     ??$_Emplace@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@1@QEAU21@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x180284BC0 (--$_Emplace@PEAVCDDisplayAgedCachedScanout@@@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x1802854CC (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rcx
  CDDisplayAgedCachedScanout *v4; // rcx
  void *v5; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(CDDisplayAgedCachedScanout **)(v3 + 16);
    if ( v4 )
      CDDisplayAgedCachedScanout::`scalar deleting destructor'(v4, a2);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 0x18uLL);
}
