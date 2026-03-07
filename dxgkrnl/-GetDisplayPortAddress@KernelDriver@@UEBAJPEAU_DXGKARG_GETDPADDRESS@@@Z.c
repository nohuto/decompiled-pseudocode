__int64 __fastcall KernelDriver::GetDisplayPortAddress(KernelDriver *this, struct _DXGKARG_GETDPADDRESS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)this + 3), a2);
}
