/*
 * XREFs of RtlFindNextAlignedForwardRunClear @ 0x1402547F4
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x14063AE30 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextAlignedForwardRunClear(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned int v7; // eax
  int v8; // r10d
  unsigned __int64 v9; // rbp
  _DWORD *i; // r9
  char v11; // al
  int v12; // ebx
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v16; // r8d

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
    v12 = *i | *((_DWORD *)qword_140012120 + (v11 & 0x1F));
    if ( (v12 & v8) != v8 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( !_bittest(&v12, v13) )
        {
          v14 = 0;
          if ( v4 < v3 )
          {
            do
            {
              if ( _bittest64(*((const signed __int64 **)a1 + 1), v4) )
                break;
              ++v4;
              if ( ++v14 == a3 )
                return v4 - v14;
            }
            while ( v4 < v3 );
            if ( v14 )
            {
              v16 = v14 + v13 + 1;
              if ( v16 >= 0x20 )
              {
                ++v4;
                goto LABEL_4;
              }
              v13 = v16 - 1;
            }
          }
        }
        ++v13;
        ++v4;
        if ( v13 >= 0x20 )
          goto LABEL_10;
      }
    }
    v4 += 32;
LABEL_10:
    ;
  }
  return 0xFFFFFFFFLL;
}
