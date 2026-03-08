/*
 * XREFs of ??4MonitorData@CCursorState@@QEAAAEAU01@$$QEAU01@@Z @ 0x180275CBC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?erase@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x180278964 (-erase@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@Q.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall CCursorState::MonitorData::operator=(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 28) = *(_OWORD *)(a2 + 28);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(a1 + 60) = *(_OWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 96), (__int64 *)(a2 + 96));
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_BYTE *)(a1 + 140) = *(_BYTE *)(a2 + 140);
  return a1;
}
