__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2,
        __int64 a3)
{
  a2->PartitionId = *((_DWORD *)this + 6);
  return ADAPTER_RENDER::DdiVirtualGpuDriverEscape(*((ADAPTER_RENDER **)this + 1), a2, a3);
}
