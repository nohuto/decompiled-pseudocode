__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualFunctionPowerState(
        ADAPTER_RENDER **this,
        struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSetVirtualFunctionPowerState(this[1], a2, a3);
}
