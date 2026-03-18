/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00993D0
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00B9E10 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0226660 (-SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 *     ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C02267E0 (-SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0099660 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
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
  int v13; // ecx
  char v14; // al
  char v15; // cl
  char v16; // cl
  char v17; // al
  char v18; // dl
  char v19; // al
  char v20; // dl
  char v21; // al
  char v22; // cl
  char v23; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1B )
  {
    if ( a3 != 37 )
    {
      switch ( a3 )
      {
        case '&':
          v16 = *((_BYTE *)this + 320) & 0xBF | (a4 != 0 ? 0x40 : 0);
          *((_DWORD *)this + 4) |= 0x800000u;
          *((_BYTE *)this + 320) = v16;
          goto LABEL_24;
        case ')':
          if ( (unsigned int)a4 > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 72) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x8000000u;
          *((_DWORD *)this + 72) = a4;
LABEL_24:
          *a5 = 1;
          return v5;
        case '*':
          v23 = *((_BYTE *)this + 320);
          if ( (v23 & 1) == ((_DWORD)a4 != 0) )
            return v5;
          *((_DWORD *)this + 4) |= 0x10000000u;
          *((_BYTE *)this + 320) = ((_DWORD)a4 != 0) | v23 & 0xFE;
          goto LABEL_24;
        case '+':
          if ( *((_DWORD *)this + 73) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x20000000u;
          *((_DWORD *)this + 73) = a4;
          goto LABEL_24;
        case ',':
          if ( ((_DWORD)a4 != 0) == (*((_BYTE *)this + 321) & 1) )
            return v5;
          v19 = (_DWORD)a4 != 0;
          v20 = *((_BYTE *)this + 321) & 0xFE;
          break;
        case '1':
          v21 = *((_BYTE *)this + 320);
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
          goto LABEL_23;
        case '4':
          if ( ((_DWORD)a4 != 0) == ((*((unsigned __int8 *)this + 321) >> 1) & 1) )
            return v5;
          v19 = (_DWORD)a4 != 0 ? 2 : 0;
          v20 = *((_BYTE *)this + 321) & 0xFD;
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
      *((_BYTE *)this + 321) = v20 | v19;
      goto LABEL_24;
    }
    v7 = *((_BYTE *)this + 320);
    v8 = v7 & 0x10;
    if ( (_DWORD)a4 )
    {
      if ( v8 )
        return v5;
      v12 = v7 | 0x10;
    }
    else
    {
      if ( !v8 )
        return v5;
      v12 = v7 & 0xEF;
    }
LABEL_22:
    *((_DWORD *)this + 4) |= 0x10000u;
LABEL_23:
    *((_BYTE *)this + 320) = v12;
    goto LABEL_24;
  }
  if ( a3 == 27 )
  {
    v10 = *((_BYTE *)this + 320);
    v11 = v10 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v11 )
        return v5;
      v12 = v10 | 8;
    }
    else
    {
      if ( !v11 )
        return v5;
      v12 = v10 & 0xF7;
    }
    goto LABEL_22;
  }
  if ( a3 > 0x11 )
  {
    switch ( a3 )
    {
      case 0x12u:
        v14 = *((_BYTE *)this + 320);
        v15 = v14 & 2;
        if ( (_DWORD)a4 )
        {
          if ( v15 )
            return v5;
          v12 = v14 | 2;
        }
        else
        {
          if ( !v15 )
            return v5;
          v12 = v14 & 0xFD;
        }
        break;
      case 0x13u:
        v17 = *((_BYTE *)this + 320);
        v18 = v17 & 4;
        if ( (_DWORD)a4 )
        {
          if ( v18 )
            return v5;
          v12 = v17 | 4;
        }
        else
        {
          if ( !v18 )
            return v5;
          v12 = v17 & 0xFB;
        }
        break;
      case 0x14u:
        if ( (unsigned __int64)(a4 + 1) <= 2 )
        {
          if ( *((_DWORD *)this + 70) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 70) = a4;
          goto LABEL_10;
        }
        return (unsigned int)-1073741811;
      case 0x15u:
        if ( (unsigned __int64)(a4 + 1) > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 71) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 71) = a4;
LABEL_56:
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x8000u;
        return v5;
      case 0x16u:
        if ( (unsigned __int64)(a4 + 1) <= 2 || a4 == 3 )
        {
          if ( *((_DWORD *)this + 71) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 71) = a4;
          goto LABEL_10;
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
    goto LABEL_23;
  }
  if ( a3 == 17 )
  {
    if ( *((_DWORD *)this + 79) == a4 )
      return v5;
    *((_DWORD *)this + 79) = a4;
LABEL_65:
    *((_DWORD *)this + 4) |= 0x40000u;
    goto LABEL_24;
  }
  if ( a3 == 7 )
  {
    if ( (unsigned __int64)(a4 + 1) <= 2 )
    {
      if ( *((_DWORD *)this + 67) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 67) = a4;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 8 )
  {
    if ( a3 != 9 )
    {
      if ( a3 != 14 )
      {
        if ( a3 == 16 )
        {
          if ( (unsigned __int64)a4 > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 78) == a4 )
            return v5;
          *((_DWORD *)this + 78) = a4;
          goto LABEL_65;
        }
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
      }
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 69) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 69) = a4;
        goto LABEL_10;
      }
      return (unsigned int)-1073741811;
    }
    if ( a4 < -1 || a4 > 2 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)a4 == -1 )
    {
      v13 = 5;
    }
    else if ( (_DWORD)a4 )
    {
      if ( (_DWORD)a4 == 1 )
        v13 = 2;
      else
        v13 = 4;
    }
    else
    {
      v13 = 0;
    }
    if ( *((_DWORD *)this + 68) == v13 )
      return v5;
    *((_DWORD *)this + 68) = v13;
    goto LABEL_56;
  }
  if ( (unsigned __int64)(a4 + 1) > 2 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 66) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 66) = a4;
LABEL_10:
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  return v5;
}
