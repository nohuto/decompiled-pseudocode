__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // ebp
  int v7; // esi
  float v8; // xmm1_4
  bool v9; // bl
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v4 = 0;
  if ( a2 == 31 )
  {
    v7 = 0x1000000;
    if ( *((float *)this + 23) != a3 )
    {
      *((float *)this + 23) = a3;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  if ( a2 > 0x1F )
  {
    switch ( a2 )
    {
      case ' ':
        v7 = 0x1000000;
        if ( *((float *)this + 24) != a3 )
        {
          *((float *)this + 24) = a3;
          goto LABEL_11;
        }
        goto LABEL_13;
      case '!':
        v7 = 0x1000000;
        if ( *((float *)this + 25) != a3 )
        {
          *((float *)this + 25) = a3;
          goto LABEL_11;
        }
        goto LABEL_13;
      case '"':
        v7 = 0x2000000;
        if ( *((float *)this + 26) != a3 )
        {
          *((float *)this + 26) = a3;
          goto LABEL_11;
        }
        goto LABEL_13;
      case '#':
        v7 = 0x2000000;
        if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_11;
        }
        goto LABEL_13;
      case ',':
        v7 = 0x40000000;
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_11;
        }
        goto LABEL_13;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0u:
      v7 = 128;
      if ( *((float *)this + 18) != a3 )
      {
        *((float *)this + 18) = a3;
        goto LABEL_11;
      }
      goto LABEL_13;
    case 1u:
      v7 = 128;
      if ( *((float *)this + 19) != a3 )
      {
        *((float *)this + 19) = a3;
        goto LABEL_11;
      }
      goto LABEL_13;
    case 2u:
      v7 = 128;
      if ( *((float *)this + 20) != a3 )
      {
        *((float *)this + 20) = a3;
        goto LABEL_11;
      }
      goto LABEL_13;
    case 0x17u:
      v7 = 0x200000;
      if ( *((float *)this + 21) != a3 )
      {
        *((float *)this + 21) = a3;
        goto LABEL_11;
      }
      goto LABEL_13;
  }
  if ( a2 != 24 )
  {
    if ( a2 == 25 )
    {
      v7 = 0x400000;
      v8 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 28) != v8 )
      {
        *((float *)this + 28) = v8;
LABEL_11:
        v9 = 1;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v7 = 0x200000;
  if ( *((float *)this + 22) != a3 )
  {
    *((float *)this + 22) = a3;
    goto LABEL_11;
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  *a4 = v9;
  if ( DirectComposition::CResourceMarshaler::HasAnimations(this, a2) )
  {
    *a4 = 1;
    v9 = 1;
  }
  if ( !v10 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 || (v13 = v12 - 21) == 0 || (unsigned int)(v13 - 1) <= 1 )
  {
    *a4 = 1;
LABEL_23:
    *((_DWORD *)this + 4) |= v7;
    return v4;
  }
  if ( v9 )
    goto LABEL_23;
  return v4;
}
