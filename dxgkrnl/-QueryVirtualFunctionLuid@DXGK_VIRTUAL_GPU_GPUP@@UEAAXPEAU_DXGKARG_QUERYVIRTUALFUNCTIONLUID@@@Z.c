void __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryVirtualFunctionLuid(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiQueryVirtualFunctionLuid(this[1], a2, a3);
}
