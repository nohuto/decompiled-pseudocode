__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 56) )
      return v5;
    *((_DWORD *)this + 4) |= 0x800u;
    *((_BYTE *)this + 56) = a4 != 0;
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 57) )
      return v5;
    *((_DWORD *)this + 4) |= 0x200u;
    *((_BYTE *)this + 57) = a4 != 0;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
