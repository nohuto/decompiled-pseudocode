__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  switch ( a3 )
  {
    case 9:
      if ( a5 == 16 )
      {
        *((_OWORD *)this + 9) = *(_OWORD *)a4;
        *a6 = 1;
        return result;
      }
      break;
    case 11:
      if ( a5 == 16 )
      {
        *((_OWORD *)this + 10) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x8000u;
        return result;
      }
      break;
    case 14:
      if ( a5 == 16 )
      {
        *((_OWORD *)this + 11) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x4000u;
        return result;
      }
      break;
    default:
      return DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return 3221225485LL;
}
