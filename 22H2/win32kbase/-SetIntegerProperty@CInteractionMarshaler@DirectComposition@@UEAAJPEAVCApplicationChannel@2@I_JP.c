/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // dl
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  char v15; // cl
  char v16; // dl
  char v17; // cl
  char v19; // cl
  unsigned __int8 v20; // cl
  char v21; // cl
  char v22; // dl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  char v26; // cl

  v5 = 0;
  v7 = a4 != 0;
  v8 = a3 - 5;
  if ( !v8 )
  {
    v26 = *((_BYTE *)this + 332);
    if ( ((v26 & 2) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 332) = v26 & 0xFD | (2 * v7);
    *a5 = 1;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v25 = *((_BYTE *)this + 332);
    if ( ((v25 & 4) != 0) == v7 )
      return v5;
    v16 = 4 * v7;
    v17 = v25 & 0xFB;
LABEL_13:
    *((_BYTE *)this + 332) = v17 | v16;
    *a5 = 1;
LABEL_14:
    *((_DWORD *)this + 4) |= 0x200u;
    return v5;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    v15 = *((_BYTE *)this + 332);
    if ( ((v15 & 8) != 0) == v7 )
      return v5;
    v16 = 8 * v7;
    v17 = v15 & 0xF7;
    goto LABEL_13;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v19 = *((_BYTE *)this + 332);
    if ( ((v19 & 0x10) != 0) == v7 )
      return v5;
    v16 = 16 * v7;
    v17 = v19 & 0xEF;
    goto LABEL_13;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v24 = *((_BYTE *)this + 332);
    if ( ((v24 & 0x20) != 0) == v7 )
      return v5;
    v22 = 32 * v7;
    v23 = v24 & 0xDF;
    goto LABEL_25;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v21 = *((_BYTE *)this + 332);
    if ( ((v21 & 0x40) != 0) == v7 )
      return v5;
    v22 = v7 << 6;
    v23 = v21 & 0xBF;
LABEL_25:
    *((_BYTE *)this + 332) = v23 | v22;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x800u;
    return v5;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      if ( *((_DWORD *)this + 82) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 82) = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x200u;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v20 = *((_BYTE *)this + 332);
    if ( v20 >> 7 != v7 )
    {
      *((_BYTE *)this + 332) = v20 & 0x7F | (v7 << 7);
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
  }
  return v5;
}
