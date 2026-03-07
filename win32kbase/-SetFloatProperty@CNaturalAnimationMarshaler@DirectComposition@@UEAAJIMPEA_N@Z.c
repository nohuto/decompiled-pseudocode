__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  float *v5; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v6; // rcx
  bool *v7; // r9
  unsigned int v8; // r10d
  float *v9; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v10; // rcx
  bool *v11; // r9
  __int64 v12; // rcx
  float *v13; // rdx
  bool v14; // cf
  int v15; // edx
  __int64 v16; // rcx

  *a4 = 0;
  if ( a2 > 0x2C )
  {
    switch ( a2 )
    {
      case '-':
        v13 = (float *)((char *)this + 156);
        goto LABEL_45;
      case '.':
        v13 = (float *)((char *)this + 160);
        goto LABEL_45;
      case '0':
        v15 = 2;
        break;
      case '1':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 2);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        v14 = a3 < 0.0;
LABEL_40:
        if ( v14 )
          return (unsigned int)-1073741811;
        *((float *)this + 43) = a3;
LABEL_37:
        *((_DWORD *)this + 4) |= 0x10000u;
        return v8;
      case '2':
        v15 = 1;
        break;
      case '3':
        v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 1);
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        if ( a3 < 0.0 )
          return (unsigned int)-1073741811;
        v14 = a3 > 1.0;
        goto LABEL_40;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    v8 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, v15);
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    if ( a3 < 0.0 )
      return (unsigned int)-1073741811;
    *((float *)this + 42) = a3;
    goto LABEL_37;
  }
  if ( a2 != 44 )
  {
    if ( a2 != 16 )
    {
      switch ( a2 )
      {
        case '$':
          v9 = (float *)((char *)this + 140);
          break;
        case '%':
          v9 = (float *)((char *)this + 144);
          break;
        case '&':
          v9 = (float *)((char *)this + 148);
          break;
        case '(':
          v5 = (float *)((char *)this + 128);
          goto LABEL_13;
        case ')':
          v5 = (float *)((char *)this + 132);
          goto LABEL_13;
        case '*':
          v5 = (float *)((char *)this + 136);
LABEL_13:
          DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v5, a4);
          DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(v6, v7);
          return v8;
        default:
          return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
      }
      DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v9, a4);
      DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(v10, v11);
      return v8;
    }
    if ( a3 >= 0.0 )
    {
      if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, (float *)this + 46, a4) )
        *(_DWORD *)(v12 + 16) |= 0x20000u;
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  v13 = (float *)((char *)this + 152);
LABEL_45:
  if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v13, a4) )
    *(_DWORD *)(v16 + 16) |= 0x8000u;
  return v8;
}
