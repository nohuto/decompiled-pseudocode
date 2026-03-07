__int64 __fastcall KernelDriver::DdiDsiReset(KernelDriver *this, struct _DXGK_DSI_RESET *a2)
{
  if ( *((_QWORD *)this + 3) )
    return ADAPTER_DISPLAY::DdiDsiReset(*((ADAPTER_DISPLAY **)this + 3), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return 3221225664LL;
}
