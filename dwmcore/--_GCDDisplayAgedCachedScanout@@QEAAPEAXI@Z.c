/*
 * XREFs of ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x1802854CC
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180285030 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028896C (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180284AA4 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

CDDisplayAgedCachedScanout *__fastcall CDDisplayAgedCachedScanout::`scalar deleting destructor'(
        CDDisplayAgedCachedScanout *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(*(void **)this, 16 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 4));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  operator delete(this);
  return this;
}
