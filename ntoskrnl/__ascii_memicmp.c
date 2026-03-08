/*
 * XREFs of __ascii_memicmp @ 0x1403F19C8
 * Callers:
 *     _memicmp @ 0x1403F1A30 (_memicmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_memicmp(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r10d
  __int64 v5; // rcx
  int v6; // r11d
  int v7; // ebx

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    v5 = a1 - (_QWORD)a2;
    do
    {
      v6 = a2[v5];
      --a3;
      v7 = *a2;
      if ( (_BYTE)v6 != (_BYTE)v7 )
      {
        v3 = v6 + 32;
        if ( (unsigned __int8)(v6 - 65) > 0x19u )
          v3 = a2[v5];
        v4 = v7 + 32;
        if ( (unsigned __int8)(v7 - 65) > 0x19u )
          v4 = *a2;
        if ( v3 != v4 )
          break;
      }
      ++a2;
    }
    while ( a3 );
  }
  return (unsigned int)(v3 - v4);
}
