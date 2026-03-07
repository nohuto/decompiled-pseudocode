__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetBackingResource(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETBACKINGRESOURCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetBackingResource(this[1], a2, a3);
}
