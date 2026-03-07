__int64 __fastcall DirectComposition::CMeshGeometry2DMarshaler::SetIntegerProperty(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 14) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 14) = a4;
    *a5 = 1;
  }
  return result;
}
