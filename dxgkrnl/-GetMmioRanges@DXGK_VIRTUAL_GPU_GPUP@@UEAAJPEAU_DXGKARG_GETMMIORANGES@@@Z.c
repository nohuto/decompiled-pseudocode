/*
 * XREFs of ?GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C036CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetMmioRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C03674C8 (-DdiGetMmioRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetMmioRanges(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETMMIORANGES *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetMmioRanges(this[1], a2, a3);
}
