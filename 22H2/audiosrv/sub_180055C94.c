/*
 * XREFs of sub_180055C94 @ 0x180055C94
 * Callers:
 *     sub_1800559D4 @ 0x1800559D4 (sub_1800559D4.c)
 *     sub_1800BAD3C @ 0x1800BAD3C (sub_1800BAD3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180055C94(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v5; // r10d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r11
  unsigned __int16 *v9; // rax
  __int64 v10; // r8
  int v11; // edx
  int v12; // ecx

  v3 = a1 + 8;
  v5 = 0;
  v6 = 0LL;
  v7 = (a2 - (a1 + 8) + 7) >> 3;
  if ( a1 + 8 > a2 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      if ( *(_QWORD *)v3 )
      {
        if ( !a3 )
          goto LABEL_6;
        v9 = *(unsigned __int16 **)(*(_QWORD *)v3 + 32LL);
        if ( v9 )
        {
          v10 = a3 - (_QWORD)v9;
          do
          {
            v11 = *(unsigned __int16 *)((char *)v9 + v10);
            v12 = *v9 - v11;
            if ( v12 )
              break;
            ++v9;
          }
          while ( v11 );
          if ( !v12 )
LABEL_6:
            ++v5;
        }
      }
      v3 += 8LL;
      ++v6;
    }
    while ( v6 < v7 );
  }
  return v5;
}
