__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetBufferProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
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
  if ( a3 )
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  else if ( a4 && a5 == 80 )
  {
    v8 = (_OWORD *)((char *)this + 112);
    if ( memcmp((char *)this + 112, a4, 0x50uLL) )
    {
      *v8 = *a4;
      v8[1] = a4[1];
      v8[2] = a4[2];
      v8[3] = a4[3];
      v8[4] = a4[4];
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
