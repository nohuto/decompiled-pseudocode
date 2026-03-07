__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  _OWORD *v8; // rsi

  v6 = 0;
  *a6 = 0;
  if ( a3 == 16 && a4 && a5 == 64 )
  {
    v8 = (_OWORD *)((char *)this + 72);
    if ( memcmp((char *)this + 72, a4, 0x40uLL) )
    {
      *v8 = *a4;
      v8[1] = a4[1];
      v8[2] = a4[2];
      v8[3] = a4[3];
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
