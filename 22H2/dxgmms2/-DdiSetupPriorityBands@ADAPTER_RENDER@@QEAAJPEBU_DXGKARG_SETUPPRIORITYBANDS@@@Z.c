/*
 * XREFs of ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C002C880
 * Callers:
 *     VidSchiInitializeNode @ 0x1C00B9AF0 (VidSchiInitializeNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetupPriorityBands(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[22](this, a2);
}
