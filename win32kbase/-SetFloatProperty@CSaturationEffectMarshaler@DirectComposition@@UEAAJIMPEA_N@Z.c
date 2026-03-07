__int64 __fastcall DirectComposition::CSaturationEffectMarshaler::SetFloatProperty(
        DirectComposition::CSaturationEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v4; // al

  v4 = 0;
  if ( a2 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 28) != a3 )
  {
    *((float *)this + 28) = a3;
    v4 = 1;
  }
  *a4 = v4;
  return 0LL;
}
