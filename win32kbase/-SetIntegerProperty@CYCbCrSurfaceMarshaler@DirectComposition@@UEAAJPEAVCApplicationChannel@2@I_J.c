__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetIntegerProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax
  bool v6; // dl

  result = 0LL;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 18) == a4 )
  {
    v6 = 0;
  }
  else
  {
    *((_DWORD *)this + 18) = a4;
    v6 = 1;
  }
  *a5 = v6;
  return result;
}
