/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6910
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00C5F70 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025C780 (-SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 *     ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025CA80 (-SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6C00 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // al
  char v8; // cl
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // dl
  char v16; // al
  char v17; // cl
  int v18; // ecx
  char v19; // al
  char v20; // dl
  char v21; // al
  char v22; // cl
  char v23; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1A )
  {
    switch ( a3 )
    {
      case '$':
        v10 = *((_BYTE *)this + 312);
        v11 = v10 & 0x10;
        if ( (_DWORD)a4 )
        {
          if ( v11 )
            return v5;
          v12 = v10 | 0x10;
        }
        else
        {
          if ( !v11 )
            return v5;
          v12 = v10 & 0xEF;
        }
LABEL_23:
        *((_DWORD *)this + 4) |= 0x10000u;
LABEL_24:
        *((_BYTE *)this + 312) = v12;
        goto LABEL_20;
      case '%':
        v13 = *((_BYTE *)this + 312) & 0xBF | (a4 != 0 ? 0x40 : 0);
        *((_DWORD *)this + 4) |= 0x800000u;
        *((_BYTE *)this + 312) = v13;
LABEL_20:
        *a5 = 1;
        return v5;
      case '(':
        if ( (unsigned int)a4 <= 2 )
        {
          if ( *((_DWORD *)this + 70) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x8000000u;
          *((_DWORD *)this + 70) = a4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741811;
      case ')':
        v23 = *((_BYTE *)this + 312);
        if ( (v23 & 1) == ((_DWORD)a4 != 0) )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000000u;
        *((_BYTE *)this + 312) = ((_DWORD)a4 != 0) | v23 & 0xFE;
        goto LABEL_20;
      case '*':
        if ( *((_DWORD *)this + 71) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x20000000u;
        *((_DWORD *)this + 71) = a4;
        goto LABEL_20;
      case '+':
        if ( ((_DWORD)a4 != 0) == (*((_BYTE *)this + 313) & 1) )
          return v5;
        v14 = (_DWORD)a4 != 0;
        v15 = *((_BYTE *)this + 313) & 0xFE;
        break;
      case '0':
        v21 = *((_BYTE *)this + 312);
        v22 = v21 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v22 )
            return v5;
          v12 = v21 | 0x20;
        }
        else
        {
          if ( !v22 )
            return v5;
          v12 = v21 & 0xDF;
        }
        *((_DWORD *)this + 4) |= 0x20000u;
        goto LABEL_24;
      case '3':
        if ( ((_DWORD)a4 != 0) == ((*((unsigned __int8 *)this + 313) >> 1) & 1) )
          return v5;
        v14 = (_DWORD)a4 != 0 ? 2 : 0;
        v15 = *((_BYTE *)this + 313) & 0xFD;
        break;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x10000u;
    *((_BYTE *)this + 313) = v15 | v14;
    goto LABEL_20;
  }
  if ( a3 == 26 )
  {
    v7 = *((_BYTE *)this + 312);
    v8 = v7 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v8 )
        return v5;
      v12 = v7 | 8;
    }
    else
    {
      if ( !v8 )
        return v5;
      v12 = v7 & 0xF7;
    }
    goto LABEL_23;
  }
  if ( a3 > 0x10 )
  {
    switch ( a3 )
    {
      case 0x11u:
        v16 = *((_BYTE *)this + 312);
        v17 = v16 & 2;
        if ( (_DWORD)a4 )
        {
          if ( v17 )
            return v5;
          v12 = v16 | 2;
        }
        else
        {
          if ( !v17 )
            return v5;
          v12 = v16 & 0xFD;
        }
        break;
      case 0x12u:
        v19 = *((_BYTE *)this + 312);
        v20 = v19 & 4;
        if ( (_DWORD)a4 )
        {
          if ( v20 )
            return v5;
          v12 = v19 | 4;
        }
        else
        {
          if ( !v20 )
            return v5;
          v12 = v19 & 0xFB;
        }
        break;
      case 0x13u:
        if ( (unsigned __int64)(a4 + 1) <= 2 )
        {
          if ( *((_DWORD *)this + 68) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 68) = a4;
          goto LABEL_17;
        }
        return (unsigned int)-1073741811;
      case 0x14u:
        if ( (unsigned __int64)(a4 + 1) > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 69) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 69) = a4;
LABEL_66:
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x8000u;
        return v5;
      case 0x15u:
        if ( (unsigned __int64)(a4 + 1) <= 2 || a4 == 3 )
        {
          if ( *((_DWORD *)this + 69) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 69) = a4;
          goto LABEL_17;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x80000u;
    goto LABEL_24;
  }
  switch ( a3 )
  {
    case 0x10u:
      if ( *((_DWORD *)this + 77) == a4 )
        return v5;
      *((_DWORD *)this + 77) = a4;
      goto LABEL_71;
    case 7u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 65) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 65) = a4;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    case 8u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 64) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 64) = a4;
LABEL_17:
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x8000u;
        return v5;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 9 )
  {
    if ( a3 == 13 )
    {
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 67) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 67) = a4;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    }
    if ( a3 == 15 )
    {
      if ( (unsigned __int64)a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 76) == a4 )
        return v5;
      *((_DWORD *)this + 76) = a4;
LABEL_71:
      *((_DWORD *)this + 4) |= 0x40000u;
      goto LABEL_20;
    }
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  if ( a4 < -1 || a4 > 2 )
    return (unsigned int)-1073741811;
  if ( (_DWORD)a4 == -1 )
  {
    v18 = 5;
  }
  else if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
      v18 = 2;
    else
      v18 = 4;
  }
  else
  {
    v18 = 0;
  }
  if ( *((_DWORD *)this + 66) != v18 )
  {
    *((_DWORD *)this + 66) = v18;
    goto LABEL_66;
  }
  return v5;
}
