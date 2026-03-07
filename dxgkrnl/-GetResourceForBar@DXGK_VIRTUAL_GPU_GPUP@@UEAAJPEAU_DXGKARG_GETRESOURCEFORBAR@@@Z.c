__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetResourceForBar(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETRESOURCEFORBAR *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetResourceForBar(this[1], a2, a3);
}
