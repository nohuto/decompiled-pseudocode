/*
 * XREFs of ?WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C036D570
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C03699E8 (-DdiWriteVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::WriteVirtualFunctionConfig(
        ADAPTER_RENDER **this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiWriteVirtualFunctionConfig(this[1], a2, a3);
}
