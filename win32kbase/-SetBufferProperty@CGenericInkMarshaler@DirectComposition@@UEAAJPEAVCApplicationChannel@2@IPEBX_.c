int __fastcall DirectComposition::CGenericInkMarshaler::SetBufferProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const unsigned __int8 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int result; // eax
  __int64 v7; // xmm0_8

  result = 0;
  *a6 = 0;
  if ( !a3 )
    return DirectComposition::CGenericInkMarshaler::SetProperties(this, a4, a5, a6);
  if ( a3 == 3 )
    return DirectComposition::CGenericInkMarshaler::AddSegments(this, a4, a5, a6);
  if ( a3 != 10 || !a4 || a5 != 40 )
    return -1073741811;
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)a4;
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a4 + 1);
  v7 = *((_QWORD *)a4 + 4);
  *((_DWORD *)this + 4) &= ~0x100u;
  *((_QWORD *)this + 27) = v7;
  *((_BYTE *)this + 180) = 1;
  *a6 = 1;
  return result;
}
