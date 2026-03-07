void __fastcall DXGK_VIRTUAL_GPU_PARAV::GetDeviceLocation(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETDEVICELOCATION *a2)
{
  *(_QWORD *)&a2->BusNumber = 0LL;
  a2->SegmentNumber = 0;
}
