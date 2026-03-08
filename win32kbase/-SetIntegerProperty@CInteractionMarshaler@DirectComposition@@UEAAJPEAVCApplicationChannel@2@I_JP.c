/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00A2014 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi
  char v7; // dl
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  char v15; // cl
  char v16; // dl
  char v17; // cl
  char v19; // cl
  char v20; // cl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  unsigned __int8 v26; // cl

  v5 = 0;
  v7 = a4 != 0;
  if ( a3 <= 0xD )
  {
    if ( a3 != 13 )
    {
      v11 = a3 - 5;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 3;
            if ( v14 )
            {
              if ( v14 != 1 )
                return (unsigned int)-1073741811;
              v19 = *((_BYTE *)this + 332);
              if ( ((v19 & 0x20) != 0) == v7 )
                return v5;
              v16 = 32 * v7;
              v17 = v19 & 0xDF;
            }
            else
            {
              v15 = *((_BYTE *)this + 332);
              if ( ((v15 & 0x10) != 0) == v7 )
                return v5;
              v16 = 16 * v7;
              v17 = v15 & 0xEF;
            }
          }
          else
          {
            v21 = *((_BYTE *)this + 332);
            if ( ((v21 & 8) != 0) == v7 )
              return v5;
            v16 = 8 * v7;
            v17 = v21 & 0xF7;
          }
        }
        else
        {
          v22 = *((_BYTE *)this + 332);
          if ( ((v22 & 4) != 0) == v7 )
            return v5;
          v16 = 4 * v7;
          v17 = v22 & 0xFB;
        }
      }
      else
      {
        v23 = *((_BYTE *)this + 332);
        if ( ((v23 & 2) != 0) == v7 )
          return v5;
        v16 = 2 * v7;
        v17 = v23 & 0xFD;
      }
      *((_BYTE *)this + 332) = v17 | v16;
LABEL_15:
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x200u;
      return v5;
    }
    v24 = *((_BYTE *)this + 332);
    if ( ((v24 & 0x40) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 332) = v24 & 0xBF | (v7 << 6);
    *a5 = 1;
LABEL_37:
    *((_DWORD *)this + 4) |= 0x800u;
    return v5;
  }
  v8 = a3 - 14;
  if ( !v8 )
  {
    v26 = *((_BYTE *)this + 332);
    if ( v26 >> 7 == v7 )
      return v5;
    *((_BYTE *)this + 332) = v26 & 0x7F | (v7 << 7);
    *a5 = 1;
    goto LABEL_37;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      if ( *((_DWORD *)this + 82) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 82) = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x200u;
      }
      return v5;
    }
    if ( v10 == 1 && a4 )
    {
      v20 = *((_BYTE *)this + 332);
      if ( (v20 & 1) == v7 )
        return v5;
      *((_BYTE *)this + 332) = v7 | v20 & 0xFE;
      DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(this);
      goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
  v25 = *((_BYTE *)this + 333);
  if ( (v25 & 1) != v7 )
  {
    *((_BYTE *)this + 333) = v7 | v25 & 0xFE;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x1000u;
  }
  return v5;
}
