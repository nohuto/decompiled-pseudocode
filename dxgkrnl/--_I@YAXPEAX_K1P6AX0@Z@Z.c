/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224
 * Callers:
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C00453C4 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0046914 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C0049740 (--1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006D150 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C006D1D8 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C019CB50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C01FDF70 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C01FF0D4 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C01FF160 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C01FF334 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02B5F64 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C02E1BA0 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     DxgkCheckDisplayState @ 0x1C02F49D0 (DxgkCheckDisplayState.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1C031EB64 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0326944 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C03593D0 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CB430 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
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
