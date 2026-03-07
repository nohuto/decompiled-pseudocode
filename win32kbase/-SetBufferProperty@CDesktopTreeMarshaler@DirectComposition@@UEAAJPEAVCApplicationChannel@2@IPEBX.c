__int64 __fastcall DirectComposition::CDesktopTreeMarshaler::SetBufferProperty(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v7; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( a5 != 8 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 14) )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 15) )
    return (unsigned int)-1073741811;
  v7 = *a4;
  if ( !*a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = v7;
    *a6 = 1;
  }
  return v6;
}
