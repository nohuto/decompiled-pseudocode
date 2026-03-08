/*
 * XREFs of ?GetVirtualGpuInfo@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z @ 0x1C036CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z @ 0x1C0367ADC (-DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetVirtualGpuInfo(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetVirtualGpuInfo(this[1], a2, a3);
}
