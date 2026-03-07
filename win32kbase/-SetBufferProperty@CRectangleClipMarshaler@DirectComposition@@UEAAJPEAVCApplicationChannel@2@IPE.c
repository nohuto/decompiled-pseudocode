__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetBufferProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8

  v6 = 0;
  v7 = a3 - 16;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 || a5 != 8 || !*((_BYTE *)this + 145) )
          return (unsigned int)-1073741811;
        v12 = a4->m128i_i64[0];
        *((_DWORD *)this + 4) &= ~0x800u;
        *((_QWORD *)this + 14) = v12;
      }
      else
      {
        if ( a5 != 8 || !*((_BYTE *)this + 145) )
          return (unsigned int)-1073741811;
        v11 = a4->m128i_i64[0];
        *((_DWORD *)this + 4) &= ~0x4000u;
        *((_QWORD *)this + 13) = v11;
      }
    }
    else
    {
      if ( a5 != 8 || !*((_BYTE *)this + 145) )
        return (unsigned int)-1073741811;
      v13 = a4->m128i_i64[0];
      *((_DWORD *)this + 4) &= ~0x1000u;
      *((_QWORD *)this + 12) = v13;
    }
    *a6 = 1;
    return v6;
  }
  if ( a5 != 16 || *((_BYTE *)this + 145) )
    return (unsigned int)-1073741811;
  DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(this, a2, a4, a6);
  return v6;
}
