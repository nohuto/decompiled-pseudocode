/*
 * XREFs of ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180284AA4
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284B38 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180284D7C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$defau.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x1802854CC (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x18029A03C (--$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScan.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAUIDisplayScanout@4567@@Z @ 0x18029A37C (-Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Co.c)
 *     ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x18029A45C (-_Change_array@-$vector@UPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScanou.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v3 += 80LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
