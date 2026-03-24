/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01E5100
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A2D10 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01DD600 (-SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009E600 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  bool v7; // dl
  int v8; // ecx
  bool v9; // dl
  char v10; // al
  char v11; // dl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  unsigned __int8 v19; // r8
  char v20; // cl
  char v21; // al
  char v22; // cl
  char v23; // cl
  char v24; // al
  char v25; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1B )
  {
    switch ( a3 )
    {
      case '%':
        v24 = *((_BYTE *)this + 288);
        v25 = v24 & 0x10;
        if ( (_DWORD)a4 )
        {
          if ( v25 )
            return v5;
          v12 = v24 | 0x10;
        }
        else
        {
          if ( !v25 )
            return v5;
          v12 = v24 & 0xEF;
        }
        break;
      case '&':
        v23 = *((_BYTE *)this + 288) & 0x7F | (a4 != 0 ? 0x80 : 0);
        *((_DWORD *)this + 4) |= 0x800000u;
        *((_BYTE *)this + 288) = v23;
        goto LABEL_111;
      case ')':
        v21 = *((_BYTE *)this + 288);
        v22 = v21 & 0x40;
        if ( (_DWORD)a4 )
        {
          if ( v22 )
            return v5;
          v12 = v21 | 0x40;
        }
        else
        {
          if ( !v22 )
            return v5;
          v12 = v21 & 0xBF;
        }
        break;
      case '*':
        if ( (unsigned int)a4 <= 2 )
        {
          if ( *((_DWORD *)this + 64) != (_DWORD)a4 )
          {
            *((_DWORD *)this + 4) |= 0x8000000u;
            *((_DWORD *)this + 64) = a4;
            goto LABEL_111;
          }
          return v5;
        }
        return (unsigned int)-1073741811;
      case '+':
        v20 = *((_BYTE *)this + 288);
        if ( (v20 & 1) != ((_DWORD)a4 != 0) )
        {
          *((_DWORD *)this + 4) |= 0x10000000u;
          *((_BYTE *)this + 288) = ((_DWORD)a4 != 0) | v20 & 0xFE;
          goto LABEL_111;
        }
        return v5;
      case ',':
        if ( *((_DWORD *)this + 65) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 4) |= 0x20000000u;
          *((_DWORD *)this + 65) = a4;
          goto LABEL_111;
        }
        return v5;
      case '-':
        v19 = *((_BYTE *)this + 289);
        if ( ((_DWORD)a4 != 0) != ((v19 >> 1) & 1) )
        {
          *((_DWORD *)this + 4) |= 0x10000u;
          *((_BYTE *)this + 289) = v19 & 0xFD | ((_DWORD)a4 != 0 ? 2 : 0);
          goto LABEL_111;
        }
        return v5;
      case '2':
        v17 = *((_BYTE *)this + 288);
        v18 = v17 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v18 )
            return v5;
          v12 = v17 | 0x20;
        }
        else
        {
          if ( !v18 )
            return v5;
          v12 = v17 & 0xDF;
        }
        *((_DWORD *)this + 4) |= 0x20000u;
        goto LABEL_110;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
LABEL_109:
    *((_DWORD *)this + 4) |= 0x10000u;
    goto LABEL_110;
  }
  if ( a3 == 27 )
  {
    v15 = *((_BYTE *)this + 288);
    v16 = v15 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v16 )
        return v5;
      v12 = v15 | 8;
    }
    else
    {
      if ( !v16 )
        return v5;
      v12 = v15 & 0xF7;
    }
    goto LABEL_109;
  }
  if ( a3 > 0x11 )
  {
    switch ( a3 )
    {
      case 0x12u:
        v13 = *((_BYTE *)this + 288);
        v14 = v13 & 2;
        if ( (_DWORD)a4 )
        {
          if ( v14 )
            return v5;
          v12 = v13 | 2;
        }
        else
        {
          if ( !v14 )
            return v5;
          v12 = v13 & 0xFD;
        }
        break;
      case 0x13u:
        v10 = *((_BYTE *)this + 288);
        v11 = v10 & 4;
        if ( (_DWORD)a4 )
        {
          if ( v11 )
            return v5;
          v12 = v10 | 4;
        }
        else
        {
          if ( !v11 )
            return v5;
          v12 = v10 & 0xFB;
        }
        break;
      case 0x14u:
        if ( a4 + 1 > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 62) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 62) = a4;
          goto LABEL_33;
        }
        goto LABEL_34;
      case 0x15u:
        if ( a4 + 1 > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 63) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 63) = a4;
          v7 = 1;
LABEL_28:
          *a5 = v7;
          if ( v7 )
            *((_DWORD *)this + 4) |= 0x8000u;
          return v5;
        }
LABEL_27:
        v7 = 0;
        goto LABEL_28;
      case 0x16u:
        if ( a4 + 1 > 2 && a4 != 3 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 63) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 63) = a4;
          goto LABEL_33;
        }
        goto LABEL_34;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x80000u;
LABEL_110:
    *((_BYTE *)this + 288) = v12;
    goto LABEL_111;
  }
  if ( a3 != 17 )
  {
    if ( a3 == 7 )
    {
      if ( a4 + 1 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 59) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 59) = a4;
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    if ( a3 == 8 )
    {
      if ( a4 + 1 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 58) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 58) = a4;
        goto LABEL_33;
      }
LABEL_34:
      v9 = 0;
LABEL_35:
      *a5 = v9;
      if ( v9 )
        *((_DWORD *)this + 4) |= 0x8000u;
      return v5;
    }
    if ( a3 != 9 )
    {
      if ( a3 != 14 )
      {
        if ( a3 == 16 )
        {
          if ( a4 <= 2 )
          {
            if ( *((_DWORD *)this + 70) != a4 )
            {
              *((_DWORD *)this + 70) = a4;
LABEL_13:
              *((_DWORD *)this + 4) |= 0x40000u;
LABEL_111:
              *a5 = 1;
              return v5;
            }
            return v5;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
      }
      if ( a4 + 1 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 61) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 61) = a4;
LABEL_33:
        v9 = 1;
        goto LABEL_35;
      }
      goto LABEL_34;
    }
    v7 = 1;
    if ( a4 == -1LL )
    {
      v8 = 5;
    }
    else if ( a4 )
    {
      if ( a4 == 1 )
      {
        v8 = 2;
      }
      else
      {
        if ( a4 != 2 )
          return (unsigned int)-1073741811;
        v8 = 4;
      }
    }
    else
    {
      v8 = 0;
    }
    if ( *((_DWORD *)this + 60) != v8 )
    {
      *((_DWORD *)this + 60) = v8;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 71) != a4 )
  {
    *((_DWORD *)this + 71) = a4;
    goto LABEL_13;
  }
  return v5;
}
