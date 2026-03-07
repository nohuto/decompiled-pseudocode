__int64 ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v3; // edi
  _QWORD *v5; // r11
  unsigned __int16 v7; // ax
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  _DWORD *v15; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int16 *v18; // [rsp+40h] [rbp+18h]

  v17 = 0LL;
  v3 = 0;
  v5 = &v17 + 8;
  while ( 1 )
  {
LABEL_2:
    v7 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v3;
    }
    if ( v7 == 37 )
    {
      v7 = *++a3;
      if ( *a3 != 37 )
        break;
    }
    if ( !a2 || *a1 != v7 )
      return 0xFFFFFFFFLL;
    ++a1;
    --a2;
    ++a3;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *a3;
      if ( v10 <= 0x39 && v10 >= 0x30 )
      {
        v9 = v10 + 2 * (5 * v9 - 24);
        goto LABEL_9;
      }
      if ( v10 != 108 )
        break;
      ++v8;
      ++a3;
    }
    if ( (((_WORD)v10 - 88) & 0xFFDF) == 0 )
      break;
LABEL_9:
    ++a3;
  }
  v11 = 0;
  v18 = a3 + 1;
  if ( !v9 )
  {
LABEL_17:
    v15 = (_DWORD *)v5[1];
    ++v5;
    if ( v8 )
      *v15 = v11;
    else
      *(_WORD *)v15 = v11;
    ++v3;
    a3 = v18;
    goto LABEL_2;
  }
  while ( 1 )
  {
    --v9;
    if ( !a2 )
      return 0xFFFFFFFFLL;
    v12 = (unsigned __int16)*a1;
    v13 = 16 * v11;
    if ( (unsigned __int16)(v12 - 48) > 9u )
    {
      if ( (unsigned __int16)(v12 - 97) > 5u )
      {
        if ( (unsigned __int16)(v12 - 65) > 5u )
          return 0xFFFFFFFFLL;
        v14 = v13 - 55;
      }
      else
      {
        v14 = v13 - 87;
      }
    }
    else
    {
      v14 = v13 - 48;
    }
    v11 = v12 + v14;
    ++a1;
    --a2;
    if ( !v9 )
      goto LABEL_17;
  }
}
