/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002C6F4
 * Callers:
 *     VidSchTerminateContext @ 0x1C00897F0 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[24](this, a2);
}
