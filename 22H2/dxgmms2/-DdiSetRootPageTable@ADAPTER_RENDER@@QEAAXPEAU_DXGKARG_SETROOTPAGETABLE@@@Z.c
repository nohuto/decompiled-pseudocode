/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0018798
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00AD180 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00C2CB8 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00C48E4 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C0108EA8 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  DxgCoreInterface[50](this, a2);
}
