void __fastcall DXGK_VIRTUAL_GPU_GPUP::GetDeviceLocation(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETDEVICELOCATION *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiGetDeviceLocation(this[1], a2, a3);
}
