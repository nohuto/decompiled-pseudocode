__int64 __fastcall DirectComposition::CEllipseGeometryMarshaler::SetBufferProperty(
        DirectComposition::CEllipseGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  int v7; // r8d
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 4;
  if ( v7 )
  {
    if ( v7 == 1 && a4 && a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x1000u;
      *((_QWORD *)this + 13) = v8;
LABEL_6:
      *a6 = 1;
      return result;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v9 = *a4;
    *((_DWORD *)this + 4) |= 0x800u;
    *((_QWORD *)this + 12) = v9;
    goto LABEL_6;
  }
  return 3221225485LL;
}
