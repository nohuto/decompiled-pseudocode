__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetBufferProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v8; // ecx
  int v9; // eax

  v6 = 0;
  if ( a3 == 2 )
  {
    if ( (*((_DWORD *)this + 15) & 0x20) == 0 )
    {
      if ( a5 == 8 )
      {
        *(_QWORD *)((char *)this + 116) = *(_QWORD *)a4;
        *((_DWORD *)this + 15) |= 0x20u;
        *a6 = 1;
        return v6;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  if ( a3 == 4 )
  {
    if ( (*((_DWORD *)this + 15) & 0x10) == 0 )
    {
      if ( a5 == 16 )
      {
        *(_OWORD *)((char *)this + 76) = *(_OWORD *)a4;
        *((_DWORD *)this + 15) |= 0x10u;
        goto LABEL_10;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  if ( a3 != 6 || a5 != 8 )
    return (unsigned int)-1073741811;
  v8 = a4[1];
  v9 = *a4;
  if ( *(_QWORD *)a4 != __PAIR64__(*((_DWORD *)this + 23), *((_DWORD *)this + 24)) )
  {
    *((_DWORD *)this + 14) |= 0x20u;
    *((_DWORD *)this + 23) = v8;
    *((_DWORD *)this + 24) = v9;
LABEL_10:
    *a6 = 1;
  }
  return v6;
}
