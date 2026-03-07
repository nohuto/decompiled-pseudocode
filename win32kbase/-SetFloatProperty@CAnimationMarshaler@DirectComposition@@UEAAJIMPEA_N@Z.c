__int64 __fastcall DirectComposition::CAnimationMarshaler::SetFloatProperty(
        DirectComposition::CAnimationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a4 = 0;
  if ( a2 == 6 && finite(a3) )
    *((float *)this + 34) = a3;
  else
    return (unsigned int)-1073741811;
  return v4;
}
