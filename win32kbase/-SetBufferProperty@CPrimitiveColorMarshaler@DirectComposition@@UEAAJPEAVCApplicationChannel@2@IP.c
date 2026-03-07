__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetBufferProperty(
        DirectComposition::CPrimitiveColorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 16 )
  {
    v8 = *((_QWORD *)this + 7) - *a4;
    if ( !v8 )
      v8 = *((_QWORD *)this + 8) - a4[1];
    if ( v8 )
    {
      *(_OWORD *)((char *)this + 56) = *(_OWORD *)a4;
      *a6 = 1;
    }
    if ( *((_QWORD *)this + 5) )
    {
      DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
