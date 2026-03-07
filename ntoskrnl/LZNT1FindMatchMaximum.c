__int64 __fastcall LZNT1FindMatchMaximum(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rsi
  unsigned int v5; // edi
  unsigned int v7; // r8d
  unsigned __int64 v8; // r11
  unsigned int v9; // ecx
  _BYTE *v10; // rdx

  v2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 16);
  v7 = 0;
  if ( *(_QWORD *)a2 >= (unsigned __int64)a1 )
    return 0LL;
  v8 = v2 - (_QWORD)a1;
  do
  {
    v9 = 0;
    if ( v5 )
    {
      v10 = a1;
      do
      {
        if ( (unsigned __int64)&a1[v9] >= v3 )
          break;
        if ( *v10 != v10[v8] )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v5 );
    }
    if ( v9 >= v7 )
    {
      v7 = v9;
      *(_QWORD *)(a2 + 24) = v2;
    }
    ++v2;
    ++v8;
  }
  while ( v2 < (unsigned __int64)a1 );
  if ( v7 < 3 )
    return 0;
  return v7;
}
