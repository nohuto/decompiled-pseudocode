__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetBufferProperty(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 2 && a5 == 8 )
    {
      if ( (*((_DWORD *)this + 16) & 2) == 0 )
      {
        *((_QWORD *)this + 10) = *a4;
        *((_DWORD *)this + 16) |= 2u;
LABEL_11:
        *a6 = 1;
        return v6;
      }
      return (unsigned int)-1073741790;
    }
  }
  else if ( a5 == 16 )
  {
    if ( (*((_DWORD *)this + 16) & 1) == 0 )
    {
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)a4;
      *((_DWORD *)this + 16) |= 1u;
      goto LABEL_11;
    }
    return (unsigned int)-1073741790;
  }
  return (unsigned int)-1073741811;
}
