__int64 __fastcall EtwpGetNextEventOffsetType(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // eax
  bool v9; // cf
  unsigned int v10; // eax
  bool v12; // zf
  int v13; // eax

  *a3 = 0;
  v4 = *a1;
  v5 = a2;
  if ( !(_DWORD)v4 || a2 < 0x48 || a2 >= (unsigned __int64)(v4 - 4) )
    return 0LL;
  v6 = *(unsigned int *)((char *)a1 + a2);
  if ( (v6 & 0xFF000000) == 0x90000000 )
  {
    v8 = (unsigned __int16)v6;
    v7 = 15;
    v9 = (unsigned __int16)v6 < 8u;
    goto LABEL_12;
  }
  if ( (v6 & 0xFF000000) != 0xC0000000 )
    return 0LL;
  v7 = BYTE2(v6);
  if ( BYTE2(v6) > 0xDu )
  {
    if ( BYTE2(v6) == 16 || BYTE2(v6) == 17 )
    {
      if ( v5 >= v4 - 8 )
        return 0LL;
      v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
      v9 = v8 < 0x10;
      goto LABEL_12;
    }
    if ( BYTE2(v6) == 18 || BYTE2(v6) == 19 )
      goto LABEL_11;
    v13 = BYTE2(v6) - 20;
    v12 = BYTE2(v6) == 20;
LABEL_24:
    if ( !v12 && v13 != 1 )
      return 0LL;
    v8 = (unsigned __int16)v6;
    v9 = (unsigned __int16)v6 < 0x30u;
    goto LABEL_12;
  }
  if ( BYTE2(v6) != 13 )
  {
    if ( BYTE2(v6) == 1 || BYTE2(v6) == 2 )
    {
      if ( v5 >= v4 - 8 )
        return 0LL;
      v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
      v9 = v8 < 0x20;
      goto LABEL_12;
    }
    if ( BYTE2(v6) == 3 || BYTE2(v6) == 4 )
    {
      if ( v5 >= v4 - 8 )
        return 0LL;
      v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
      v9 = v8 < 0x18;
      goto LABEL_12;
    }
    v13 = BYTE2(v6) - 10;
    v12 = BYTE2(v6) == 10;
    goto LABEL_24;
  }
LABEL_11:
  v8 = (unsigned __int16)v6;
  v9 = (unsigned __int16)v6 < 0x50u;
LABEL_12:
  if ( !v9 )
  {
    v10 = (v8 + 7) & 0xFFFFFFF8;
    if ( v10 < (unsigned int)v4 && v10 + (unsigned int)v5 <= (unsigned int)v4 )
    {
      *a3 = v10;
      return v7;
    }
  }
  return 0LL;
}
