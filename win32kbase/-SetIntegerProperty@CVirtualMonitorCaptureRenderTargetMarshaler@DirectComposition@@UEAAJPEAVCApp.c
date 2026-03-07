__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 10:
      *((_QWORD *)this + 24) = a4;
      goto LABEL_9;
    case 12:
      if ( ((_DWORD)a4 != 0) == *((_BYTE *)this + 204) )
        return v5;
      *((_DWORD *)this + 4) |= 0x4000u;
      *((_BYTE *)this + 204) = (_DWORD)a4 != 0;
LABEL_10:
      *a5 = 1;
      return v5;
    case 13:
      *((_DWORD *)this + 50) = a4;
LABEL_9:
      *((_DWORD *)this + 4) |= 0x4000u;
      goto LABEL_10;
  }
  return (unsigned int)DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
