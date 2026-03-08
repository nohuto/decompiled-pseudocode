/*
 * XREFs of ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x18029A45C
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180299EF8 (--$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180284AA4 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout::Plane>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 80 * a3;
  result = a2 + 80 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
