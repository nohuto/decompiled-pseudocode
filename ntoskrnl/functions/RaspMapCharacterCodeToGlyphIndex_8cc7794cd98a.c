__int64 __fastcall RaspMapCharacterCodeToGlyphIndex(unsigned int *a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r11d
  int v4; // r10d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int16 v10; // r10

  v3 = 0;
  v4 = a2;
  v6 = 0;
  v7 = *a1;
  if ( v7 )
  {
    do
    {
      if ( *(_WORD *)(*((_QWORD *)a1 + 2) + 2LL * v6) <= a2 && a2 <= *(_WORD *)(*((_QWORD *)a1 + 3) + 2LL * v6) )
        break;
      ++v6;
    }
    while ( v6 < v7 );
  }
  if ( v6 == v7 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(unsigned __int16 *)(v8 + 2LL * v6);
    if ( (_WORD)v9 )
      v10 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * v6)
          + *(_WORD *)(v8 + 2LL * (v4 + v6 + (v9 >> 1) - *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2LL * v6)));
    else
      v10 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * v6) + v4;
    *a3 = v10;
  }
  return v3;
}
