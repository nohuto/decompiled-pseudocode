__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetMmioRanges(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETMMIORANGES *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetMmioRanges(this[1], a2, a3);
}
