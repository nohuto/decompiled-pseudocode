__int64 __fastcall RtlFindNextAlignedForwardRunClear(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned int v7; // eax
  int v8; // r10d
  unsigned __int64 v9; // rbp
  _DWORD *i; // r9
  char v11; // al
  int v12; // edi
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v15; // r8d

  v3 = *a1;
  v4 = 0;
  v7 = 1;
  v8 = 1;
  do
    v8 |= 1 << v7++;
  while ( v7 < 0x20 );
  v9 = *((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)(v3 - 1) >> 5);
LABEL_4:
  for ( i = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)v4 >> 5)); (unsigned __int64)i <= v9; ++i )
  {
    v11 = v4;
    v4 &= 0xFFFFFFE0;
    v12 = *((_DWORD *)qword_140016150 + (v11 & 0x1F)) | *i;
    if ( (v12 & v8) != v8 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( !_bittest(&v12, v13) )
        {
          v14 = 0;
          if ( v4 < v3 )
            break;
        }
LABEL_9:
        ++v4;
        if ( ++v13 >= 0x20 )
          goto LABEL_20;
      }
      do
      {
        if ( _bittest64(*((const signed __int64 **)a1 + 1), v4) )
          break;
        ++v4;
        if ( ++v14 == a3 )
          return v4 - v14;
      }
      while ( v4 < v3 );
      if ( !v14 )
        goto LABEL_9;
      v15 = v14 + v13 + 1;
      if ( v15 < 0x20 )
      {
        v13 = v15 - 1;
        goto LABEL_9;
      }
      ++v4;
      goto LABEL_4;
    }
    v4 += 32;
LABEL_20:
    ;
  }
  return 0xFFFFFFFFLL;
}
