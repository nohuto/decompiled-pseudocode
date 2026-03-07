__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetMmioRangeCount(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETMMIORANGECOUNT *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetMmioRangeCount(this[1], a2, a3);
}
