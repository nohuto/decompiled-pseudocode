/*
 * XREFs of ??$_Emplace@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@1@QEAU21@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x180284BC0
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180285030 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout.c)
 */

_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  SIZE_T size_of; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v12[0] = a1;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = *a3;
  v9 = v7;
  v12[1] = 0LL;
  v7[2] = v8;
  ++*(_QWORD *)(a1 + 8);
  v10 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v10;
  *(_QWORD *)(a2 + 8) = v7;
  *v10 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(v12);
  return v9;
}
