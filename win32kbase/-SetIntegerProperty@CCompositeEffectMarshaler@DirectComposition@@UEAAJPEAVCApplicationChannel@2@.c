__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::SetIntegerProperty(
        DirectComposition::CCompositeEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  if ( a3 )
    return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *a5 = *((_DWORD *)this + 28) != a4;
  result = 0LL;
  *((_DWORD *)this + 28) = a4;
  return result;
}
