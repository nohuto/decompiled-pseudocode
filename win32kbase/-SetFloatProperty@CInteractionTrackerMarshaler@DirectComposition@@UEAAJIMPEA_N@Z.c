__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetFloatProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // eax

  v4 = 0;
  *a4 = 0;
  if ( a2 > 0x1E )
  {
    if ( a2 <= 0x30 )
    {
      if ( a2 != 48 )
      {
        if ( a2 == 31 )
        {
          v5 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
          *((float *)this + 42) = a3;
          *((_QWORD *)this + 11) = 0LL;
          *((_DWORD *)this + 4) = v5 | 0x80;
          *((_QWORD *)this + 12) = 0LL;
        }
        else if ( a2 == 35 )
        {
          *((float *)this + 45) = a3;
        }
        else if ( a2 == 36 )
        {
          *((float *)this + 46) = a3;
        }
        else
        {
          if ( a2 == 45 )
          {
            *((float *)this + 19) = a3 + *((float *)this + 19);
          }
          else
          {
            if ( a2 != 46 )
              return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
            *((float *)this + 20) = a3 + *((float *)this + 20);
          }
          *((_DWORD *)this + 4) &= ~0x40u;
        }
        goto LABEL_80;
      }
      *((float *)this + 22) = a3 + *((float *)this + 22);
LABEL_79:
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_80;
    }
    switch ( a2 )
    {
      case '1':
        *((float *)this + 23) = a3;
        goto LABEL_79;
      case '2':
        *((float *)this + 24) = a3;
        goto LABEL_79;
      case '>':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 37) == a3 )
          return v4;
        *((float *)this + 37) = a3;
        break;
      case '?':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *((float *)this + 38) == a3 )
          return v4;
        *((float *)this + 38) = a3;
        break;
      case '@':
        if ( a3 >= 0.0 && a3 <= 1.0 )
        {
          if ( *((float *)this + 47) == a3 )
            return v4;
          *((float *)this + 47) = a3;
          break;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    *((_DWORD *)this + 4) &= ~0x800000u;
    goto LABEL_80;
  }
  if ( a2 == 30 )
  {
    if ( *((float *)this + 41) == a3 )
      return v4;
    *((_DWORD *)this + 4) &= ~0x10000u;
    *((float *)this + 41) = a3;
    goto LABEL_80;
  }
  if ( a2 > 0xF )
  {
    if ( a2 == 24 )
    {
      if ( *((float *)this + 26) == a3 )
        return v4;
      *((float *)this + 26) = a3;
    }
    else
    {
      if ( a2 != 25 )
      {
        switch ( a2 )
        {
          case 0x1Bu:
            if ( *((float *)this + 28) == a3 )
              return v4;
            *((float *)this + 28) = a3;
            break;
          case 0x1Cu:
            if ( *((float *)this + 29) == a3 )
              return v4;
            *((float *)this + 29) = a3;
            break;
          case 0x1Du:
            if ( *((float *)this + 40) == a3 )
              return v4;
            *((_DWORD *)this + 4) &= ~0x8000u;
            *((float *)this + 40) = a3;
LABEL_80:
            *a4 = 1;
            return v4;
          default:
            return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
        }
        *((_DWORD *)this + 4) &= ~0x4000u;
        goto LABEL_80;
      }
      if ( *((float *)this + 27) == a3 )
        return v4;
      *((float *)this + 27) = a3;
    }
    *((_DWORD *)this + 4) &= ~0x2000u;
    goto LABEL_80;
  }
  switch ( a2 )
  {
    case 0xFu:
      *((float *)this + 34) = a3 + *((float *)this + 34);
      goto LABEL_12;
    case 4u:
      if ( *((float *)this + 39) == a3 )
        return v4;
      *((float *)this + 39) = a3;
      goto LABEL_80;
    case 5u:
      if ( *((float *)this + 17) == a3 )
        return v4;
      *((float *)this + 17) = a3;
      goto LABEL_80;
    case 6u:
      if ( *((float *)this + 18) == a3 )
        return v4;
      *((float *)this + 18) = a3;
      goto LABEL_80;
    case 8u:
      *((float *)this + 30) = a3;
      goto LABEL_15;
    case 9u:
      *((float *)this + 31) = a3;
LABEL_15:
      *((_DWORD *)this + 4) &= ~0x200u;
      *a4 = 1;
      *((_DWORD *)this + 4) |= 0x140u;
      *(_QWORD *)((char *)this + 132) = 0LL;
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 52) = 0;
      goto LABEL_16;
  }
  if ( a2 != 14 )
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  *((float *)this + 33) = a3 + *((float *)this + 33);
LABEL_12:
  *((_DWORD *)this + 4) &= ~0x100u;
  *a4 = 1;
  *((_DWORD *)this + 4) |= 0x40u;
LABEL_16:
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  return v4;
}
