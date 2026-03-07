bool __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  v3 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 17) )
  {
    *v3 |= 0x2000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 24) )
  {
    *v3 |= 0x4000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 40) || *((_DWORD *)this + 42) || *((_DWORD *)this + 41) || *((_DWORD *)this + 43) )
  {
    *v3 |= 0x8000u;
    return 1;
  }
  return result;
}
