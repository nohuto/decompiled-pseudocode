/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C001958C
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00BD6E8 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(ADAPTER_DISPLAY *a1)
{
  return DxgCoreInterface[2](a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)2);
}
