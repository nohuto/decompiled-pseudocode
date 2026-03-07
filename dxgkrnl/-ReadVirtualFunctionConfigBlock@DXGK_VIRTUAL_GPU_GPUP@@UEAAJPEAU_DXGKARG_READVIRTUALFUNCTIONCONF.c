__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ReadVirtualFunctionConfigBlock(
        ADAPTER_RENDER **this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfigBlock(this[1], a2, a3);
}
