/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0014F54
 * Callers:
 *     ??0VSYNC_TIME_STATS@@QEAA@XZ @ 0x1C0023B30 (--0VSYNC_TIME_STATS@@QEAA@XZ.c)
 *     ??0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C004A5D0 (--0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ.c)
 *     ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C004A6E8 (--0DISPLAYSTATECHECKER@@QEAA@XZ.c)
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C006DE4C (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01C22D0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01C35A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C4F60 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C01DDC80 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C01FB000 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FC874 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01FEF00 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020C920 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020D180 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C020E370 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C02167C4 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C022286C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1C02CDB00 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02CDBC8 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02DC420 (DxgkUpdateGpuVirtualAddress.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C02E69A0 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0323738 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C03378D4 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CFC80 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
