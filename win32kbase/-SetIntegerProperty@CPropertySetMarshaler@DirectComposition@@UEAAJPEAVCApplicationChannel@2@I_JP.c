__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetIntegerProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 3 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  if ( *((_DWORD *)this + 26) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 26) = a4;
    *a5 = 1;
  }
  return result;
}
