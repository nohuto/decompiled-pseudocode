__int64 __fastcall IopSizeTriageDumpDataBlocks(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  _DWORD *v7; // rbx
  unsigned int v8; // edx
  unsigned int v9; // eax

  a1[31] = 0;
  v5 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD **)(a3 + 8);
      v8 = 0;
      if ( *(_DWORD *)a3 )
        break;
LABEL_7:
      ++v5;
      a3 += 16LL;
      if ( v5 >= a2 )
        return a4;
    }
    while ( 1 )
    {
      v9 = ((v7[2] - *v7 + 7) & 0xFFFFFFF8) + a4 + 16;
      if ( v9 >= a5 )
        break;
      if ( !v8 )
        a1[30] = a4;
      ++a1[31];
      ++v8;
      v7 += 4;
      a4 = v9;
      if ( v8 >= *(_DWORD *)a3 )
        goto LABEL_7;
    }
    a1[17] |= 0x100u;
  }
  return a4;
}
