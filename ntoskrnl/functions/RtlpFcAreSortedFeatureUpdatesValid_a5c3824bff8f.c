char __fastcall RtlpFcAreSortedFeatureUpdatesValid(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  int v4; // eax
  _DWORD *v5; // r8
  int v6; // r11d
  __int64 v7; // rdx
  unsigned int *i; // rcx
  unsigned int v9; // eax
  int v10; // r8d

  v2 = 1LL;
  if ( a2 <= 1 )
  {
    v7 = 0LL;
    if ( !a2 )
      return 1;
LABEL_8:
    for ( i = a1 + 1; ; i += 8 )
    {
      v9 = i[6];
      if ( (v9 & 4) != 0 && v9 != 4 )
        break;
      if ( *i > 0xF )
        break;
      v10 = 33281;
      if ( _bittest(&v10, *i) || i[1] > 2 || i[2] > 1 || *((_BYTE *)i + 12) >= 0x40u || i[4] >= 4 )
        break;
      if ( ++v7 >= a2 )
        return 1;
    }
  }
  else
  {
    v4 = *a1;
    v5 = a1;
    while ( 1 )
    {
      v6 = v5[8];
      if ( v6 == v4 && v5[9] == v5[1] )
        break;
      ++v2;
      v5 += 8;
      v4 = v6;
      if ( v2 >= a2 )
      {
        v7 = 0LL;
        goto LABEL_8;
      }
    }
  }
  return 0;
}
