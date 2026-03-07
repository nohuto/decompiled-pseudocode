__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetBufferProperty(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = 120LL;
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
      v7 = 128LL;
    }
  }
  else
  {
    v7 = 112LL;
  }
  v8 = (_QWORD *)((char *)this + v7);
  if ( (DirectComposition::CTurbulenceEffectMarshaler *)((char *)this + v7) )
  {
    if ( a4 && a5 == 8 )
    {
      if ( *v8 != *a4 )
      {
        *v8 = *a4;
        *a6 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
