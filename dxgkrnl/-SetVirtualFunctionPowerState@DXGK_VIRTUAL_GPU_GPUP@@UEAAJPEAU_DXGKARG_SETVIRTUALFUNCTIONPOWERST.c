/*
 * XREFs of ?SetVirtualFunctionPowerState@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C036D260
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C03690B8 (-DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualFunctionPowerState(
        ADAPTER_RENDER **this,
        struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSetVirtualFunctionPowerState(this[1], a2, a3);
}
