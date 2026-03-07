__int64 __fastcall EtwpParsePoolTagFilter(__int64 a1, __int64 a2)
{
  _WORD *v2; // r10
  int v3; // r9d
  int v4; // r8d
  __int16 v5; // r11
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // [rsp+8h] [rbp+8h]

  v2 = *(_WORD **)(a1 + 8);
  v10 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*v2 )
    return 0LL;
  do
  {
    if ( v3 == 1 )
    {
      v7 = v5;
      if ( *v2 == 42 )
        v3 = 2;
      ++v5;
      *((_BYTE *)&v10 + v7) = *(_BYTE *)v2;
      v6 = v10;
      if ( v5 == 4 )
        v3 = 2;
    }
    else
    {
      if ( *v2 != 59 || (unsigned __int16)v4 >= 4u )
        return 0LL;
      v8 = (unsigned __int16)v4;
      v5 = 0;
      LOWORD(v4) = v4 + 1;
      v10 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4 * v8) = v6;
      v6 = 0;
    }
    ++v2;
  }
  while ( *v2 );
  if ( v3 != 2 || (unsigned __int16)v4 >= 4u )
    return 0LL;
  *(_DWORD *)(a2 + 4LL * (unsigned __int16)v4) = v6;
  return (unsigned int)(v4 + 1);
}
