__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ReadVirtualFunctionConfig(
        ADAPTER_RENDER **this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfig(this[1], a2, a3);
}
