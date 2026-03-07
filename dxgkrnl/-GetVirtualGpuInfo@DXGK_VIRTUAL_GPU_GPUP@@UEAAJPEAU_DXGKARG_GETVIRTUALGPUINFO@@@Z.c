__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetVirtualGpuInfo(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETVIRTUALGPUINFO *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetVirtualGpuInfo(this[1], a2, a3);
}
