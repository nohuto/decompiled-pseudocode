/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C036CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0368780 (-DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ReadVirtualFunctionConfig(
        ADAPTER_RENDER **this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfig(this[1], a2, a3);
}
