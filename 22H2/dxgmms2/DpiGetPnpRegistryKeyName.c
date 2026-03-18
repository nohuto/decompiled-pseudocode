/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C001954C
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00BD1E8 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(ADAPTER_DISPLAY *a1)
{
  return DxgCoreInterface[2](a1, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)2);
}
