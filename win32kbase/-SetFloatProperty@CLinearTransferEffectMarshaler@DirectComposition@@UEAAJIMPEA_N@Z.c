__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetFloatProperty(
        DirectComposition::CLinearTransferEffectMarshaler *this,
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
      case 1u:
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_26;
        }
        break;
      case 3u:
        if ( *((float *)this + 30) != a3 )
        {
          *((float *)this + 30) = a3;
          goto LABEL_26;
        }
        break;
      case 4u:
        if ( *((float *)this + 31) != a3 )
        {
          *((float *)this + 31) = a3;
          goto LABEL_26;
        }
        break;
      case 6u:
        if ( *((float *)this + 32) != a3 )
        {
          *((float *)this + 32) = a3;
          goto LABEL_26;
        }
        break;
      case 7u:
        if ( *((float *)this + 33) != a3 )
        {
          *((float *)this + 33) = a3;
          goto LABEL_26;
        }
        break;
      case 9u:
        if ( *((float *)this + 34) != a3 )
        {
          *((float *)this + 34) = a3;
          goto LABEL_26;
        }
        break;
      case 0xAu:
        if ( *((float *)this + 35) != a3 )
        {
          *((float *)this + 35) = a3;
LABEL_26:
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
    goto LABEL_26;
  }
  *a4 = v4;
  return 0LL;
}
