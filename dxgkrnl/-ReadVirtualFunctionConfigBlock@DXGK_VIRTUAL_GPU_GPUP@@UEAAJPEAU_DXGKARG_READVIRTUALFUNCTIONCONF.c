/*
 * XREFs of ?ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C036CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C03689CC (-DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBL.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ReadVirtualFunctionConfigBlock(
        ADAPTER_RENDER **this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfigBlock(this[1], a2, a3);
}
