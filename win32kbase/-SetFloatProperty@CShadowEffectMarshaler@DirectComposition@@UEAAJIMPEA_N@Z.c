__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetFloatProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v4; // al

  v4 = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 2u:
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_17;
        }
        break;
      case 3u:
        if ( *((float *)this + 30) != a3 )
        {
          *((float *)this + 30) = a3;
          goto LABEL_17;
        }
        break;
      case 4u:
        if ( *((float *)this + 31) != a3 )
        {
          *((float *)this + 31) = a3;
          goto LABEL_17;
        }
        break;
      case 5u:
        if ( *((float *)this + 32) != a3 )
        {
          *((float *)this + 32) = a3;
LABEL_17:
          v4 = 1;
        }
        break;
      default:
        return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
  }
  else if ( *((float *)this + 28) != a3 )
  {
    *((float *)this + 28) = a3;
    goto LABEL_17;
  }
  *a4 = v4;
  return 0LL;
}
