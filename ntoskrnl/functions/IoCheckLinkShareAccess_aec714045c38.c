__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  bool v6; // r13
  bool v7; // al
  int v8; // r11d
  bool v9; // r15
  bool v10; // r12
  unsigned __int8 v11; // si
  bool v12; // al
  _DWORD *v14; // rax
  char v15; // al
  bool v16; // [rsp+50h] [rbp+20h]

  v6 = (a1 & 0x21) != 0;
  v7 = (a1 & 6) != 0;
  v8 = a1 & 0x10000;
  v16 = (a1 & 0x10000) != 0;
  if ( a4 )
  {
LABEL_2:
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 74) = v6;
      *(_BYTE *)(a3 + 75) = v7;
      *(_BYTE *)(a3 + 76) = v8 != 0;
    }
    if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v8 && (a6 & 0x20) == 0 )
      return 0LL;
    v9 = (a2 & 2) != 0;
    v10 = (a2 & 4) != 0;
    v11 = a2 & 1;
    if ( a6 < 0 )
    {
      v15 = a2 & 1;
      if ( !v11 )
        v15 = 1;
      v11 = v15;
    }
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 77) = v11;
      *(_BYTE *)(a3 + 78) = v9;
      *(_BYTE *)(a3 + 79) = v10;
    }
    if ( a3 )
    {
      v14 = *(_DWORD **)(a3 + 208);
      if ( v14 )
      {
        if ( (*v14 & 1) != 0 )
          return 0LL;
      }
    }
    v12 = 0;
    if ( (a6 & 4) == 0 )
      v12 = (a1 & 0x21) != 0 && a4[4] < *a4 || a4[1] && !v11;
    if ( (a6 & 8) == 0 && !v12 )
      v12 = (a1 & 6) != 0 && a4[5] < *a4 || a4[2] && (a2 & 2) == 0;
    if ( (a6 & 0x10) != 0 )
    {
      if ( !v12 )
        goto LABEL_20;
    }
    else if ( !v12 )
    {
      if ( !a5 || (a6 & 0x40) != 0 )
      {
        if ( v8 && a4[6] < *a4 || a4[3] && (a2 & 4) == 0 )
          return 3221225539LL;
      }
      else if ( v8 && a5[2] < *a5 || a5[1] && (a2 & 4) == 0 )
      {
        return 3221225539LL;
      }
LABEL_20:
      if ( (a6 & 1) != 0 )
      {
        ++*a4;
        a4[3] += v16;
        a4[1] += v6;
        a4[2] += (a1 & 6) != 0;
        a4[4] += v11;
        a4[5] += v9;
        a4[6] += v10;
        if ( a5 )
        {
          ++*a5;
          if ( (a6 & 0x80u) == 0 )
            a5[1] += v16;
          a5[2] += v10;
        }
      }
      return 0LL;
    }
    return 3221225539LL;
  }
  if ( (a6 & 0xC) == 0xC && ((a6 & 0x10) != 0 || a5 && (a6 & 0x40) == 0) )
  {
    v7 = (a1 & 6) != 0;
    goto LABEL_2;
  }
  return 3221225485LL;
}
