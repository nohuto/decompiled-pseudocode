/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F484
 * Callers:
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C00463FC (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0047980 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C004A7A0 (--1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006DD80 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C006DE08 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01C22D0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020C920 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020D180 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C020E2E4 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C020E370 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C020E544 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02BAE64 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C02E6930 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     DxgkCheckDisplayState @ 0x1C02F9800 (DxgkCheckDisplayState.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1C03235A4 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C032B384 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C035DE60 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CFC80 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
