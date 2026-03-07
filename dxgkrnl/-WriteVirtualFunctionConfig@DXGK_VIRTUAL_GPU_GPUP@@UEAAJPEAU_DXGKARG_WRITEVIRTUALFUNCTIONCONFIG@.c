__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::WriteVirtualFunctionConfig(
        ADAPTER_RENDER **this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiWriteVirtualFunctionConfig(this[1], a2, a3);
}
