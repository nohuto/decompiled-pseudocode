/*
 * XREFs of ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028896C
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180286728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180287C60 (-NotifyRealizationBitmapReleased@CDDisplaySwapChain@@UEAAXPEAUIDisplaySurface@Core@Display@Devic.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x1802854CC (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(__int64 a1, _QWORD *a2, void *a3)
{
  _QWORD *v4; // rsi
  CDDisplayAgedCachedScanout *v6; // rcx
  _QWORD *result; // rax

  v4 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  v6 = (CDDisplayAgedCachedScanout *)*((_QWORD *)a3 + 2);
  if ( v6 )
    CDDisplayAgedCachedScanout::`scalar deleting destructor'(v6);
  std::_Deallocate<16,0>(a3, 0x18uLL);
  result = a2;
  *a2 = v4;
  return result;
}
