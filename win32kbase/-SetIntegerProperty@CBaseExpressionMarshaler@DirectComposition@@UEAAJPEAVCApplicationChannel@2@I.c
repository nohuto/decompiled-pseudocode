__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  char v10; // al
  char v11; // r8
  char v12; // al
  char v13; // r8
  int v15; // r8d
  bool v16; // zf
  int v17; // r8d
  unsigned __int8 v18; // r8

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 > 52 )
    {
      if ( (_DWORD)a4 == 69 || (_DWORD)a4 == 70 || (_DWORD)a4 == 71 || (_DWORD)a4 == 104 )
        goto LABEL_19;
      v16 = (_DWORD)a4 == 265;
    }
    else
    {
      if ( (_DWORD)a4 == 52 || (_DWORD)a4 == 11 || (_DWORD)a4 == 17 || (_DWORD)a4 == 18 || (_DWORD)a4 == 35 )
        goto LABEL_19;
      v16 = (_DWORD)a4 == 42;
    }
    if ( !v16 )
      return (unsigned int)-1073741811;
LABEL_19:
    if ( *((_DWORD *)this + 16) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 120) |= 2u;
    *((_DWORD *)this + 16) = a4;
    goto LABEL_12;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( (*((_BYTE *)this + 120) & 1) == (a4 != 0) )
      return v5;
    v12 = a4 != 0;
    v13 = *((_BYTE *)this + 120) & 0xFE;
    goto LABEL_11;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 20) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 24) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 24) = a4;
    goto LABEL_12;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v15 = v9 - 1;
    if ( !v15 )
    {
      if ( ((*((unsigned __int8 *)this + 120) >> 3) & 1) == (a4 != 0) )
        return v5;
      v10 = a4 != 0 ? 8 : 0;
      v11 = *((_BYTE *)this + 120) & 0xF7;
      goto LABEL_8;
    }
    v17 = v15 - 2;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v18 = *((_BYTE *)this + 120);
        if ( ((v18 >> 5) & 1) != (a4 != 0) && a4 )
        {
          *((_DWORD *)this + 4) &= ~0x400u;
          *((_BYTE *)this + 120) = v18 | 0x20;
          goto LABEL_12;
        }
        return v5;
      }
      return (unsigned int)-1073741811;
    }
    if ( ((*((unsigned __int8 *)this + 120) >> 4) & 1) == (a4 != 0) )
      return v5;
    v12 = a4 != 0 ? 0x10 : 0;
    v13 = *((_BYTE *)this + 120) & 0xEF;
LABEL_11:
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 120) = v13 | v12;
    goto LABEL_12;
  }
  if ( ((*((unsigned __int8 *)this + 120) >> 2) & 1) != (a4 != 0) )
  {
    v10 = a4 != 0 ? 4 : 0;
    v11 = *((_BYTE *)this + 120) & 0xFB;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_BYTE *)this + 120) = v11 | v10;
LABEL_12:
    *a5 = 1;
  }
  return v5;
}
