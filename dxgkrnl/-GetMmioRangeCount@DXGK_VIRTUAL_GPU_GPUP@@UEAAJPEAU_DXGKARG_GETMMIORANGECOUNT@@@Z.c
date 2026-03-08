/*
 * XREFs of ?GetMmioRangeCount@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETMMIORANGECOUNT@@@Z @ 0x1C036CD10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetMmioRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGECOUNT@@@Z @ 0x1C03672E0 (-DdiGetMmioRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGECOUNT@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetMmioRangeCount(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETMMIORANGECOUNT *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetMmioRangeCount(this[1], a2, a3);
}
